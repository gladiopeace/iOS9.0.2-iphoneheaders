/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSString;

@interface AFUIDebugLog : NSObject {

	NSData* _data;
	NSString* _mimeType;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSData * data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
+(id)logWithData:(id)arg1 mimeType:(id)arg2 name:(id)arg3 attemptCompression:(char)arg4 ;
-(NSString *)name;
-(NSData *)data;
-(NSString *)mimeType;
-(id)initWithData:(id)arg1 mimeType:(id)arg2 name:(id)arg3 attemptCompression:(char)arg4 ;
@end

