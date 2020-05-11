//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetImageGenerator, NSMutableArray, NSOperationQueue, WBImageCache;

@interface WBStoryVideoTrimThumbManager : NSObject
{
    NSOperationQueue *_queue;
    AVAssetImageGenerator *_imageGenerator;
    NSMutableArray *_preloadOperations;
    WBImageCache *_cache;
    struct CGSize _natureSize;
}

@property(nonatomic) struct CGSize natureSize; // @synthesize natureSize=_natureSize;
@property(retain, nonatomic) WBImageCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSMutableArray *preloadOperations; // @synthesize preloadOperations=_preloadOperations;
@property(retain, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)requestThumbWithViewModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelPreload;
- (void)preloadWithViewModels:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (void)dealloc;

@end

