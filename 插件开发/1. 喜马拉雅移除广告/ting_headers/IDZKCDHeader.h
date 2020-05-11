//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSMutableData, NSString;

@interface IDZKCDHeader : NSObject
{
    unsigned int _magicNumber;
    unsigned int _versionMadeBy;
    unsigned int _versionNeededToExtract;
    unsigned int _generalPurposeBitFlag;
    unsigned int _compressionMethod;
    unsigned int _crc;
    unsigned int _filenameLength;
    unsigned int _extraFieldLength;
    unsigned int _commentLength;
    unsigned int _diskNumberStart;
    unsigned int _internalFileAttributes;
    unsigned int _externalFileAttributes;
    NSDate *_lastModDate;
    unsigned long long _compressedSize;
    unsigned long long _uncompressedSize;
    unsigned long long _localHeaderOffset;
    NSString *_filename;
    NSData *_extraField;
    NSString *_comment;
    NSMutableData *_cachedData;
}

+ (id)recordWithArchivePath:(id)arg1 atOffset:(unsigned long long)arg2;
+ (id)recordWithData:(id)arg1 atOffset:(unsigned long long)arg2;
@property(retain) NSMutableData *cachedData; // @synthesize cachedData=_cachedData;
@property(copy) NSString *comment; // @synthesize comment=_comment;
@property(retain) NSData *extraField; // @synthesize extraField=_extraField;
@property(copy) NSString *filename; // @synthesize filename=_filename;
@property unsigned long long localHeaderOffset; // @synthesize localHeaderOffset=_localHeaderOffset;
@property unsigned int externalFileAttributes; // @synthesize externalFileAttributes=_externalFileAttributes;
@property unsigned int internalFileAttributes; // @synthesize internalFileAttributes=_internalFileAttributes;
@property unsigned int diskNumberStart; // @synthesize diskNumberStart=_diskNumberStart;
@property unsigned int commentLength; // @synthesize commentLength=_commentLength;
@property unsigned int extraFieldLength; // @synthesize extraFieldLength=_extraFieldLength;
@property unsigned int filenameLength; // @synthesize filenameLength=_filenameLength;
@property unsigned long long uncompressedSize; // @synthesize uncompressedSize=_uncompressedSize;
@property unsigned long long compressedSize; // @synthesize compressedSize=_compressedSize;
@property unsigned int crc; // @synthesize crc=_crc;
@property(retain) NSDate *lastModDate; // @synthesize lastModDate=_lastModDate;
@property unsigned int compressionMethod; // @synthesize compressionMethod=_compressionMethod;
@property unsigned int generalPurposeBitFlag; // @synthesize generalPurposeBitFlag=_generalPurposeBitFlag;
@property unsigned int versionNeededToExtract; // @synthesize versionNeededToExtract=_versionNeededToExtract;
@property unsigned int versionMadeBy; // @synthesize versionMadeBy=_versionMadeBy;
@property unsigned int magicNumber; // @synthesize magicNumber=_magicNumber;
- (void).cxx_destruct;
- (_Bool)isResourceFork;
- (_Bool)isSymLink;
- (_Bool)isDirectory;
- (id)posixPermissions;
- (id)description;
- (_Bool)useZip64Extensions;
- (unsigned long long)length;
- (id)zip64ExtraField;
- (void)parseZip64ExtraField;
- (id)data;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)removeObservers;
- (id)init;

@end

