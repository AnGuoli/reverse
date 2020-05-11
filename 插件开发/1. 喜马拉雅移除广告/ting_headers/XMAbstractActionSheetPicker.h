//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class CIContext, CIFilter, NSAttributedString, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, UIBarButtonItem, UIColor, UIPopoverController, UIToolbar, UIView, XMActionSheet;

@interface XMAbstractActionSheetPicker : NSObject <UIGestureRecognizerDelegate, UIPopoverControllerDelegate>
{
    _Bool _hideCancel;
    _Bool _popoverDisabled;
    int _borderWidth;
    XMActionSheet *_actionSheet;
    double _windowLevel;
    long long _tag;
    UIToolbar *_toolbar;
    NSString *_title;
    UIView *_pickerView;
    NSMutableArray *_customButtons;
    NSDictionary *_titleTextAttributes;
    NSAttributedString *_attributedTitle;
    NSMutableDictionary *_pickerTextAttributes;
    UIColor *_pickerBackgroundColor;
    UIColor *_toolbarBackgroundColor;
    UIColor *_toolbarButtonsColor;
    NSNumber *_pickerBlurRadius;
    Class _popoverBackgroundViewClass;
    unsigned long long _supportedInterfaceOrientations;
    long long _tapDismissAction;
    UIBarButtonItem *_barButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    UIBarButtonItem *_cancelBarButtonItem;
    UIView *_containerView;
    id _target;
    SEL _successAction;
    SEL _cancelAction;
    UIPopoverController *_popOverController;
    CIFilter *_filter;
    CIContext *_context;
    NSObject *_selfReference;
    struct CGRect _presentFromRect;
}

@property(retain, nonatomic) NSObject *selfReference; // @synthesize selfReference=_selfReference;
@property(retain, nonatomic) CIContext *context; // @synthesize context=_context;
@property(retain, nonatomic) CIFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) UIPopoverController *popOverController; // @synthesize popOverController=_popOverController;
@property(nonatomic) SEL cancelAction; // @synthesize cancelAction=_cancelAction;
@property(nonatomic) SEL successAction; // @synthesize successAction=_successAction;
@property(nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIBarButtonItem *cancelBarButtonItem; // @synthesize cancelBarButtonItem=_cancelBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *doneBarButtonItem; // @synthesize doneBarButtonItem=_doneBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property(nonatomic) _Bool popoverDisabled; // @synthesize popoverDisabled=_popoverDisabled;
@property(nonatomic) long long tapDismissAction; // @synthesize tapDismissAction=_tapDismissAction;
@property(nonatomic) unsigned long long supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
@property(retain, nonatomic) Class popoverBackgroundViewClass; // @synthesize popoverBackgroundViewClass=_popoverBackgroundViewClass;
@property(retain, nonatomic) NSNumber *pickerBlurRadius; // @synthesize pickerBlurRadius=_pickerBlurRadius;
@property(retain, nonatomic) UIColor *toolbarButtonsColor; // @synthesize toolbarButtonsColor=_toolbarButtonsColor;
@property(retain, nonatomic) UIColor *toolbarBackgroundColor; // @synthesize toolbarBackgroundColor=_toolbarBackgroundColor;
@property(retain, nonatomic) UIColor *pickerBackgroundColor; // @synthesize pickerBackgroundColor=_pickerBackgroundColor;
@property(retain, nonatomic) NSMutableDictionary *pickerTextAttributes; // @synthesize pickerTextAttributes=_pickerTextAttributes;
@property(retain, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(retain, nonatomic) NSDictionary *titleTextAttributes; // @synthesize titleTextAttributes=_titleTextAttributes;
@property(nonatomic) struct CGRect presentFromRect; // @synthesize presentFromRect=_presentFromRect;
@property(nonatomic) _Bool hideCancel; // @synthesize hideCancel=_hideCancel;
@property(retain, nonatomic) NSMutableArray *customButtons; // @synthesize customButtons=_customButtons;
@property(retain, nonatomic) UIView *pickerView; // @synthesize pickerView=_pickerView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) int borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) double windowLevel; // @synthesize windowLevel=_windowLevel;
@property(retain, nonatomic) XMActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (void).cxx_destruct;
- (void)setTextColor:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentPopover:(id)arg1;
- (void)configureAndPresentPopoverForView:(id)arg1;
- (void)presentActionSheet:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)configureAndPresentActionSheetForView:(id)arg1;
- (void)presentPickerForView:(id)arg1;
- (id)storedOrigin;
- (_Bool)isValidOrigin:(id)arg1;
- (_Bool)isViewPortrait;
@property(readonly, nonatomic) struct CGSize viewSize;
- (void)blurPickerBackground;
- (id)createButtonWithType:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)createToolbarLabelWithTitle:(id)arg1 titleTextAttributes:(id)arg2 andAttributedTitle:(id)arg3;
- (id)createPickerToolbarWithTitle:(id)arg1;
- (void)hidePickerWithCancelAction;
- (void)setDoneButton:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)customButtonPressed:(id)arg1;
- (void)addCustomButtonWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)addCustomButtonWithTitle:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)addCustomButtonWithTitle:(id)arg1 value:(id)arg2;
- (void)dismissPicker;
- (void)actionPickerCancel:(id)arg1;
- (void)actionPickerDone:(id)arg1;
- (void)showActionSheetPicker;
- (void)notifyTarget:(id)arg1 didCancelWithAction:(SEL)arg2 origin:(id)arg3;
- (void)notifyTarget:(id)arg1 didSucceedWithAction:(SEL)arg2 origin:(id)arg3;
- (id)configuredPickerView;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 successAction:(SEL)arg2 cancelAction:(SEL)arg3 origin:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

