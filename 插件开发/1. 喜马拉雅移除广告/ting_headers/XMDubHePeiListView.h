//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface XMDubHePeiListView : UIView
{
    NSArray *_roles;
    CDUnknownBlockType _clickIndex;
    long long _index;
    NSMutableArray *_viewList;
}

@property(retain, nonatomic) NSMutableArray *viewList; // @synthesize viewList=_viewList;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(copy, nonatomic) CDUnknownBlockType clickIndex; // @synthesize clickIndex=_clickIndex;
@property(retain, nonatomic) NSArray *roles; // @synthesize roles=_roles;
- (void).cxx_destruct;
- (void)onClick:(id)arg1;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

