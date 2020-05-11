//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseMessageCellLayout.h"

@class NSAttributedString, NSMutableAttributedString, UIImage, YYTextLayout;

@interface MMTextMessageCellLayout : MMBaseMessageCellLayout
{
    NSMutableAttributedString *_attributedText;
    UIImage *_bubbleImage;
    UIImage *_highlightBubbleImage;
    YYTextLayout *_textLayout;
    NSAttributedString *_nameAttributedText;
    struct CGRect _bubbleImageViewFrame;
    struct CGRect _textLabelFrame;
    struct CGRect _nameLabelFrame;
}

+ (id)linkBackgroundColor;
+ (id)linkColor;
+ (id)textColor;
+ (id)textFont;
+ (id)highlightIncomingBubbleImage;
+ (id)incomingBubbleImage;
+ (id)highlightOutgoingBubbleImage;
+ (id)outgoingBubbleImage;
+ (id)userNametextColor;
+ (id)userNametextFont;
@property(retain, nonatomic) NSAttributedString *nameAttributedText; // @synthesize nameAttributedText=_nameAttributedText;
@property(nonatomic) struct CGRect nameLabelFrame; // @synthesize nameLabelFrame=_nameLabelFrame;
@property(retain, nonatomic) YYTextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property(nonatomic) struct CGRect textLabelFrame; // @synthesize textLabelFrame=_textLabelFrame;
@property(nonatomic) struct CGRect bubbleImageViewFrame; // @synthesize bubbleImageViewFrame=_bubbleImageViewFrame;
@property(retain, nonatomic) UIImage *highlightBubbleImage; // @synthesize highlightBubbleImage=_highlightBubbleImage;
@property(retain, nonatomic) UIImage *bubbleImage; // @synthesize bubbleImage=_bubbleImage;
- (void).cxx_destruct;
- (void)calculateLayout;
- (void)setupBubbleImage;
- (void)setupAttributedText;
- (id)initWithChatItem:(id)arg1 cellWidth:(double)arg2;

@end

