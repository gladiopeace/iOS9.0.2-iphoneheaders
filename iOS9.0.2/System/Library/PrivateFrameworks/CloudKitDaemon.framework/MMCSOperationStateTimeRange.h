/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSDate;


@protocol MMCSOperationStateTimeRange <NSObject>
@property (readonly) unsigned operationState; 
@property (readonly) NSDate * startDate; 
@property (readonly) double duration; 
@property (readonly) double absoluteStart; 
@property (readonly) double absoluteStop; 
@required
-(NSDate *)startDate;
-(double)duration;
-(unsigned)operationState;
-(double)absoluteStart;
-(double)absoluteStop;
-(int)compareStartTime:(id)arg1;
-(int)compareStopTime:(id)arg1;

@end

