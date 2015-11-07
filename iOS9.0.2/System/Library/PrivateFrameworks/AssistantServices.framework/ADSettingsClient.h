/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSettingsService.h>
#import <assistantd/ADCommandCenterSyncDelegate.h>

@class NSXPCConnection, NSString;

@interface ADSettingsClient : NSObject <AFSettingsService, ADCommandCenterSyncDelegate> {

	NSXPCConnection* _xpcConnection;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connectionDisconnected;
-(id)_serviceDelegate;
-(id)_serviceDelegateWithErrorHandler:(/*^block*/id)arg1 ;
-(void)adSyncVerificationServerReport:(id)arg1 ;
-(void)adSyncVerificationPartialResult:(id)arg1 ;
-(oneway void)setActiveAccountIdentifier:(id)arg1 ;
-(oneway void)startRemoteRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)fetchSupportedLanguagesWithReply:(/*^block*/id)arg1 ;
-(oneway void)retrieveAccountMessageDictionariesWithReply:(/*^block*/id)arg1 ;
-(oneway void)saveAccountWithMessageDictionary:(id)arg1 setActive:(char)arg2 ;
-(oneway void)deleteAccountWithIdentifier:(id)arg1 ;
-(oneway void)setAssistantEnabled:(char)arg1 ;
-(oneway void)setDictationEnabled:(char)arg1 ;
-(oneway void)_killDaemon;
-(oneway void)barrierWithReply:(/*^block*/id)arg1 ;
-(oneway void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(char)arg2 reason:(id)arg3 reply:(/*^block*/id)arg4 ;
-(oneway void)_fetchPeerData:(/*^block*/id)arg1 ;
-(void)_setSyncVerificationNeededAndFullReportNeeded:(char)arg1 shouldPostNotification:(char)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)getAvailableVoicesIncludingAssetInfo:(char)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)setOutputVoice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(oneway void)setLanguage:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(oneway void)getOfflineDictationStatusWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)startUIRequest:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 ;
@end

