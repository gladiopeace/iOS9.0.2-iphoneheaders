/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MobilePhoneSettings/MobilePhoneSettings-Structs.h>
@class NSMutableDictionary, NSString, NSArray, PHForwardingSettings, NSObject, NSDictionary;

@interface PhoneSettingsTelephony : NSObject {

	unsigned _watchCount;
	NSMutableDictionary* _pendingSaves;
	NSMutableDictionary* _pendingRequests;
	NSString* _myNumber;
	NSString* _carrierName;
	NSArray* _carrierServices;
	NSString* _carrierURL;
	NSString* _carrierURLTitle;
	NSString* _carrierMMSInfoURL;
	NSString* _carrierMMSInfoTitle;
	PHForwardingSettings* _callForwardingSettingsUnconditional;
	PHForwardingSettings* _callForwardingSettingsMobileBusy;
	PHForwardingSettings* _callForwardingSettingsNoReply;
	PHForwardingSettings* _callForwardingSettingsNotReachable;
	unsigned _callWaitingEnabled;
	unsigned _callerIDIsModifiable;
	unsigned _callerIDMode;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	int _networkSelectionMode;
	unsigned _simLocked;
	NSString* _cachedPassword;
	NSString* _newNumber;
	unsigned _savingPhoneNumber : 1;
	unsigned _phoneBookSelected : 1;
	unsigned _phoneNumberWritten : 1;
	NSDictionary* _simToolkitMenu;
	CTServerConnectionRef _serverConnection;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) CTServerConnectionRef serverConnection;                  //@synthesize serverConnection=_serverConnection - In the implementation block
+(id)telephony;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)_reset;
-(CTServerConnectionRef)serverConnection;
-(void)resetCallForwardingSettings;
-(char)allowTTYChange;
-(int)showCallForwarding;
-(int)showCallWaiting;
-(int)showCallerID;
-(int)showTTY;
-(int)showCarrierServices;
-(int)showCarrierURL;
-(int)showSIMPIN;
-(int)showSIMToolkitMenu;
-(id)carrierURLTitle;
-(id)carrierURL;
-(void)setMyNumber:(id)arg1 ;
-(id)myNumber;
-(void)setCallForwardingNumber:(id)arg1 ;
-(int)showDialAssist;
-(int)showServiceCodes;
-(void)destroyServerConnection;
-(unsigned)callForwardingEnabled:(char)arg1 forReason:(id)arg2 ;
-(id)_callForwardingSettingsForForwardingReason:(id)arg1 ;
-(void)_requestCallForwardingSettingsForReason:(id)arg1 ;
-(void)setCallForwardingEnabled:(char)arg1 forReason:(id)arg2 ;
-(void)_saveCallForwardingEnabled:(char)arg1 number:(id)arg2 forwardingReason:(id)arg3 ;
-(void)_handleCallForwardingSettings:(id)arg1 didAttemptToSet:(char)arg2 forwardingReason:(id)arg3 ;
-(id)callForwardingNumber:(char)arg1 forReason:(id)arg2 ;
-(void)setCallForwardingNumber:(id)arg1 forReason:(id)arg2 ;
-(void)_requestSettings:(id)arg1 ;
-(void)_saveSettings:(id)arg1 ;
-(void)_handleCallWaitingSettings:(id)arg1 ;
-(unsigned)callerIDModifiable:(char)arg1 ;
-(unsigned)callerIDMode:(char)arg1 ;
-(void)_handleCallerIDSettings:(id)arg1 ;
-(void)_handleSIMLockSettings:(id)arg1 ;
-(void)_populateToolkitMenuIfNeeded;
-(char)allowSIMLock;
-(unsigned)simLocked:(char)arg1 ;
-(char)hasSubscriberIdentity;
-(id)carrierServices;
-(char)simIsPresent;
-(id)simToolkitMenuItems;
-(void)postCallForwardingChangedNotificationForForwardingReason:(id)arg1 ;
-(void)_phoneNumberSaveFinishedWithSuccess:(char)arg1 ;
-(id)manuallySelectedNetworkDictionary;
-(int)networkSelectionMode;
-(void)_invalidateSIMLockedSetting;
-(int)currentNetworkSelectionState;
-(id)carrierMMSInfoURL;
-(id)carrierMMSInfoTitle;
-(char)allowNetworkSelection;
-(id)currentNetwork;
-(void)enableAutomaticNetworkSelection;
-(void)selectManualNetwork:(id)arg1 ;
-(unsigned)callForwardingEnabled:(char)arg1 ;
-(void)setCallForwardingEnabled:(char)arg1 ;
-(id)callForwardingNumber:(char)arg1 ;
-(unsigned)callWaitingEnabled:(char)arg1 ;
-(void)setCallWaitingEnabled:(char)arg1 ;
-(char)allowCallerIDChange:(char)arg1 ;
-(void)setCallerIDEnabled:(unsigned)arg1 ;
-(void)requestNetworkList;
-(void)setSIMLocked:(char)arg1 password:(id)arg2 ;
-(id)unlockAttemptsRemainingString;
-(void)selectSIMToolkitMenuItemAtIndex:(int)arg1 ;
-(id)simToolkitMenuTitle;
-(char)allowPINChange;
-(void)setPIN:(id)arg1 password:(id)arg2 ;
-(id)pendingRequestForUniqueSettingType:(id)arg1 ;
-(id)pendingSaveForUniqueSettingType:(id)arg1 ;
-(void)receivedRequestResponseForUniqueSettingType:(id)arg1 ;
-(void)receivedSaveResponseForUniqueSettingType:(id)arg1 ;
-(id)lastUsedForwardingNumberForReason:(id)arg1 ;
-(void)resetLastUsedForwardingNumberForReason:(id)arg1 ;
-(void)_handleNetworkList:(id)arg1 ;
-(void)_handlePINSettings:(id)arg1 ;
-(void)_carrierInfoChanged;
-(void)_simRemoved;
-(void)_simReady;
-(void)_simPUKLocked;
-(void)_networkSettingsDisabled;
-(void)_phoneBookSelected;
-(void)_phoneNumberWritten;
-(void)_phoneNumberChanged;
-(void)_invalidateSIMToolkitMenuItemCache;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)startWatching;
-(void)stopWatching;
-(id)descriptionDictionary;
-(id)carrierName;
-(int)showReplyWithMessage;
@end

