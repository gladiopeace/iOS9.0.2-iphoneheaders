/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/SPFeedback.h>

@class NSString;

@interface SPFeedbackContext : SPFeedback {

	NSString* _start_method;
	NSString* _last_search;
	double _start_ts;

}

@property (assign,nonatomic) double start_ts;                      //@synthesize start_ts=_start_ts - In the implementation block
@property (nonatomic,retain) NSString * start_method;              //@synthesize start_method=_start_method - In the implementation block
@property (nonatomic,retain) NSString * last_search;               //@synthesize last_search=_last_search - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)start_ts;
-(NSString *)start_method;
-(NSString *)last_search;
-(id)parsecFeedbackFromSession:(id)arg1 ;
-(void)setStart_ts:(double)arg1 ;
-(void)setStart_method:(NSString *)arg1 ;
-(void)setLast_search:(NSString *)arg1 ;
@end
