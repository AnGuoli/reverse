//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCustomTextInputModalView.h"

@protocol WBGroupCreationAlertViewDelegate;

@interface WBCustomTextInputAlertView : WBCustomTextInputModalView
{
    id <WBGroupCreationAlertViewDelegate> _groupCreationDelegate;
}

@property(nonatomic) id <WBGroupCreationAlertViewDelegate> groupCreationDelegate; // @synthesize groupCreationDelegate=_groupCreationDelegate;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (void)WBCustomModalView_commonInit;
- (void)groupNameFieldDidChange:(id)arg1;
- (id)confirmButton;
- (void)groupCreatingFailedWithName:(id)arg1 error:(id)arg2;
- (void)groupCreated:(id)arg1;
- (void)showPormotLablel;
- (_Bool)didPressOkButtonInCustomTextInputModalView:(id)arg1;
- (_Bool)didPressCancelButtonInCustomTextInputModalView:(id)arg1;
- (void)drawCursomViewBasedOnRect:(struct CGRect)arg1;
- (struct CGSize)recalcSizeAndLayout:(_Bool)arg1;
- (id)backgroundImage;
- (void)initButtons;
- (id)init;

@end

