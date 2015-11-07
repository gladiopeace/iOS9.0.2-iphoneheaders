/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface BWBracketSettings : NSObject {

	char _providePreBracketedEV0;
	char _lensStabilizationEnabledForClientBracket;
	NSArray* _exposureValues;
	NSDictionary* _bracketedCaptureOverrides;
	NSArray* _manualExposureBracketedCaptureParams;
	NSDictionary* _oisBracketedCaptureParams;

}

@property (assign,nonatomic) char providePreBracketedEV0;                                //@synthesize providePreBracketedEV0=_providePreBracketedEV0 - In the implementation block
@property (assign,nonatomic) char lensStabilizationEnabledForClientBracket;              //@synthesize lensStabilizationEnabledForClientBracket=_lensStabilizationEnabledForClientBracket - In the implementation block
@property (nonatomic,copy) NSArray * exposureValues;                                     //@synthesize exposureValues=_exposureValues - In the implementation block
@property (nonatomic,copy) NSDictionary * bracketedCaptureOverrides;                     //@synthesize bracketedCaptureOverrides=_bracketedCaptureOverrides - In the implementation block
@property (nonatomic,copy) NSArray * manualExposureBracketedCaptureParams;               //@synthesize manualExposureBracketedCaptureParams=_manualExposureBracketedCaptureParams - In the implementation block
@property (nonatomic,copy) NSDictionary * oisBracketedCaptureParams;                     //@synthesize oisBracketedCaptureParams=_oisBracketedCaptureParams - In the implementation block
+(id)bracketSettings;
-(void)dealloc;
-(char)providePreBracketedEV0;
-(void)setProvidePreBracketedEV0:(char)arg1 ;
-(char)lensStabilizationEnabledForClientBracket;
-(void)setLensStabilizationEnabledForClientBracket:(char)arg1 ;
-(NSArray *)exposureValues;
-(void)setExposureValues:(NSArray *)arg1 ;
-(NSDictionary *)bracketedCaptureOverrides;
-(void)setBracketedCaptureOverrides:(NSDictionary *)arg1 ;
-(NSArray *)manualExposureBracketedCaptureParams;
-(void)setManualExposureBracketedCaptureParams:(NSArray *)arg1 ;
-(NSDictionary *)oisBracketedCaptureParams;
-(void)setOisBracketedCaptureParams:(NSDictionary *)arg1 ;
@end

