/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSDictionary, NSMutableDictionary;

@interface SCNAssetCatalog : NSObject {

	NSURL* _catalogURL;
	NSDictionary* _db;
	NSMutableDictionary* _cache;

}

@property (nonatomic,readonly) NSURL * catalogURL;              //@synthesize catalogURL=_catalogURL - In the implementation block
+(id)assetCatalogWithURL:(id)arg1 ;
+(id)objectWithName:(id)arg1 class:(Class)arg2 ;
+(id)assetCatalogForResourceURL:(id)arg1 ;
+(id)recursivePathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 ;
+(id)assetCatalogNamed:(id)arg1 ;
+(void)clearCache;
-(id)sceneWithURL:(id)arg1 ;
-(NSURL *)catalogURL;
-(id)animationNamed:(id)arg1 ;
-(id)actionNamed:(id)arg1 ;
-(id)particleSystemNamed:(id)arg1 ;
-(id)sceneNamed:(id)arg1 ;
-(void)cacheObject:(id)arg1 forKey:(id)arg2 ;
-(id)URLOfResourceNamed:(id)arg1 ;
-(id)pathByMakingURLRelativeToCatalog:(id)arg1 ;
-(void)dealloc;
@end

