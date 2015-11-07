/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Diagnostics/DAModel.h>

@class NSString, NSNumber, NSDictionary;

@interface DACommandResponse : DAModel {

	NSString* _command;
	NSNumber* _testId;
	NSDictionary* _data;
	NSNumber* _progress;

}

@property (nonatomic,copy) NSString * command;               //@synthesize command=_command - In the implementation block
@property (nonatomic,copy) NSNumber * testId;                //@synthesize testId=_testId - In the implementation block
@property (nonatomic,copy) NSDictionary * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSNumber * progress;              //@synthesize progress=_progress - In the implementation block
-(NSNumber *)testId;
-(void)setTestId:(NSNumber *)arg1 ;
-(NSString *)command;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
-(void)setProgress:(NSNumber *)arg1 ;
-(NSNumber *)progress;
-(void)setCommand:(NSString *)arg1 ;
@end

