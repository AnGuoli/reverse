//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WBStoryChallengeModel;
@protocol WBStoryPublishBottomViewDelegate;

@protocol WBStoryPublishBottomViewTypeProtocol <NSObject>
@property(nonatomic) __weak id <WBStoryPublishBottomViewDelegate> delegate;

@optional
- (void)setDesc:(NSString *)arg1;
- (void)updateGroupType:(unsigned long long)arg1;
- (void)updateChallengeTag:(WBStoryChallengeModel *)arg1 isCreated:(_Bool)arg2;
- (void)textViewResignFirstResponder;
- (void)textViewPrepareForDisplay;
@end

