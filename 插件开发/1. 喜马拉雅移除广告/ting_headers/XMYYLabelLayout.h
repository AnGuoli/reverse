//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseLayout.h"

@class YYTextLayout;

@interface XMYYLabelLayout : XMBaseLayout
{
    YYTextLayout *_textLayout;
}

@property(retain, nonatomic) YYTextLayout *textLayout; // @synthesize textLayout=_textLayout;
- (void).cxx_destruct;
- (void)setTextLayoutWithAttributeText:(id)arg1 lines:(long long)arg2 withContentInset:(struct UIEdgeInsets)arg3;
- (void)setTextLayoutWithAttributeText:(id)arg1 lines:(long long)arg2;
- (void)setTextLayoutWithText:(id)arg1 lines:(long long)arg2 font:(id)arg3 color:(id)arg4;
- (void)applyLayoutToView:(id)arg1;

@end

