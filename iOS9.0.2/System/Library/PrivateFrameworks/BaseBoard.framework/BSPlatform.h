/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface BSPlatform : NSObject

@property (nonatomic,copy,readonly) NSString * productVersion; 
@property (nonatomic,copy,readonly) NSString * productBuildVersion; 
@property (nonatomic,copy,readonly) NSString * productType; 
@property (nonatomic,copy,readonly) NSString * productHardwareModel; 
@property (nonatomic,copy,readonly) NSString * productClass; 
@property (nonatomic,copy,readonly) NSString * localizedProductName; 
@property (nonatomic,copy,readonly) NSString * uniqueDeviceIdentifier; 
@property (getter=isInternalInstall,nonatomic,readonly) char internalInstall; 
@property (getter=isMultiCore,nonatomic,readonly) char multiCore; 
@property (nonatomic,readonly) char hasGasGauge; 
@property (nonatomic,readonly) char hasOrbCapability; 
+(id)sharedInstance;
-(NSString *)productHardwareModel;
-(NSString *)productClass;
-(NSString *)localizedProductName;
-(char)isMultiCore;
-(char)hasGasGauge;
-(char)hasOrbCapability;
-(char)isInternalInstall;
-(NSString *)productType;
-(NSString *)productBuildVersion;
-(NSString *)uniqueDeviceIdentifier;
-(NSString *)productVersion;
@end

