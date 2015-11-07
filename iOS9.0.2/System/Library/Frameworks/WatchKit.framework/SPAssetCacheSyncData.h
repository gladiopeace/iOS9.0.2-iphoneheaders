/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SPAssetCacheAssets, NSString;

@interface SPAssetCacheSyncData : NSObject {

	SPAssetCacheAssets* _permanentCache;
	SPAssetCacheAssets* _transientCache;
	NSString* _cacheIdentifier;

}

@property (nonatomic,retain) SPAssetCacheAssets * permanentCache;              //@synthesize permanentCache=_permanentCache - In the implementation block
@property (nonatomic,retain) SPAssetCacheAssets * transientCache;              //@synthesize transientCache=_transientCache - In the implementation block
@property (nonatomic,retain) NSString * cacheIdentifier;                       //@synthesize cacheIdentifier=_cacheIdentifier - In the implementation block
+(id)toProto:(id)arg1 ;
+(id)fromProto:(id)arg1 ;
-(void)setCacheIdentifier:(NSString *)arg1 ;
-(NSString *)cacheIdentifier;
-(id)init;
-(SPAssetCacheAssets *)permanentCache;
-(void)setPermanentCache:(SPAssetCacheAssets *)arg1 ;
-(SPAssetCacheAssets *)transientCache;
-(void)setTransientCache:(SPAssetCacheAssets *)arg1 ;
@end

