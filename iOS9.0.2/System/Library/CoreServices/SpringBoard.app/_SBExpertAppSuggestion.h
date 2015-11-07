/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBBestAppSuggestion.h>

@class _DECAppItem, _DECResult, NSUUID;

@interface _SBExpertAppSuggestion : SBBestAppSuggestion {

	_DECAppItem* _appSuggestion;
	_DECResult* _result;

}

@property (nonatomic,retain,readonly) _DECAppItem * appSuggestion;              //@synthesize appSuggestion=_appSuggestion - In the implementation block
@property (nonatomic,retain,readonly) _DECResult * result;                      //@synthesize result=_result - In the implementation block
@property (nonatomic,retain,readonly) NSUUID * resultUUID; 
-(_DECAppItem *)appSuggestion;
-(char)isArrivedAtHomePrediction;
-(char)isArrivedAtWorkPrediction;
-(char)isLocationBasedSuggestion;
-(char)isPrediction;
-(char)isFirstWakePrediction;
-(char)isCarPlayPrediction;
-(char)isHeadphonesPrediction;
-(char)isBluetoothPrediction;
-(NSUUID *)resultUUID;
-(id)initWithAppSuggestion:(id)arg1 result:(id)arg2 ;
-(char)isBluetoothAudioPrediction;
-(char)isLocallyGeneratedSuggestion;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)bundleIdentifier;
-(_DECResult *)result;
-(id)originatingDeviceName;
@end

