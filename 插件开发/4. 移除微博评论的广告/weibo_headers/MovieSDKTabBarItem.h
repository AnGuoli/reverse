//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBIntegrateTabBarItem.h"

@class NSValue, UIColor, UIImage;

@interface MovieSDKTabBarItem : WBIntegrateTabBarItem
{
    UIImage *highlightedImage;
    UIImage *selectedImage;
    UIImage *disabledImage;
    UIImage *badgeImage;
    NSValue *badgeEdgeInsets;
    UIImage *dotIndicatorImage;
    UIColor *titleColor;
    UIColor *titleHighlightedColor;
    UIColor *titleSelectedColor;
    UIColor *badgeTextColor;
}

+ (id)keyPaths;
@property(retain, nonatomic) UIColor *badgeTextColor; // @synthesize badgeTextColor;
@property(retain, nonatomic) UIColor *titleSelectedColor; // @synthesize titleSelectedColor;
@property(retain, nonatomic) UIColor *titleHighlightedColor; // @synthesize titleHighlightedColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor;
@property(retain, nonatomic) UIImage *dotIndicatorImage; // @synthesize dotIndicatorImage;
@property(retain, nonatomic) NSValue *badgeEdgeInsets; // @synthesize badgeEdgeInsets;
@property(retain, nonatomic) UIImage *badgeImage; // @synthesize badgeImage;
@property(retain, nonatomic) UIImage *disabledImage; // @synthesize disabledImage;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage;
@property(retain, nonatomic) UIImage *highlightedImage; // @synthesize highlightedImage;
- (void).cxx_destruct;

@end

