/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSMutableDictionary;

@interface SUICPluginManager : NSObject {

	NSString* _path;
	NSArray* _domainKeys;
	/*^block*/id _factoryInitializationBlock;
	NSMutableDictionary* _domainKeyDictionary;

}
+(id)pluginManagerForPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(/*^block*/id)arg3 ;
-(id)description;
-(void)enumerateFactoryInstancesForDomainKey:(id)arg1 groupIdentifier:(id)arg2 classIdentifier:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)_loadBundles;
-(id)initWithPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(/*^block*/id)arg3 ;
-(void)_registerBundle:(id)arg1 ;
@end

