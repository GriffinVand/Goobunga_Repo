#include "DialogueReplyWidget.h"

#include "CommonButtonBase.h"

void UDialogueReplyWidget::NativeConstruct()
{
	if (ReplyButton)
	{
		ReplyButton->OnClicked().Clear();
		ReplyButton->OnClicked().AddLambda([this]()
		{
			OnReplySelected.Broadcast(ReplyIndex);
		});
	}
}
