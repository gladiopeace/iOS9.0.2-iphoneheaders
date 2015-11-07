/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MSAlertManager;

@interface MSAuthenticationManager : NSObject {

	int _state;
	MSAlertManager* _alertManager;
	int _bagRefetchCount;
	char _isListeningToKeybagChanges;
	int _keybagChangeNotifyToken;

}

@property (getter=isWaitingForAuth,nonatomic,readonly) char waitingForAuth; 
@property (assign,nonatomic) char isListeningToKeybagChanges;                            //@synthesize isListeningToKeybagChanges=_isListeningToKeybagChanges - In the implementation block
@property (assign,nonatomic) int keybagChangeNotifyToken;                                //@synthesize keybagChangeNotifyToken=_keybagChangeNotifyToken - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(char)isWaitingForAuth;
-(id)initWithAlertManager:(id)arg1 ;
-(char)isListeningToKeybagChanges;
-(int)keybagChangeNotifyToken;
-(void)_didReceiveAccountConfigChangedNotification;
-(void)setIsListeningToKeybagChanges:(char)arg1 ;
-(id)_accountForPersonID:(id)arg1 ;
-(void)waitForDeviceUnlock;
-(void)_promptUserForAuthComplianceForAccount:(id)arg1 personID:(id)arg2 ;
-(void)didEncounterAuthenticationFailureForPersonID:(id)arg1 ;
-(void)didEncounterAuthenticationSuccessForPersonID:(id)arg1 ;
-(void)rearmAuthenticationAlert;
-(void)setKeybagChangeNotifyToken:(int)arg1 ;
@end

