//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSScanner.h>

@interface NSScanner (RTE)
+ (id)complementaryCharacterSetFromWhitespaceAndNewline;
+ (id)whitespaceCommasAndClosingParenthesisCharacterSet;
+ (id)complementaryCharacterSetFromNumber;
- (_Bool)scanCSSAttribute:(id *)arg1 value:(id *)arg2;
- (_Bool)scanCGFloat:(double *)arg1;
- (_Bool)scanBool:(_Bool *)arg1;
- (_Bool)scanPoint:(struct CGPoint *)arg1;
- (void)scanThroughToHyphen;
- (unsigned short)currentCharacter;
- (unsigned short)initialCharacter;
- (void)scanThroughWhitespaceCommasAndClosingParenthesis;
- (_Bool)scanFloatAndAdvance:(float *)arg1;
@end

