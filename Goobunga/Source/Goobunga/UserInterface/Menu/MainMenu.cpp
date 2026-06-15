#include "MainMenu.h"

#include "GenericButton.h"
#include "Goobunga/UserInterface/GenericWidgetStack.h"
#include "StartMenu.h"
#include "LoadMenu.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UMainMenu::NativeConstruct()
{
	Super::NativeConstruct();
	BackButton->SetVisibility(ESlateVisibility::Hidden);
	BackButton->OnClicked().AddUObject(this, &UMainMenu::HandleBackClicked);
}

void UMainMenu::NativeOnActivated()
{
	DisplayStartMenu();
	UpdateBackButton();
}

void UMainMenu::NativeOnDeactivated()
{
	MainMenuStack->ClearWidgets();
	DesiredStackCount = 0;
}

void UMainMenu::DisplayStartMenu()
{
	if (StartMenuClass)
	{
		UStartMenu* StartMenu = Cast<UStartMenu>(MainMenuStack->PushWidget(StartMenuClass));
		if (!StartMenu) { UE_LOG(LogTemp, Error, TEXT("Failed to create start menu UMainMenu::DisplayStartMenu")); return; }
		StartMenu->StartButton->OnClicked().RemoveAll(this);
		StartMenu->StartButton->OnClicked().AddUObject(this, &UMainMenu::HandleStartClicked);
		StartMenu->SettingsButton->OnClicked().RemoveAll(this);
		StartMenu->SettingsButton->OnClicked().AddUObject(this, &UMainMenu::HandleSettingsClicked);
		StartMenu->QuitButton->OnClicked().RemoveAll(this);
		StartMenu->QuitButton->OnClicked().AddUObject(this, &UMainMenu::HandleQuitClicked);
		DesiredStackCount++;
	}
}

void UMainMenu::HandleBackClicked()
{
	MainMenuStack->PopWidget();
	DesiredStackCount--;
	UpdateBackButton();
}

void UMainMenu::UpdateBackButton()
{
	UE_LOG(LogTemp, Log, TEXT("Stack count %d"), MainMenuStack->GetNumWidgets());
	BackButton->SetVisibility(DesiredStackCount > 1 ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
}

void UMainMenu::HandleStartClicked()
{
	if (LoadMenuClass) { MainMenuStack->PushWidget(LoadMenuClass); DesiredStackCount++; }
	UpdateBackButton();
}

void UMainMenu::HandleSettingsClicked()
{
	//Create settings menu
}

void UMainMenu::HandleQuitClicked()
{
	UKismetSystemLibrary::QuitGame(this, UGameplayStatics::GetPlayerController(this, 0), EQuitPreference::Quit, false);
}
