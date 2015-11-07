/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSUUID;

@interface CrashedThreadActivity : NSObject {

	NSString* _name;
	NSString* _reason;
	NSUUID* _imageUUID;
	NSString* _imagePath;
	unsigned _offset;
	unsigned long long _startTime;
	unsigned long long _activityID;

}

@property (readonly) unsigned long long startTime;               //@synthesize startTime=_startTime - In the implementation block
@property (retain,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long activityID;              //@synthesize activityID=_activityID - In the implementation block
@property (retain,readonly) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
@property (retain,readonly) NSUUID * imageUUID;                  //@synthesize imageUUID=_imageUUID - In the implementation block
@property (retain,readonly) NSString * imagePath;                //@synthesize imagePath=_imagePath - In the implementation block
@property (assign) unsigned offset;                              //@synthesize offset=_offset - In the implementation block
-(id)initWithStartTime:(unsigned long long)arg1 name:(const char*)arg2 activityID:(unsigned long long)arg3 reason:(const char*)arg4 imageUUIDBytes:(const char*)arg5 imagePath:(const char*)arg6 offset:(unsigned)arg7 ;
-(NSString *)imagePath;
-(void)dealloc;
-(NSString *)name;
-(void)setOffset:(unsigned)arg1 ;
-(unsigned)offset;
-(unsigned long long)startTime;
-(NSString *)reason;
-(unsigned long long)activityID;
-(NSUUID *)imageUUID;
@end

