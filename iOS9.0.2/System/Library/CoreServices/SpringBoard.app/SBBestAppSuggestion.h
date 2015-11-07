/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSUUID, NSString, NSDate;

@interface SBBestAppSuggestion : NSObject

@property (copy,readonly) NSUUID * uniqueIdentifier; 
@property (copy,readonly) NSString * bundleIdentifier; 
@property (copy,readonly) NSString * activityType; 
@property (copy,readonly) NSDate * lastUpdateTime; 
@property (copy,readonly) NSString * originatingDeviceIdentifier; 
@property (copy,readonly) NSString * originatingDeviceName; 
@property (copy,readonly) NSString * originatingDeviceType; 
-(char)isSiriSuggestion;
-(char)isArrivedAtHomePrediction;
-(char)isArrivedAtWorkPrediction;
-(char)isLocationBasedSuggestion;
-(char)isPrediction;
-(char)isFirstWakePrediction;
-(char)isCarPlayPrediction;
-(char)isHeadphonesPrediction;
-(char)isBluetoothPrediction;
-(char)isNotificationSuggestion;
-(char)isOpenURLSuggestion;
-(char)isCallContinuitySuggestion;
-(char)isBluetoothAudioPrediction;
-(char)isLocallyGeneratedSuggestion;
-(NSString *)originatingDeviceIdentifier;
-(NSString *)bundleIdentifier;
-(NSString *)activityType;
-(NSUUID *)uniqueIdentifier;
-(NSString *)originatingDeviceType;
-(NSString *)originatingDeviceName;
-(NSDate *)lastUpdateTime;
@end

