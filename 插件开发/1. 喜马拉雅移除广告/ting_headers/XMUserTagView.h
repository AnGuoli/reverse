//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, XMPersonItem;

@interface XMUserTagView : UIView
{
    CDUnknownBlockType _onTagBtn;
    NSMutableArray *_btnMarr;
    XMPersonItem *_personItem;
}

+ (double)viewHeight:(id)arg1;
@property(retain, nonatomic) XMPersonItem *personItem; // @synthesize personItem=_personItem;
@property(retain, nonatomic) NSMutableArray *btnMarr; // @synthesize btnMarr=_btnMarr;
@property(copy, nonatomic) CDUnknownBlockType onTagBtn; // @synthesize onTagBtn=_onTagBtn;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setDataSource:(id)arg1;
- (void)onTagBtn:(id)arg1;
- (void)customInit;
- (id)init;

@end

