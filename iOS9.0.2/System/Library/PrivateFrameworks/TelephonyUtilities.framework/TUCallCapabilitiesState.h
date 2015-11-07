/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TUPubliclyAccessibleCopying.h>

@class TUCTCapabilityInfo, NSDictionary, NSSet, NSString, NSArray, TUCloudCallingDevice;

@interface TUCallCapabilitiesState : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying> {

	char _supportsHostingTelephonyCalls;
	char _supportsHostingFaceTimeAudioCalls;
	char _supportsHostingFaceTimeVideoCalls;
	char _supportsHostingIDSCalls;
	char _supportsDisplayingTelephonyCalls;
	char _supportsDisplayingFaceTimeAudioCalls;
	char _supportsDisplayingFaceTimeVideoCalls;
	char _faceTimeAudioAvailable;
	char _faceTimeVideoAvailable;
	char _ctCapabilitiesValid;
	char _wiFiCallingCurrentlyAvailable;
	char _wiFiEmergencyCallingAllowed;
	char _accountsSupportSecondaryCalling;
	char _supportsThumperCalling;
	char _thumperCallingCurrentlyAvailable;
	char _thumperCallingAllowedForCurrentDevice;
	char _thumperCallingEnabled;
	char _supportsRelayCalling;
	char _relayCallingEnabled;
	char _supportsSimultaneousVoiceAndData;
	char _pairedDeviceExists;
	TUCTCapabilityInfo* _wiFiCallingCapabilityInfo;
	TUCTCapabilityInfo* _voLTECallingCapabilityInfo;
	NSDictionary* _thumperCallingPrimaryDeviceIDToRemainingDeviceSlotsMap;
	TUCTCapabilityInfo* _thumperCallingCapabilityInfo;
	NSSet* _thumperCallingAllowedSecondaryDeviceIDs;
	NSDictionary* _thumperCallingActivePrimaryDeviceIDToPhoneNumberURIMap;
	NSString* _thumperCallingLocalDeviceID;
	NSDictionary* _relayCallingDisabledForDeviceID;
	NSString* _outgoingRelayCallerID;
	NSArray* _cloudCallingDevices;

}

@property (assign,nonatomic) char supportsHostingTelephonyCalls;                                                                     //@synthesize supportsHostingTelephonyCalls=_supportsHostingTelephonyCalls - In the implementation block
@property (assign,nonatomic) char supportsHostingFaceTimeAudioCalls;                                                                 //@synthesize supportsHostingFaceTimeAudioCalls=_supportsHostingFaceTimeAudioCalls - In the implementation block
@property (assign,nonatomic) char supportsHostingFaceTimeVideoCalls;                                                                 //@synthesize supportsHostingFaceTimeVideoCalls=_supportsHostingFaceTimeVideoCalls - In the implementation block
@property (assign,nonatomic) char supportsHostingIDSCalls;                                                                           //@synthesize supportsHostingIDSCalls=_supportsHostingIDSCalls - In the implementation block
@property (assign,nonatomic) char supportsDisplayingTelephonyCalls;                                                                  //@synthesize supportsDisplayingTelephonyCalls=_supportsDisplayingTelephonyCalls - In the implementation block
@property (assign,nonatomic) char supportsDisplayingFaceTimeAudioCalls;                                                              //@synthesize supportsDisplayingFaceTimeAudioCalls=_supportsDisplayingFaceTimeAudioCalls - In the implementation block
@property (assign,nonatomic) char supportsDisplayingFaceTimeVideoCalls;                                                              //@synthesize supportsDisplayingFaceTimeVideoCalls=_supportsDisplayingFaceTimeVideoCalls - In the implementation block
@property (assign,getter=isFaceTimeAudioAvailable,nonatomic) char faceTimeAudioAvailable;                                            //@synthesize faceTimeAudioAvailable=_faceTimeAudioAvailable - In the implementation block
@property (assign,getter=isFaceTimeVideoAvailable,nonatomic) char faceTimeVideoAvailable;                                            //@synthesize faceTimeVideoAvailable=_faceTimeVideoAvailable - In the implementation block
@property (assign,getter=areCTCapabilitiesValid,nonatomic) char ctCapabilitiesValid;                                                 //@synthesize ctCapabilitiesValid=_ctCapabilitiesValid - In the implementation block
@property (assign,getter=isWiFiCallingCurrentlyAvailable,nonatomic) char wiFiCallingCurrentlyAvailable;                              //@synthesize wiFiCallingCurrentlyAvailable=_wiFiCallingCurrentlyAvailable - In the implementation block
@property (assign,getter=isWiFiEmergencyCallingAllowed,nonatomic) char wiFiEmergencyCallingAllowed;                                  //@synthesize wiFiEmergencyCallingAllowed=_wiFiEmergencyCallingAllowed - In the implementation block
@property (nonatomic,copy) TUCTCapabilityInfo * wiFiCallingCapabilityInfo;                                                           //@synthesize wiFiCallingCapabilityInfo=_wiFiCallingCapabilityInfo - In the implementation block
@property (nonatomic,copy) TUCTCapabilityInfo * voLTECallingCapabilityInfo;                                                          //@synthesize voLTECallingCapabilityInfo=_voLTECallingCapabilityInfo - In the implementation block
@property (assign,nonatomic) char accountsSupportSecondaryCalling;                                                                   //@synthesize accountsSupportSecondaryCalling=_accountsSupportSecondaryCalling - In the implementation block
@property (assign,nonatomic) char supportsThumperCalling;                                                                            //@synthesize supportsThumperCalling=_supportsThumperCalling - In the implementation block
@property (assign,getter=isThumperCallingCurrentlyAvailable,nonatomic) char thumperCallingCurrentlyAvailable;                        //@synthesize thumperCallingCurrentlyAvailable=_thumperCallingCurrentlyAvailable - In the implementation block
@property (assign,getter=isThumperCallingAllowedForCurrentDevice,nonatomic) char thumperCallingAllowedForCurrentDevice;              //@synthesize thumperCallingAllowedForCurrentDevice=_thumperCallingAllowedForCurrentDevice - In the implementation block
@property (assign,getter=isThumperCallingEnabled,nonatomic) char thumperCallingEnabled;                                              //@synthesize thumperCallingEnabled=_thumperCallingEnabled - In the implementation block
@property (nonatomic,copy) NSDictionary * thumperCallingPrimaryDeviceIDToRemainingDeviceSlotsMap;                                    //@synthesize thumperCallingPrimaryDeviceIDToRemainingDeviceSlotsMap=_thumperCallingPrimaryDeviceIDToRemainingDeviceSlotsMap - In the implementation block
@property (nonatomic,copy) TUCTCapabilityInfo * thumperCallingCapabilityInfo;                                                        //@synthesize thumperCallingCapabilityInfo=_thumperCallingCapabilityInfo - In the implementation block
@property (nonatomic,copy) NSSet * thumperCallingAllowedSecondaryDeviceIDs;                                                          //@synthesize thumperCallingAllowedSecondaryDeviceIDs=_thumperCallingAllowedSecondaryDeviceIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * thumperCallingActivePrimaryDeviceIDToPhoneNumberURIMap;                                    //@synthesize thumperCallingActivePrimaryDeviceIDToPhoneNumberURIMap=_thumperCallingActivePrimaryDeviceIDToPhoneNumberURIMap - In the implementation block
@property (nonatomic,copy) NSString * thumperCallingLocalDeviceID;                                                                   //@synthesize thumperCallingLocalDeviceID=_thumperCallingLocalDeviceID - In the implementation block
@property (assign,nonatomic) char supportsRelayCalling;                                                                              //@synthesize supportsRelayCalling=_supportsRelayCalling - In the implementation block
@property (assign,getter=isRelayCallingEnabled,nonatomic) char relayCallingEnabled;                                                  //@synthesize relayCallingEnabled=_relayCallingEnabled - In the implementation block
@property (nonatomic,copy) NSDictionary * relayCallingDisabledForDeviceID;                                                           //@synthesize relayCallingDisabledForDeviceID=_relayCallingDisabledForDeviceID - In the implementation block
@property (nonatomic,copy) NSString * outgoingRelayCallerID;                                                                         //@synthesize outgoingRelayCallerID=_outgoingRelayCallerID - In the implementation block
@property (assign,nonatomic) char supportsSimultaneousVoiceAndData;                                                                  //@synthesize supportsSimultaneousVoiceAndData=_supportsSimultaneousVoiceAndData - In the implementation block
@property (assign,nonatomic) char pairedDeviceExists;                                                                                //@synthesize pairedDeviceExists=_pairedDeviceExists - In the implementation block
@property (nonatomic,copy) NSArray * cloudCallingDevices;                                                                            //@synthesize cloudCallingDevices=_cloudCallingDevices - In the implementation block
@property (nonatomic,readonly) TUCloudCallingDevice * defaultPairedDevice; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)allowedCapabilityInformationClasses;
-(char)isFaceTimeAudioAvailable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)accountsSupportSecondaryCalling;
-(void)setRelayCallingEnabled:(char)arg1 ;
-(char)isRelayCallingEnabled;
-(char)supportsRelayCalling;
-(char)supportsHostingTelephonyCalls;
-(char)supportsThumperCalling;
-(NSString *)outgoingRelayCallerID;
-(char)isThumperCallingEnabled;
-(char)supportsHostingFaceTimeAudioCalls;
-(char)supportsHostingFaceTimeVideoCalls;
-(char)isWiFiCallingCurrentlyAvailable;
-(char)isThumperCallingCurrentlyAvailable;
-(char)isWiFiEmergencyCallingAllowed;
-(char)supportsDisplayingTelephonyCalls;
-(char)supportsDisplayingFaceTimeAudioCalls;
-(char)isFaceTimeVideoAvailable;
-(char)supportsDisplayingFaceTimeVideoCalls;
-(char)supportsHostingIDSCalls;
-(char)supportsSimultaneousVoiceAndData;
-(char)areCTCapabilitiesValid;
-(TUCTCapabilityInfo *)wiFiCallingCapabilityInfo;
-(TUCTCapabilityInfo *)voLTECallingCapabilityInfo;
-(NSArray *)cloudCallingDevices;
-(char)isThumperCallingAllowedForCurrentDevice;
-(NSDictionary *)thumperCallingPrimaryDeviceIDToRemainingDeviceSlotsMap;
-(NSString *)thumperCallingLocalDeviceID;
-(TUCTCapabilityInfo *)thumperCallingCapabilityInfo;
-(void)setThumperCallingEnabled:(char)arg1 ;
-(NSSet *)thumperCallingAllowedSecondaryDeviceIDs;
-(TUCloudCallingDevice *)defaultPairedDevice;
-(char)pairedDeviceExists;
-(NSDictionary *)relayCallingDisabledForDeviceID;
-(id)publiclyAccessibleCopyWithZone:(NSZone*)arg1 ;
-(id)publiclyAccessibleCopy;
-(NSDictionary *)thumperCallingActivePrimaryDeviceIDToPhoneNumberURIMap;
-(void)setSupportsHostingTelephonyCalls:(char)arg1 ;
-(void)setSupportsHostingFaceTimeAudioCalls:(char)arg1 ;
-(void)setSupportsHostingFaceTimeVideoCalls:(char)arg1 ;
-(void)setSupportsHostingIDSCalls:(char)arg1 ;
-(void)setSupportsDisplayingTelephonyCalls:(char)arg1 ;
-(void)setSupportsDisplayingFaceTimeAudioCalls:(char)arg1 ;
-(void)setSupportsDisplayingFaceTimeVideoCalls:(char)arg1 ;
-(void)setFaceTimeAudioAvailable:(char)arg1 ;
-(void)setFaceTimeVideoAvailable:(char)arg1 ;
-(void)setCtCapabilitiesValid:(char)arg1 ;
-(void)setWiFiCallingCurrentlyAvailable:(char)arg1 ;
-(void)setWiFiEmergencyCallingAllowed:(char)arg1 ;
-(void)setWiFiCallingCapabilityInfo:(TUCTCapabilityInfo *)arg1 ;
-(void)setVoLTECallingCapabilityInfo:(TUCTCapabilityInfo *)arg1 ;
-(void)setSupportsThumperCalling:(char)arg1 ;
-(void)setThumperCallingCurrentlyAvailable:(char)arg1 ;
-(void)setThumperCallingAllowedForCurrentDevice:(char)arg1 ;
-(void)setThumperCallingPrimaryDeviceIDToRemainingDeviceSlotsMap:(NSDictionary *)arg1 ;
-(void)setThumperCallingCapabilityInfo:(TUCTCapabilityInfo *)arg1 ;
-(void)setThumperCallingAllowedSecondaryDeviceIDs:(NSSet *)arg1 ;
-(void)setThumperCallingActivePrimaryDeviceIDToPhoneNumberURIMap:(NSDictionary *)arg1 ;
-(void)setThumperCallingLocalDeviceID:(NSString *)arg1 ;
-(void)setSupportsRelayCalling:(char)arg1 ;
-(void)setAccountsSupportSecondaryCalling:(char)arg1 ;
-(void)setRelayCallingDisabledForDeviceID:(NSDictionary *)arg1 ;
-(void)setOutgoingRelayCallerID:(NSString *)arg1 ;
-(void)setSupportsSimultaneousVoiceAndData:(char)arg1 ;
-(void)setPairedDeviceExists:(char)arg1 ;
-(void)setCloudCallingDevices:(NSArray *)arg1 ;
-(id)deviceIDForPhoneNumber:(id)arg1 ;
@end

