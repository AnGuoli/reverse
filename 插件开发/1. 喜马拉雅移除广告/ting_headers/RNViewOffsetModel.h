//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIScrollView;
@protocol RNViewOffsetProvider;

@interface RNViewOffsetModel : NSObject
{
    _Bool _isInit;
    UIScrollView *_scrollview;
    double _rnScrollviewInset;
    double _rnScrollviewOffset;
    double _currentTag;
    id <RNViewOffsetProvider> _provider;
    UIScrollView *_rctScrollview;
    UIScrollView *_cyclerListview;
    double _contentOffset;
}

@property(nonatomic) _Bool isInit; // @synthesize isInit=_isInit;
@property(nonatomic) double contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) __weak UIScrollView *cyclerListview; // @synthesize cyclerListview=_cyclerListview;
@property(nonatomic) __weak UIScrollView *rctScrollview; // @synthesize rctScrollview=_rctScrollview;
@property(nonatomic) __weak id <RNViewOffsetProvider> provider; // @synthesize provider=_provider;
@property(nonatomic) double currentTag; // @synthesize currentTag=_currentTag;
@property(nonatomic) double rnScrollviewOffset; // @synthesize rnScrollviewOffset=_rnScrollviewOffset;
@property(nonatomic) double rnScrollviewInset; // @synthesize rnScrollviewInset=_rnScrollviewInset;
@property(nonatomic) __weak UIScrollView *scrollview; // @synthesize scrollview=_scrollview;
- (void).cxx_destruct;
- (void)setCurrentScrollviewTag:(id)arg1;
- (void)setScrollviewContentInset:(double)arg1;
- (void)setScrollviewOffset:(double)arg1 animated:(_Bool)arg2;
- (void)setRnCyclerListview:(id)arg1;
- (void)setRNScrollview:(id)arg1;
- (id)initWithProvider:(id)arg1;
- (void)dealloc;

@end

