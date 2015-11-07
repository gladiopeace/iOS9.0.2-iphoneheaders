/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKPass.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet, PKPaymentApplication, NSURL;

@interface PKPaymentPass : PKPass <NSCopying, NSSecureCoding> {

	char _supportsDPANNotifications;
	char _supportsFPANNotifications;
	char _supportsDefaultCardSelection;
	char _paymentOptionSelectable;
	char _cobranded;
	NSString* _primaryAccountIdentifier;
	NSString* _primaryAccountNumberSuffix;
	NSSet* _associatedApplicationIdentifiers;
	NSString* _sanitizedPrimaryAccountNumber;
	NSSet* _paymentApplications;
	NSSet* _devicePaymentApplications;
	PKPaymentApplication* _devicePrimaryPaymentApplication;
	NSString* _cobrandName;
	NSURL* _transactionServiceURL;
	NSString* _transactionPushTopic;
	NSURL* _messageServiceURL;
	NSString* _messagePushTopic;
	NSString* _appURLScheme;
	NSString* _localizedSuspendedReason;

}

@property (nonatomic,copy) NSString * primaryAccountIdentifier;                                          //@synthesize primaryAccountIdentifier=_primaryAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountNumberSuffix;                                        //@synthesize primaryAccountNumberSuffix=_primaryAccountNumberSuffix - In the implementation block
@property (readonly) NSString * deviceAccountIdentifier; 
@property (readonly) NSString * deviceAccountNumberSuffix; 
@property (nonatomic,readonly) unsigned activationState; 
@property (nonatomic,copy) NSSet * associatedApplicationIdentifiers;                                     //@synthesize associatedApplicationIdentifiers=_associatedApplicationIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * sanitizedPrimaryAccountNumber;                                     //@synthesize sanitizedPrimaryAccountNumber=_sanitizedPrimaryAccountNumber - In the implementation block
@property (assign,nonatomic) char supportsDPANNotifications;                                             //@synthesize supportsDPANNotifications=_supportsDPANNotifications - In the implementation block
@property (assign,nonatomic) char supportsFPANNotifications;                                             //@synthesize supportsFPANNotifications=_supportsFPANNotifications - In the implementation block
@property (assign,nonatomic) char supportsDefaultCardSelection;                                          //@synthesize supportsDefaultCardSelection=_supportsDefaultCardSelection - In the implementation block
@property (assign,getter=isPaymentOptionSelectable,nonatomic) char paymentOptionSelectable;              //@synthesize paymentOptionSelectable=_paymentOptionSelectable - In the implementation block
@property (nonatomic,copy) NSSet * paymentApplications;                                                  //@synthesize paymentApplications=_paymentApplications - In the implementation block
@property (nonatomic,copy) NSSet * devicePaymentApplications;                                            //@synthesize devicePaymentApplications=_devicePaymentApplications - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * devicePrimaryPaymentApplication;                     //@synthesize devicePrimaryPaymentApplication=_devicePrimaryPaymentApplication - In the implementation block
@property (getter=isPrivateLabel,nonatomic,readonly) char privateLabel; 
@property (assign,getter=isCobranded,nonatomic) char cobranded;                                          //@synthesize cobranded=_cobranded - In the implementation block
@property (nonatomic,copy) NSString * cobrandName;                                                       //@synthesize cobrandName=_cobrandName - In the implementation block
@property (nonatomic,copy) NSURL * transactionServiceURL;                                                //@synthesize transactionServiceURL=_transactionServiceURL - In the implementation block
@property (nonatomic,copy) NSString * transactionPushTopic;                                              //@synthesize transactionPushTopic=_transactionPushTopic - In the implementation block
@property (nonatomic,copy) NSURL * messageServiceURL;                                                    //@synthesize messageServiceURL=_messageServiceURL - In the implementation block
@property (nonatomic,copy) NSString * messagePushTopic;                                                  //@synthesize messagePushTopic=_messagePushTopic - In the implementation block
@property (nonatomic,copy) NSString * appURLScheme;                                                      //@synthesize appURLScheme=_appURLScheme - In the implementation block
@property (nonatomic,copy) NSString * localizedSuspendedReason;                                          //@synthesize localizedSuspendedReason=_localizedSuspendedReason - In the implementation block
+(char)supportsSecureCoding;
+(unsigned)defaultSettings;
-(char)npkHasUserSelectablePaymentApplications;
-(id)npkSelectedPaymentApplication;
-(NSSet *)devicePaymentApplications;
-(char)availableForAutomaticPresentationUsingBeaconContext;
-(char)availableForAutomaticPresentationUsingVASContext;
-(char)supportsDPANNotifications;
-(char)supportsFPANNotifications;
-(unsigned)activationState;
-(char)isPaymentOptionSelectable;
-(NSSet *)paymentApplications;
-(NSString *)deviceAccountNumberSuffix;
-(id)sanitizedDeviceAccountNumber;
-(PKPaymentApplication *)devicePrimaryPaymentApplication;
-(NSString *)primaryAccountNumberSuffix;
-(NSString *)sanitizedPrimaryAccountNumber;
-(NSString *)localizedSuspendedReason;
-(void)setPaymentApplications:(NSSet *)arg1 ;
-(NSString *)primaryAccountIdentifier;
-(id)paymentApplicationForAID:(id)arg1 ;
-(int)effectiveContactlessPaymentApplicationState;
-(char)isPrivateLabel;
-(unsigned)contactlessActivationState;
-(NSString *)appURLScheme;
-(NSSet *)associatedApplicationIdentifiers;
-(NSString *)deviceAccountIdentifier;
-(void)setPrimaryAccountIdentifier:(NSString *)arg1 ;
-(void)sanitizePaymentApplications;
-(char)isDevicePrimaryPaymentApplicationPersonalized;
-(char)hasDevicePaymentApplicationsAvailable;
-(id)paymentApplicationsForSecureElementIdentifier:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAssociatedApplicationIdentifiers:(NSSet *)arg1 ;
-(void)setPrimaryAccountNumberSuffix:(NSString *)arg1 ;
-(void)setSanitizedPrimaryAccountNumber:(NSString *)arg1 ;
-(void)setSupportsDPANNotifications:(char)arg1 ;
-(void)setSupportsFPANNotifications:(char)arg1 ;
-(void)setSupportsDefaultCardSelection:(char)arg1 ;
-(void)setPaymentOptionSelectable:(char)arg1 ;
-(void)setCobranded:(char)arg1 ;
-(void)setCobrandName:(NSString *)arg1 ;
-(void)setDevicePaymentApplications:(NSSet *)arg1 ;
-(void)setDevicePrimaryPaymentApplication:(PKPaymentApplication *)arg1 ;
-(char)isCobranded;
-(unsigned)_activationStateForApplicationState:(int)arg1 ;
-(NSURL *)transactionServiceURL;
-(NSString *)transactionPushTopic;
-(NSURL *)messageServiceURL;
-(NSString *)messagePushTopic;
-(id)_localizedSuspendedReasonForAID:(id)arg1 ;
-(id)primaryPaymentApplicationForSecureElementIdentifier:(id)arg1 ;
-(void)updateDevicePaymentApplicationsWithSecureElementIdentifier:(id)arg1 ;
-(char)supportsDefaultCardSelection;
-(NSString *)cobrandName;
-(void)setTransactionServiceURL:(NSURL *)arg1 ;
-(void)setTransactionPushTopic:(NSString *)arg1 ;
-(void)setMessageServiceURL:(NSURL *)arg1 ;
-(void)setMessagePushTopic:(NSString *)arg1 ;
-(void)setAppURLScheme:(NSString *)arg1 ;
-(void)setLocalizedSuspendedReason:(NSString *)arg1 ;
@end

