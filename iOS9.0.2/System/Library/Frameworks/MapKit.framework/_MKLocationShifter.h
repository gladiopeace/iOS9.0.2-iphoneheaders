/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOLocationShifter;

@interface _MKLocationShifter : NSObject {

	GEOLocationShifter* _locationShifter;

}

@property (getter=isLocationShiftEnabled,nonatomic,readonly) char locationShiftEnabled; 
+(char)isLocationShiftRequiredForLocation:(id)arg1 ;
-(void)shiftLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)shiftLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(void)_prepareShiftForLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 withShiftRequestBlock:(/*^block*/id)arg3 ;
-(id)init;
-(char)isLocationShiftEnabled;
@end

