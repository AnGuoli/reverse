//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

@interface YXBaseLogModel : NSObject
{
    NSString *_eventId;
    NSString *_tag;
    UIViewController *_viewController;
}

+ (id)modelWithEventId:(id)arg1 tag:(id)arg2 viewController:(id)arg3;
+ (id)modelWithEventId:(id)arg1;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (id)dictOfClass:(Class)arg1;
- (id)allDict;
- (id)toDict;

@end

