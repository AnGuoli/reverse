//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCRedEnvelopesControlLogic.h"

#import "ContactsCreateChatRoomLogicDelegate-Protocol.h"
#import "IWCPayControlLogicExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "MMUseCaseCallback-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCBaseControlLogicDeleagte-Protocol.h"
#import "WCBaseControlMgrExt-Protocol.h"
#import "WCPayPayMoneyLogicDelegate-Protocol.h"
#import "WCRedEnvelopesConfirmShowResourcesCgiDelegate-Protocol.h"
#import "WCRedEnvelopesDeleteResourceCgiDelegate-Protocol.h"
#import "WCRedEnvelopesGetShowResourcesCgiDelegate-Protocol.h"
#import "WCRedEnvelopesMadeHBSuccessViewDelegate-Protocol.h"
#import "WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate-Protocol.h"
#import "WCRedEnvelopesMultiSelectContactsViewControllerDelegate-Protocol.h"
#import "WCRedEnvelopesReportCgiDelegate-Protocol.h"
#import "WCRedEnvelopesSelectSkinViewControllerDelegate-Protocol.h"
#import "WCRedEnvelopesSessionSelectViewControllerDelegate-Protocol.h"
#import "WCRedEnvelopesWelcomePageViewControllerDelegate-Protocol.h"

@class ContactsCreateChatRoomLogic, HbEnvelopSource, NSDictionary, NSMutableArray, NSString, WCPayControlData, WCPayJumpRemindControlLogic, WCPayPayMoneyLogic, WCRedEnvelopesConfirmShowResourcesCgi, WCRedEnvelopesDeleteResourceCgi, WCRedEnvelopesGetShowResourcesCgi, WCRedEnvelopesGreetingControlLogic, WCRedEnvelopesMadeHBSuccessView, WCRedEnvelopesReportCgi;

@interface WCRedEnvelopesSendControlLogic : WCRedEnvelopesControlLogic <MMWebViewDelegate, MMTipsViewControllerDelegate, WCRedEnvelopesSelectSkinViewControllerDelegate, WCRedEnvelopesGetShowResourcesCgiDelegate, WCRedEnvelopesConfirmShowResourcesCgiDelegate, WCPayPayMoneyLogicDelegate, WCRedEnvelopesReportCgiDelegate, WCRedEnvelopesDeleteResourceCgiDelegate, MMUseCaseCallback, WCBaseControlLogicDeleagte, WCBaseControlMgrExt, WCRedEnvelopesWelcomePageViewControllerDelegate, WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate, WCRedEnvelopesMultiSelectContactsViewControllerDelegate, WCRedEnvelopesSessionSelectViewControllerDelegate, WCActionSheetDelegate, IWCPayControlLogicExt, WCRedEnvelopesMadeHBSuccessViewDelegate, ContactsCreateChatRoomLogicDelegate>
{
    WCPayPayMoneyLogic *m_payMoneyLogic;
    WCPayControlData *oPayData;
    int m_scene;
    int m_enMadeRedEnvelopesType;
    WCRedEnvelopesMadeHBSuccessView *m_oWCRedEnvelopesMadeHBSuccessView;
    ContactsCreateChatRoomLogic *createChatRoomLogic;
    _Bool _isUserConfirmJump;
    _Bool _isNeedReturnToSession;
    _Bool _isRetryOperationWhenPrepay;
    NSString *_curAlertRightUrl;
    WCRedEnvelopesGetShowResourcesCgi *_getShowResourcesCgi;
    WCRedEnvelopesConfirmShowResourcesCgi *_confirmShowResourcesCgi;
    WCRedEnvelopesDeleteResourceCgi *_deleteShowResourceCgi;
    WCRedEnvelopesReportCgi *_reportWxhbCgi;
    HbEnvelopSource *_selectedConfirmHbResource;
    NSMutableArray *_downloadHbSourceQueue;
    NSDictionary *_lastReqKeyStruck;
    WCPayJumpRemindControlLogic *_jumpRemindLogic;
    long long _lastUnpayReason;
    NSString *_uniqueId;
    WCRedEnvelopesGreetingControlLogic *_m_sendGreetingHBLogic;
    NSString *_reportSessionId;
}

+ (void)reportWithAction:(unsigned long long)arg1 sessionId:(id)arg2;
@property(retain) NSString *reportSessionId; // @synthesize reportSessionId=_reportSessionId;
@property(nonatomic) _Bool isRetryOperationWhenPrepay; // @synthesize isRetryOperationWhenPrepay=_isRetryOperationWhenPrepay;
@property(retain, nonatomic) WCRedEnvelopesGreetingControlLogic *m_sendGreetingHBLogic; // @synthesize m_sendGreetingHBLogic=_m_sendGreetingHBLogic;
@property(nonatomic) _Bool isNeedReturnToSession; // @synthesize isNeedReturnToSession=_isNeedReturnToSession;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) long long lastUnpayReason; // @synthesize lastUnpayReason=_lastUnpayReason;
@property(nonatomic) _Bool isUserConfirmJump; // @synthesize isUserConfirmJump=_isUserConfirmJump;
@property(retain, nonatomic) WCPayJumpRemindControlLogic *jumpRemindLogic; // @synthesize jumpRemindLogic=_jumpRemindLogic;
@property(retain, nonatomic) NSDictionary *lastReqKeyStruck; // @synthesize lastReqKeyStruck=_lastReqKeyStruck;
@property(retain, nonatomic) NSMutableArray *downloadHbSourceQueue; // @synthesize downloadHbSourceQueue=_downloadHbSourceQueue;
@property(retain, nonatomic) HbEnvelopSource *selectedConfirmHbResource; // @synthesize selectedConfirmHbResource=_selectedConfirmHbResource;
@property(retain, nonatomic) WCRedEnvelopesReportCgi *reportWxhbCgi; // @synthesize reportWxhbCgi=_reportWxhbCgi;
@property(retain, nonatomic) WCRedEnvelopesDeleteResourceCgi *deleteShowResourceCgi; // @synthesize deleteShowResourceCgi=_deleteShowResourceCgi;
@property(retain, nonatomic) WCRedEnvelopesConfirmShowResourcesCgi *confirmShowResourcesCgi; // @synthesize confirmShowResourcesCgi=_confirmShowResourcesCgi;
@property(retain, nonatomic) WCRedEnvelopesGetShowResourcesCgi *getShowResourcesCgi; // @synthesize getShowResourcesCgi=_getShowResourcesCgi;
@property(retain, nonatomic) NSString *curAlertRightUrl; // @synthesize curAlertRightUrl=_curAlertRightUrl;
- (void).cxx_destruct;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)OnWCRedEnvelopesSelectSkinViewControllerNeedRefresh;
- (void)callReportWxhbCgi:(int)arg1;
- (void)call:(id)arg1;
- (void)onWCRedEnvelopesDeleteResourceCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesDeleteResourceCgiResponseOK:(id)arg1;
- (void)OnWCRedEnvelopesSelectSkinViewControllerDelete:(id)arg1;
- (void)saveHbResourceToLocalCache:(id)arg1;
- (void)OnWCRedEnvelopesSelectSkinViewControllerBack;
- (void)OnWCRedEnvelopesSelectSkinViewControllerConfirm:(id)arg1;
- (void)onWCRedEnvelopesConfirmShowResourcesCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesConfirmShowResourcesCgiResponseOK:(id)arg1;
- (void)onWCRedEnvelopesGetShowResourcesCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesGetShowResourcesCgiResponseOK:(id)arg1;
- (void)OnClickSelectSkin;
- (void)prepayAlertViewConfirmClick;
- (void)webViewReturn:(id)arg1;
- (void)onWebViewWillClose:(id)arg1;
- (void)setScene:(int)arg1;
- (void)OnJumpedToReceiveList;
- (void)OnSendShareRedEnvelopesoRequest:(id)arg1 Error:(id)arg2;
- (void)OnGenH5RedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)OnContinueGenRedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)OnGenRedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)preDownloadHbShowResource:(id)arg1;
- (void)OnQueryRedEnvelopesUserInfo:(id)arg1 isCahceInfo:(_Bool)arg2 Error:(id)arg3;
- (_Bool)gotoViewController:(id)arg1;
- (void)WCRedEnvelopesMadeHBSuccessViewSendHB;
- (void)WCRedEnvelopesMadeHBSuccessViewBack;
- (void)OnWCRedEnvelopesSendSuccessViewAnimationDidStop;
- (void)OnCreateRoom:(id)arg1;
- (void)OnSelectMutilContactsButton;
- (_Bool)OnFilterSessionContact:(id)arg1;
- (void)GotoNotReceivedListLogic;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSessionReturn:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnConfirmCreateChatRoomAndSendMessageSelectSessionViewController;
- (void)OnConfirmSendMessageSelectSessionViewController;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)showSetPwdTipsView;
- (void)OnGotoRootViewController;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onPayMoneyLogicDidStop;
- (void)gotoSelectSessionViewController;
- (void)OnClickViewHBHistory;
- (void)OnClickNotReceivedButton;
- (void)OnMakeWCRedEnvelopesButtonClick:(id)arg1;
- (void)OnWCRedEnvelopesMakeRedEnvelopesViewControllerBack;
- (void)OnWCRedEnvelopesWelcomePageViewControllerSelectNormalRedEnvelopes;
- (void)OnWCRedEnvelopesWelcomePageViewControllerSelectRadmonRedEnvelopes;
- (void)checkAndGoWeishi;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnWCRedEnvelopesWelcomePageViewControllerMyRedEnvelopesList;
- (void)OnWCRedEnvelopesWelcomePageViewControllerBack;
- (void)stopLogic;
- (void)dealloc;
- (_Bool)shouldShowHongBaoAbtestEntry;
- (long long)maxCountForWeishiUrl;
- (id)appstoreForWeishi;
- (id)urlForWeishi;
- (_Bool)disableShareForWeishiUrl;
- (id)schemeForWeishi;
- (id)descForWeiShi;
- (id)titleForWeiShi;
- (id)weiShiWordingConfig;
- (id)weiShiConfig;
- (_Bool)shouldShowWeiShiEntry:(id)arg1;
- (void)toGroupRedEnvelopes;
- (void)startLogic;
- (id)initWithData:(id)arg1 Scene:(int)arg2 RedEnvelopesType:(int)arg3;
- (id)initWithData:(id)arg1;
- (id)getData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

