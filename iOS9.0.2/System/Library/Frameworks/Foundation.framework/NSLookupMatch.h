/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSTextCheckingResult, NSString;

@interface NSLookupMatch : NSObject {

	unsigned _matchType;
	NSRange _range;
	double _score;
	NSTextCheckingResult* _dataDetectorResult;
	NSString* _languageIdentifier;

}

@property (readonly) unsigned matchType;                                   //@synthesize matchType=_matchType - In the implementation block
@property (readonly) NSRange range;                                        //@synthesize range=_range - In the implementation block
@property (readonly) double score;                                         //@synthesize score=_score - In the implementation block
@property (retain) NSTextCheckingResult * dataDetectorResult;              //@synthesize dataDetectorResult=_dataDetectorResult - In the implementation block
@property (retain) NSString * languageIdentifier;                          //@synthesize languageIdentifier=_languageIdentifier - In the implementation block
+(id)matchesInString:(id)arg1 types:(unsigned)arg2 range:(NSRange)arg3 ;
-(id)initWithType:(unsigned)arg1 range:(NSRange)arg2 score:(double)arg3 ;
-(void)setDataDetectorResult:(NSTextCheckingResult *)arg1 ;
-(unsigned)matchType;
-(NSTextCheckingResult *)dataDetectorResult;
-(NSString *)languageIdentifier;
-(void)setLanguageIdentifier:(NSString *)arg1 ;
-(double)score;
-(void)dealloc;
-(id)description;
-(NSRange)range;
@end

