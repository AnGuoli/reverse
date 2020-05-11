//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton, WBImageEditorListViewItem;
@protocol WBImageEditorListViewCellDelegate;

@interface WBImageEditorListViewCell : UICollectionViewCell
{
    UIButton *_insetButton;
    id <WBImageEditorListViewCellDelegate> _delegate;
    WBImageEditorListViewItem *_editorItem;
}

@property(retain, nonatomic) WBImageEditorListViewItem *editorItem; // @synthesize editorItem=_editorItem;
@property(nonatomic) id <WBImageEditorListViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setHighlighted:(_Bool)arg1;
- (void)buttonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

