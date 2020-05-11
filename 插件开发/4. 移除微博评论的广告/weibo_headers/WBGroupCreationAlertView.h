//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCustomTextInputModalView.h"

#import "WBCustomTextInputModalViewDelegate-Protocol.h"

@class NSString;
@protocol WBGroupCreationAlertViewDelegate;

@interface WBGroupCreationAlertView : WBCustomTextInputModalView <WBCustomTextInputModalViewDelegate>
{
    id <WBGroupCreationAlertViewDelegate> _groupCreationDelegate;
}

@property(nonatomic) id <WBGroupCreationAlertViewDelegate> groupCreationDelegate; // @synthesize groupCreationDelegate=_groupCreationDelegate;
- (void)groupNameFieldDidChange:(id)arg1;
- (id)confirmButton;
- (void)groupCreatingFailedWithName:(id)arg1 error:(id)arg2;
- (void)groupCreated:(id)arg1;
- (_Bool)didPressOkButtonInCustomTextInputModalView:(id)arg1;
- (_Bool)didPressCancelButtonInCustomTextInputModalView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

