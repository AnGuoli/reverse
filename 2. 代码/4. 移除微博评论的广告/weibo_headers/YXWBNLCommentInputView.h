//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLCommentInputView.h"

@class NSString, WBNLDiversionMessageConfigModel;

@interface YXWBNLCommentInputView : WBNLCommentInputView
{
    _Bool _barrageEnabled;
    _Bool _isCanRequestMessageSend;
    WBNLDiversionMessageConfigModel *_messageConfigModel;
    long long _unLockDanmukuCount;
    NSString *_danmkuString;
}

@property(retain, nonatomic) NSString *danmkuString; // @synthesize danmkuString=_danmkuString;
@property(nonatomic) long long unLockDanmukuCount; // @synthesize unLockDanmukuCount=_unLockDanmukuCount;
@property(nonatomic) _Bool isCanRequestMessageSend; // @synthesize isCanRequestMessageSend=_isCanRequestMessageSend;
@property(nonatomic) _Bool barrageEnabled; // @synthesize barrageEnabled=_barrageEnabled;
@property(retain, nonatomic) WBNLDiversionMessageConfigModel *messageConfigModel; // @synthesize messageConfigModel=_messageConfigModel;
- (void).cxx_destruct;
- (void)openOrDownload:(id)arg1 withStrategy:(id)arg2;
- (void)showDiverSionAlert:(id)arg1;
- (void)freeBtnPressed;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)getDanmukuCountHttpClient;
- (void)requestMessageSendWithLiveId:(id)arg1 withScid:(id)arg2 withExtInfo:(id)arg3;
- (void)inputKeyboardWillShow:(id)arg1;
- (_Bool)stateShouldChangedTo:(_Bool)arg1;
- (void)textFieldEditingChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)updatePlaceHolderStringWithDanmNum:(long long)arg1 unlockDanmaku:(long long)arg2;
- (void)setStateChanged:(_Bool)arg1;
- (void)stateChanged:(_Bool)arg1;
- (void)showForTaobaoLiveRoom:(_Bool)arg1;
- (void)show:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

