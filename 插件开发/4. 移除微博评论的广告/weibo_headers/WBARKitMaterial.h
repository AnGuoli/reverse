//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString;
@protocol WBARKitMaterialNode;

@interface WBARKitMaterial : JSONModel
{
    NSString *_folderPath;
    NSString *_modelFolder;
    NSString *_modelName;
    NSArray *_animations;
    NSArray<WBARKitMaterialNode> *_nodes;
    double _scale;
    double _distance;
    double _height;
    NSString *_backgroundMusic;
}

+ (id)materialWithFolderPath:(id)arg1;
+ (id)resourceCheckList:(id)arg1;
+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString *backgroundMusic; // @synthesize backgroundMusic=_backgroundMusic;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSArray<WBARKitMaterialNode> *nodes; // @synthesize nodes=_nodes;
@property(retain, nonatomic) NSArray *animations; // @synthesize animations=_animations;
@property(copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(copy, nonatomic) NSString *modelFolder; // @synthesize modelFolder=_modelFolder;
@property(copy, nonatomic) NSString *folderPath; // @synthesize folderPath=_folderPath;
- (void).cxx_destruct;
- (id)folderFileURLWithName:(id)arg1;
- (id)modelFileURLWithName:(id)arg1;

@end

