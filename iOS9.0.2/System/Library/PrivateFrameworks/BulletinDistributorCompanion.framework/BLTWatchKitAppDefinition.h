/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface BLTWatchKitAppDefinition : NSObject {

	char _isInstalled;
	NSString* _containerBundleID;
	NSString* _watchKitAppBundleID;

}

@property (nonatomic,readonly) NSString * containerBundleID;                //@synthesize containerBundleID=_containerBundleID - In the implementation block
@property (nonatomic,readonly) NSString * watchKitAppBundleID;              //@synthesize watchKitAppBundleID=_watchKitAppBundleID - In the implementation block
@property (nonatomic,readonly) char isInstalled;                            //@synthesize isInstalled=_isInstalled - In the implementation block
-(char)isInstalled;
-(id)initWithContainerBundleID:(id)arg1 watchKitAppBundleID:(id)arg2 isInstalled:(char)arg3 ;
-(NSString *)containerBundleID;
-(NSString *)watchKitAppBundleID;
@end

