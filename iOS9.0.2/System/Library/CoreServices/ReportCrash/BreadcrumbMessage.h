/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface BreadcrumbMessage : NSObject {

	NSString* _name;
	unsigned long long _timeStamp;
	unsigned long long _activityID;

}

@property (readonly) unsigned long long timeStamp;               //@synthesize timeStamp=_timeStamp - In the implementation block
@property (retain,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long activityID;              //@synthesize activityID=_activityID - In the implementation block
-(id)initWithTimeStamp:(unsigned long long)arg1 name:(const char*)arg2 activityID:(unsigned long long)arg3 ;
-(void)dealloc;
-(NSString *)name;
-(unsigned long long)timeStamp;
-(unsigned long long)activityID;
@end

