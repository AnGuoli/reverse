//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBComposeElement.h"

#import "WBSelectGroupViewControllerDelegate-Protocol.h"

@class NSString, WBComposeGroupElementView, WBSelectGroupSuperTopic;
@protocol WeiboCubeWeiyouDirectionalGroupProtocol;

@interface WBComposeGroupElement : WBComposeElement <WBSelectGroupViewControllerDelegate>
{
    _Bool _queryTopic;
    unsigned long long _authType;
    unsigned long long _groupType;
    id <WeiboCubeWeiyouDirectionalGroupProtocol> _group;
    WBSelectGroupSuperTopic *_topic;
    NSString *_customTopic;
}

@property(nonatomic) _Bool queryTopic; // @synthesize queryTopic=_queryTopic;
@property(copy, nonatomic) NSString *customTopic; // @synthesize customTopic=_customTopic;
@property(retain, nonatomic) WBSelectGroupSuperTopic *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) id <WeiboCubeWeiyouDirectionalGroupProtocol> group; // @synthesize group=_group;
@property(nonatomic) unsigned long long groupType; // @synthesize groupType=_groupType;
@property(nonatomic) unsigned long long authType; // @synthesize authType=_authType;
- (void).cxx_destruct;
- (void)selectGroupViewController:(id)arg1 didSelectStatusGroupType:(unsigned long long)arg2 group:(id)arg3 Topic:(id)arg4 authenticationType:(unsigned long long)arg5;
- (void)groupButtonPressed:(id)arg1;
- (_Bool)contentHasChangedFromDraft;
- (void)viewDidLoad;
- (void)setupWithJob:(id)arg1;
- (void)saveComposeDataToJob:(id)arg1;
- (id)defaultMap;
- (struct CGRect)viewInitFrame;
@property(readonly, nonatomic) WBComposeGroupElementView *groupElementView;
- (Class)viewClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

