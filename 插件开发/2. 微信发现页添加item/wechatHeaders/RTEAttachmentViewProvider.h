//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "RTEAttachmentViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol RTEAttachmentViewProviderDelegate;

@interface RTEAttachmentViewProvider : MMObject <RTEAttachmentViewDelegate>
{
    NSMutableDictionary *m_registerViewDictionary;
    NSMutableDictionary *m_activeAttachmentViews;
    NSMutableDictionary *m_reuseAttachmentViews;
    id <RTEAttachmentViewProviderDelegate> _delegate;
    Class _defaultViewClass;
}

@property(nonatomic) Class defaultViewClass; // @synthesize defaultViewClass=_defaultViewClass;
@property(nonatomic) __weak id <RTEAttachmentViewProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reLayoutAllAttachmentView;
- (id)getAllAttachmentViewOfType:(unsigned int)arg1;
- (void)updateContentOffset:(struct CGPoint)arg1 inSuperView:(id)arg2;
- (void)didRemoveAttachmentView:(id)arg1;
- (void)invalidViewForAttachment:(id)arg1;
- (id)getViewForAttachment:(id)arg1;
- (id)getViewForAttribute:(id)arg1;
- (id)reuseAttachmentViewsForType:(unsigned int)arg1;
- (id)activeAttachmentViewsForType:(unsigned int)arg1;
- (void)registerAttachmentViewClass:(Class)arg1 forAttachmentType:(unsigned int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

