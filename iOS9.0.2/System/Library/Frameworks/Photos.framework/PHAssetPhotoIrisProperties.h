/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@class PHAsset;

@interface PHAssetPhotoIrisProperties : NSObject {

	unsigned short _photoIrisVisibilityState;
	PHAsset* _asset;
	SCD_Struct_PH6 _photoIrisStillDisplayTime;
	SCD_Struct_PH6 _photoIrisVideoDuration;

}

@property (nonatomic,__weak,readonly) PHAsset * asset;                                //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PH6 photoIrisStillDisplayTime;              //@synthesize photoIrisStillDisplayTime=_photoIrisStillDisplayTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PH6 photoIrisVideoDuration;                 //@synthesize photoIrisVideoDuration=_photoIrisVideoDuration - In the implementation block
@property (nonatomic,readonly) unsigned short photoIrisVisibilityState;               //@synthesize photoIrisVisibilityState=_photoIrisVisibilityState - In the implementation block
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 ;
-(SCD_Struct_PH6)photoIrisStillDisplayTime;
-(SCD_Struct_PH6)photoIrisVideoDuration;
-(unsigned short)photoIrisVisibilityState;
-(PHAsset *)asset;
@end

