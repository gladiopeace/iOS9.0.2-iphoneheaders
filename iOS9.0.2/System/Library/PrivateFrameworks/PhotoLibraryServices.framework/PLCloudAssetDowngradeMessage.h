/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLManagedAsset;

@interface PLCloudAssetDowngradeMessage : NSObject {

	unsigned short _current;
	unsigned short _desired;
	PLManagedAsset* _asset;

}

@property (nonatomic,retain,readonly) PLManagedAsset * asset;              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) unsigned short current;                     //@synthesize current=_current - In the implementation block
@property (nonatomic,readonly) unsigned short desired;                     //@synthesize desired=_desired - In the implementation block
-(PLManagedAsset *)asset;
-(id)initWithAsset:(id)arg1 fromQuality:(unsigned short)arg2 toQuality:(unsigned short)arg3 ;
-(unsigned short)desired;
-(unsigned short)current;
@end

