//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPopSubview.h"

@class NSString, XMLiveHybridViewController;

@interface XMLiveTaskPopView : XMPopSubview
{
    NSString *_contentUrl;
    XMLiveHybridViewController *_webContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XMLiveHybridViewController *webContent; // @synthesize webContent=_webContent;
@property(copy, nonatomic) NSString *contentUrl; // @synthesize contentUrl=_contentUrl;
- (void)showWithAnimate:(_Bool)arg1;
- (id)initPopFromView:(id)arg1;
- (void)dealloc;

@end

