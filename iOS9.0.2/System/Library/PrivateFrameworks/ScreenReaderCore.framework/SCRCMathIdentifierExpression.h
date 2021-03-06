/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

@interface SCRCMathIdentifierExpression : SCRCMathSimpleExpression {

	int _fontStyle;

}

@property (nonatomic,readonly) int fontStyle;              //@synthesize fontStyle=_fontStyle - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(char)arg2 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(char)arg2 isPartOfWord:(char)arg3 ;
-(char)isNaturalSuperscript;
-(char)canFormWordStartingWithExpression:(id)arg1 ;
-(char)_isPrime;
-(char)isNumber;
-(id)mathMLString;
-(int)fontStyle;
@end

