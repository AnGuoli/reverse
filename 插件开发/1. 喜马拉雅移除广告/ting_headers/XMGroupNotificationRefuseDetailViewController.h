//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

@class NSString, UILabel, XMGroupNotificationItem;

@interface XMGroupNotificationRefuseDetailViewController : XMBaseVC
{
    XMGroupNotificationItem *_notification;
    UILabel *_operateTime;
    NSString *_requirement;
}

@property(retain, nonatomic) NSString *requirement; // @synthesize requirement=_requirement;
@property(retain, nonatomic) UILabel *operateTime; // @synthesize operateTime=_operateTime;
@property(retain, nonatomic) XMGroupNotificationItem *notification; // @synthesize notification=_notification;
- (void).cxx_destruct;
- (void)requestGroupNotificationDetail;
- (void)applyToJoinGroupAgain;
- (void)buildUI;
- (void)viewDidLoad;

@end

