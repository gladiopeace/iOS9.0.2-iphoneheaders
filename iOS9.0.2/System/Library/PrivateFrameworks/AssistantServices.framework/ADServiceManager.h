/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <assistantd/assistantd-Structs.h>
@class NSMutableDictionary;

@interface ADServiceManager : NSObject {

	char _bundleServicesLoaded;
	NSMutableDictionary* _serviceMap;
	NSMutableDictionary* _commandMap;
	NSMutableDictionary* _syncKeyMap;

}
-(id)_commandMap;
-(id)serviceForDomain:(id)arg1 command:(id)arg2 ;
-(id)lockRestrictedCommands;
-(id)firstUnlockRestrictedCommands;
-(void)_addServiceWithRecord:(id)arg1 ;
-(id)_generatedBundleServicesCache;
-(id)_bundleServicesCache;
-(void)_addService:(id)arg1 precedence:(int)arg2 ;
-(void)_loadServicesIfNeeded;
-(id)_serviceMap;
-(id)_syncKeyMap;
-(id)serviceForSyncAnchorKey:(id)arg1 ;
-(id)serviceForSyncAppBundleId:(id)arg1 intentSlotName:(id)arg2 ;
-(id)newServiceForSyncAnchorKey:(id)arg1 ;
-(id)allSyncAnchorKeys;
-(NSDictionary*)allVocabSyncInfo;
-(void)preheatServicesForDomain:(id)arg1 ;
-(void)addService:(id)arg1 ;
-(id)init;
-(void)preheat;
-(void)_removeService:(id)arg1 ;
-(void)removeService:(id)arg1 ;
-(id)allServices;
-(id)serviceForIdentifier:(id)arg1 ;
@end

