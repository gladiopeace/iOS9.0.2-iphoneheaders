/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SPFeedbackSpeechResult : NSObject <NSSecureCoding> {

	char _stable;
	NSString* _text;
	unsigned _webResultsSize;
	unsigned _spotlightResultsSize;
	double _timestamp;

}

@property (nonatomic,retain) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) char stable;                                //@synthesize stable=_stable - In the implementation block
@property (assign,nonatomic) double timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned webResultsSize;                    //@synthesize webResultsSize=_webResultsSize - In the implementation block
@property (assign,nonatomic) unsigned spotlightResultsSize;              //@synthesize spotlightResultsSize=_spotlightResultsSize - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(unsigned)webResultsSize;
-(unsigned)spotlightResultsSize;
-(id)initWithText:(id)arg1 stable:(char)arg2 timestamp:(double)arg3 webResultsSize:(unsigned)arg4 spotlightResultsSize:(unsigned)arg5 ;
-(void)setWebResultsSize:(unsigned)arg1 ;
-(void)setSpotlightResultsSize:(unsigned)arg1 ;
-(char)stable;
-(void)setStable:(char)arg1 ;
@end

