//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class WBComposerBaseOptionAddon;
@protocol WBComposeAddOnCellDelegate;

@interface WBComposeBaseAddOnCell : UITableViewCell
{
    id <WBComposeAddOnCellDelegate> _delegate;
    WBComposerBaseOptionAddon *_addon;
}

@property(retain, nonatomic) WBComposerBaseOptionAddon *addon; // @synthesize addon=_addon;
@property(nonatomic) __weak id <WBComposeAddOnCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)backgroundButtonClicked:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

