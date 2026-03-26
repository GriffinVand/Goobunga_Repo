#include "DialogueReplyWidget.h"

#include "CommonButtonBase.h"

void UDialogueReplyWidget::NativeConstruct()
{
	if (ReplyButton)
	{
		ReplyButton->OnClicked().AddLambda([this]()
		{
			OnReplySelected.Broadcast(ReplyIndex);
		});
	}
}
