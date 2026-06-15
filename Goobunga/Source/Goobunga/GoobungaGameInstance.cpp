#include "GoobungaGameInstance.h"

#include "MoviePlayer.h"
#include "Blueprint/UserWidget.h"

void UGoobungaGameInstance::Init()
{
	Super::Init();
	
	FCoreUObjectDelegates::PreLoadMap.AddUObject(this, &UGoobungaGameInstance::StartLoadingScreen);
	FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UGoobungaGameInstance::EndLoadingScreen);
}

void UGoobungaGameInstance::SetDefaultSaveFile(UGoobungaSaveFile& SaveFile)
{
	SaveFile.CurrentHub = "L_Forest";
	SaveFile.PlayerPrimaryWeapon = DefPrimaryWeapon;
	SaveFile.PlayerSecondaryWeapon = DefSecondaryWeapon;
	SaveFile.PlayerHealAbility = DefHealAbility;
	SaveFile.PlayerSmallAbility = DefSmallAbility;
	SaveFile.PlayerLargeAbility = DefLargeAbility;
	SaveFile.PlayerMoney = CurrentMoney;
}

void UGoobungaGameInstance::StartLoadingScreen(const FString& MapName)
{
	UE_LOG(LogTemp, Error, TEXT("Loading screen called"));
	
	FLoadingScreenAttributes LoadingScreen;
	LoadingScreen.bAutoCompleteWhenLoadingCompletes = false;
	LoadingScreen.MinimumLoadingScreenDisplayTime = 2.0f;
	if (UUserWidget* LoadingWidget = CreateWidget<UUserWidget>(GetWorld(), LoadingScreenClass))
	{
		LoadingScreen.WidgetLoadingScreen = LoadingWidget->TakeWidget();
	} else { LoadingScreen.WidgetLoadingScreen = FLoadingScreenAttributes::NewTestLoadingScreenWidget(); }
	GetMoviePlayer()->SetupLoadingScreen(LoadingScreen);
}

void UGoobungaGameInstance::EndLoadingScreen(UWorld* World)
{
	
}
