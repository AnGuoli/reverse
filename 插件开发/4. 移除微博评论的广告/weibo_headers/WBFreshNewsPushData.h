//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@interface WBFreshNewsPushData : WBModelObject
{
    _Bool _isBindWin;
    _Bool _isPush;
    _Bool _wb_usable;
    _Bool _clickPush;
    _Bool _clickBind;
    _Bool _clickComment;
    int _push_times;
    int _win_times;
}

@property(nonatomic) _Bool clickComment; // @synthesize clickComment=_clickComment;
@property(nonatomic) _Bool clickBind; // @synthesize clickBind=_clickBind;
@property(nonatomic) _Bool clickPush; // @synthesize clickPush=_clickPush;
@property(nonatomic) int win_times; // @synthesize win_times=_win_times;
@property(nonatomic) int push_times; // @synthesize push_times=_push_times;
@property(nonatomic) _Bool wb_usable; // @synthesize wb_usable=_wb_usable;
@property(nonatomic) _Bool isPush; // @synthesize isPush=_isPush;
@property(nonatomic) _Bool isBindWin; // @synthesize isBindWin=_isBindWin;
- (_Bool)updateWithDictionary:(id)arg1;

@end

