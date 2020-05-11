//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXModel.h"

@class NSString;

@interface YXLTopInfoPanelViewModel : YXModel
{
    _Bool _isFollowed;
    _Bool _showLiveRoomId;
    long long _type;
    NSString *_nickName;
    NSString *_count;
    NSString *_duration;
    NSString *_avatar;
    long long _vtype;
    NSString *_pkIcon;
    NSString *_memeberid;
    NSString *_watermark_text;
    CDUnknownBlockType _hideFollowBlock;
    CDUnknownBlockType _clickAvatarBlock;
}

@property(nonatomic) _Bool showLiveRoomId; // @synthesize showLiveRoomId=_showLiveRoomId;
@property(copy, nonatomic) CDUnknownBlockType clickAvatarBlock; // @synthesize clickAvatarBlock=_clickAvatarBlock;
@property(copy, nonatomic) CDUnknownBlockType hideFollowBlock; // @synthesize hideFollowBlock=_hideFollowBlock;
@property(retain, nonatomic) NSString *watermark_text; // @synthesize watermark_text=_watermark_text;
@property(retain, nonatomic) NSString *memeberid; // @synthesize memeberid=_memeberid;
@property(copy, nonatomic) NSString *pkIcon; // @synthesize pkIcon=_pkIcon;
@property(nonatomic) long long vtype; // @synthesize vtype=_vtype;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)updateWithWBOpenidRequestValue:(id)arg1;

@end

