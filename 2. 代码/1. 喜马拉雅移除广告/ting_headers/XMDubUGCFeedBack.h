//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;
@protocol XMDubUGCFeedBackDelegate;

@interface XMDubUGCFeedBack : UIView
{
    id <XMDubUGCFeedBackDelegate> _delegate;
    NSMutableArray *_checkList;
}

@property(retain, nonatomic) NSMutableArray *checkList; // @synthesize checkList=_checkList;
@property(nonatomic) __weak id <XMDubUGCFeedBackDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onConfirm;
- (void)onCancel;
- (void)onClick:(id)arg1;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

