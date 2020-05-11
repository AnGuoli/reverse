//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMChatApiDelegate.h"

@class NSArray, XMUserInfo;

@interface XMChatSetting : XMChatApiDelegate
{
    NSArray *_sysMsgList;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedSettings;
@property(retain, nonatomic) NSArray *sysMsgList; // @synthesize sysMsgList=_sysMsgList;
- (void).cxx_destruct;
- (void)gotoWebView:(id)arg1;
- (void)createOrderForGroup:(long long)arg1 businessTypeId:(long long)arg2 itemId:(long long)arg3 name:(id)arg4;
- (void)dismissNPQACmtInputView:(id)arg1;
- (void)showQACmtInputViewInCtrl:(id)arg1 text:(id)arg2;
- (id)getGroupShareModel:(id)arg1 type:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)showGiftViewWithParams:(id)arg1;
- (void)stopAllGiftViewAnimation:(id)arg1;
- (id)liveGiftHelpWithView:(id)arg1;
- (void)liveHelper:(id)arg1 showDynamicGift:(id)arg2 immediately:(_Bool)arg3;
- (void)shareCallBackWithShareResult:(_Bool)arg1;
- (void)openPrivacyCommonSettingPage;
- (void)openAlbumBuyPageWithType:(long long)arg1 albumId:(long long)arg2 albumName:(id)arg3;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)shareGroupQRCodeWithCtrl:(id)arg1 view:(id)arg2 index:(long long)arg3;
- (id)QRImageWithString:(id)arg1 imageSize:(double)arg2;
- (void)postFollowNotificationWithUid:(unsigned long long)arg1 followed:(_Bool)arg2;
- (void)reportToUid:(long long)arg1 payload:(id)arg2;
- (void)showTopicReplyDetailView:(id)arg1;
- (void)openUserDetailView:(long long)arg1;
- (void)uploadAudioFile:(id)arg1 sourceName:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)trackExceptionWithModule:(id)arg1 withReason:(id)arg2;
- (_Bool)needShowKeyMessageTip;
- (id)uniqueDeviceIdentifier;
- (void)updateUIAboutNewMessageCount;
- (void)pushAnchorGradeView;
- (void)playTrackId:(long long)arg1;
- (long long)playingTrackId;
- (_Bool)isPlaying;
- (void)openLocalIting:(id)arg1;
- (void)openUrl:(id)arg1;
@property(readonly, nonatomic) _Bool isLoggedIn;
@property(readonly, nonatomic) XMUserInfo *userInfo;
- (void)loadAppInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

