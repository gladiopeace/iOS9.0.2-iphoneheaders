/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSSettingsDetail.h>

@class NSString;

@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)currentValue;
+(void)setValue:(float)arg1 ;
+(id)iconImage;
+(id)preferencesURL;
+(float)incrementedBrightnessValue:(float)arg1 ;
+(void)incrementBrightnessValue:(float)arg1 ;
+(void)beginBrightnessAdjustmentTransaction;
+(void)endBrightnessAdjustmentTransaction;
+(void)beginObservingExternalBrightnessChanges:(/*^block*/id)arg1 changedAction:(/*^block*/id)arg2 ;
+(void)endObservingExternalBrightnessChanges;
+(char)deviceSupportsAutoBrightness;
+(void)setAutoBrightnessEnabled:(char)arg1 ;
+(char)autoBrightnessEnabled;
@end

