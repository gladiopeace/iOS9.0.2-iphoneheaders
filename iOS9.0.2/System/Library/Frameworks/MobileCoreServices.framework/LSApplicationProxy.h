/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCoreServices/MobileCoreServices-Structs.h>
#import <MobileCoreServices/LSBundleProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSDictionary, NSNumber, NSUUID, NSDate, NSProgress;

@interface LSApplicationProxy : LSBundleProxy <NSSecureCoding> {

	unsigned _flags;
	NSArray* _privateDocumentIconNames;
	LSApplicationProxy* _privateDocumentTypeOwner;
	NSString* _vendorName;
	NSString* _itemName;
	NSString* _shortVersionString;
	unsigned _installType;
	unsigned _originalInstallType;
	NSDictionary* _groupContainers;
	NSArray* _externalAccessoryProtocols;
	NSArray* _deviceFamily;
	NSArray* _requiredDeviceCapabilities;
	NSString* _minimumSystemVersion;
	NSString* _sdkVersion;
	NSArray* _directionsModes;
	NSArray* _UIBackgroundModes;
	NSArray* _audioComponents;
	NSArray* _VPNPlugins;
	NSArray* _pluginUUIDs;
	NSArray* _plugInKitPlugins;
	NSArray* _appTags;
	NSString* _applicationDSID;
	NSString* _storeCohortMetadata;
	NSNumber* _storeFront;
	NSNumber* _versionID;
	NSString* _sourceAppIdentifier;
	NSString* _applicationVariant;
	NSString* _companionAppIdentifier;
	NSNumber* _purchaserDSID;
	NSNumber* _downloaderDSID;
	NSNumber* _familyID;
	char _isContainerized;
	long _modTime;
	long _regTime;
	NSUUID* _deviceIdentifierForVendor;
	NSNumber* _staticDiskUsage;
	NSNumber* _dynamicDiskUsage;
	NSNumber* _ODRDiskUsage;
	NSDate* _registeredDate;
	NSNumber* _itemID;
	NSArray* _groupIdentifiers;
	NSString* _teamID;

}

@property (nonatomic,readonly) NSString * applicationIdentifier; 
@property (nonatomic,readonly) NSString * companionApplicationIdentifier;              //@synthesize companionAppIdentifier=_companionAppIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * registeredDate;                                //@synthesize registeredDate=_registeredDate - In the implementation block
@property (nonatomic,readonly) NSNumber * itemID;                                      //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) NSString * roleIdentifier; 
@property (nonatomic,readonly) NSString * vendorName;                                  //@synthesize vendorName=_vendorName - In the implementation block
@property (nonatomic,readonly) NSString * itemName;                                    //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,readonly) NSString * storeCohortMetadata;                         //@synthesize storeCohortMetadata=_storeCohortMetadata - In the implementation block
@property (nonatomic,readonly) NSString * minimumSystemVersion;                        //@synthesize minimumSystemVersion=_minimumSystemVersion - In the implementation block
@property (nonatomic,readonly) NSString * sdkVersion;                                  //@synthesize sdkVersion=_sdkVersion - In the implementation block
@property (nonatomic,readonly) NSString * shortVersionString;                          //@synthesize shortVersionString=_shortVersionString - In the implementation block
@property (nonatomic,readonly) NSString * preferredArchitecture; 
@property (nonatomic,readonly) NSString * applicationType; 
@property (nonatomic,readonly) NSArray * directionsModes;                              //@synthesize directionsModes=_directionsModes - In the implementation block
@property (nonatomic,readonly) NSArray * UIBackgroundModes;                            //@synthesize UIBackgroundModes=_UIBackgroundModes - In the implementation block
@property (nonatomic,readonly) NSArray * audioComponents;                              //@synthesize audioComponents=_audioComponents - In the implementation block
@property (nonatomic,readonly) NSDictionary * groupContainers;                         //@synthesize groupContainers=_groupContainers - In the implementation block
@property (nonatomic,readonly) NSUUID * deviceIdentifierForVendor;                     //@synthesize deviceIdentifierForVendor=_deviceIdentifierForVendor - In the implementation block
@property (nonatomic,readonly) NSProgress * installProgress; 
@property (nonatomic,readonly) NSNumber * staticDiskUsage;                             //@synthesize staticDiskUsage=_staticDiskUsage - In the implementation block
@property (nonatomic,readonly) NSNumber * dynamicDiskUsage;                            //@synthesize dynamicDiskUsage=_dynamicDiskUsage - In the implementation block
@property (nonatomic,readonly) NSNumber * ODRDiskUsage;                                //@synthesize ODRDiskUsage=_ODRDiskUsage - In the implementation block
@property (nonatomic,readonly) NSArray * VPNPlugins;                                   //@synthesize VPNPlugins=_VPNPlugins - In the implementation block
@property (nonatomic,readonly) NSArray * plugInKitPlugins;                             //@synthesize plugInKitPlugins=_plugInKitPlugins - In the implementation block
@property (nonatomic,readonly) NSArray * appTags;                                      //@synthesize appTags=_appTags - In the implementation block
@property (nonatomic,readonly) NSString * applicationDSID;                             //@synthesize applicationDSID=_applicationDSID - In the implementation block
@property (nonatomic,readonly) NSNumber * purchaserDSID;                               //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (nonatomic,readonly) NSNumber * downloaderDSID;                              //@synthesize downloaderDSID=_downloaderDSID - In the implementation block
@property (nonatomic,readonly) NSNumber * familyID;                                    //@synthesize familyID=_familyID - In the implementation block
@property (nonatomic,readonly) unsigned installType;                                   //@synthesize installType=_installType - In the implementation block
@property (nonatomic,readonly) unsigned originalInstallType;                           //@synthesize originalInstallType=_originalInstallType - In the implementation block
@property (nonatomic,readonly) NSArray * requiredDeviceCapabilities;                   //@synthesize requiredDeviceCapabilities=_requiredDeviceCapabilities - In the implementation block
@property (nonatomic,readonly) NSArray * deviceFamily;                                 //@synthesize deviceFamily=_deviceFamily - In the implementation block
@property (nonatomic,readonly) NSArray * groupIdentifiers;                             //@synthesize groupIdentifiers=_groupIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * externalAccessoryProtocols; 
@property (nonatomic,readonly) NSString * teamID;                                      //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,readonly) NSNumber * storeFront;                                  //@synthesize storeFront=_storeFront - In the implementation block
@property (nonatomic,readonly) NSNumber * externalVersionIdentifier;                   //@synthesize versionID=_versionID - In the implementation block
@property (nonatomic,readonly) NSNumber * betaExternalVersionIdentifier; 
@property (nonatomic,readonly) NSString * sourceAppIdentifier;                         //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * applicationVariant;                          //@synthesize applicationVariant=_applicationVariant - In the implementation block
@property (nonatomic,readonly) char isInstalled; 
@property (nonatomic,readonly) char isPlaceholder; 
@property (nonatomic,readonly) char isAppUpdate; 
@property (nonatomic,readonly) char isNewsstandApp; 
@property (nonatomic,readonly) char isRestricted; 
@property (nonatomic,readonly) char isBetaApp; 
@property (nonatomic,readonly) char profileValidated; 
@property (nonatomic,readonly) char isAdHocCodeSigned; 
@property (nonatomic,readonly) char supportsAudiobooks; 
@property (nonatomic,readonly) char isContainerized;                                   //@synthesize isContainerized=_isContainerized - In the implementation block
@property (nonatomic,readonly) char hasSettingsBundle; 
@property (nonatomic,readonly) char supportsExternallyPlayableContent; 
@property (nonatomic,readonly) char supportsOpenInPlace; 
@property (nonatomic,readonly) char fileSharingEnabled; 
@property (nonatomic,readonly) char iconIsPrerendered; 
@property (nonatomic,readonly) char isPurchasedReDownload; 
@property (nonatomic,readonly) char isWatchKitApp; 
@property (nonatomic,readonly) char hasMIDBasedSINF; 
@property (nonatomic,readonly) char missingRequiredSINF; 
+(id)applicationProxyWithBundleUnitID:(unsigned long)arg1 ;
+(id)applicationProxyForIdentifier:(id)arg1 roleIdentifier:(id)arg2 ;
+(id)applicationProxyForItemID:(id)arg1 ;
+(char)supportsSecureCoding;
+(id)applicationProxyForIdentifier:(id)arg1 ;
+(id)applicationProxyForBundleURL:(id)arg1 ;
+(id)applicationProxyForIdentifier:(id)arg1 placeholder:(char)arg2 ;
-(CGSize)_defaultStyleSize:(id)arg1 ;
-(SCD_Struct_LS4*)_iconVariantDefinitions:(id)arg1 ;
-(NSArray *)groupIdentifiers;
-(id)appStoreReceiptURL;
-(NSString *)teamID;
-(char)isInstalled;
-(NSNumber *)itemID;
-(void)setPrivateDocumentIconNames:(id)arg1 ;
-(void)setPrivateDocumentIconAllowOverride:(char)arg1 ;
-(void)setPrivateDocumentTypeOwner:(id)arg1 ;
-(void)populateNotificationData;
-(char)isAppUpdate;
-(long)bundleModTime;
-(char)privateDocumentIconAllowOverride;
-(id)iconStyleDomain;
-(id)privateIconsDictionary;
-(id)privateDocumentIconNames;
-(id)_initWithBundleUnit:(unsigned long)arg1 applicationIdentifier:(id)arg2 ;
-(NSString *)storeCohortMetadata;
-(NSNumber *)storeFront;
-(NSString *)roleIdentifier;
-(NSDate *)registeredDate;
-(NSString *)minimumSystemVersion;
-(NSString *)applicationVariant;
-(NSString *)preferredArchitecture;
-(NSNumber *)familyID;
-(NSDictionary *)groupContainers;
-(NSArray *)directionsModes;
-(NSArray *)audioComponents;
-(NSArray *)VPNPlugins;
-(NSNumber *)staticDiskUsage;
-(NSNumber *)dynamicDiskUsage;
-(NSNumber *)ODRDiskUsage;
-(id)installProgressSync;
-(id)privateDocumentTypeOwner;
-(char)fileSharingEnabled;
-(char)isAdHocCodeSigned;
-(char)supportsAudiobooks;
-(char)supportsExternallyPlayableContent;
-(char)isPurchasedReDownload;
-(char)isWatchKitApp;
-(id)userActivityStringForAdvertisementData:(id)arg1 ;
-(unsigned)originalInstallType;
-(id)versionIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)applicationIdentifier;
-(id)iconDataForVariant:(int)arg1 ;
-(id)localizedName;
-(id)localizedNameForContext:(id)arg1 ;
-(NSUUID *)deviceIdentifierForVendor;
-(id)uniqueIdentifier;
-(char)iconIsPrerendered;
-(NSArray *)plugInKitPlugins;
-(char)supportsOpenInPlace;
-(id)localizedShortName;
-(char)isContainerized;
-(NSString *)applicationType;
-(NSProgress *)installProgress;
-(char)profileValidated;
-(char)isBetaApp;
-(NSString *)sdkVersion;
-(NSArray *)deviceFamily;
-(NSNumber *)purchaserDSID;
-(NSNumber *)downloaderDSID;
-(NSArray *)externalAccessoryProtocols;
-(unsigned)installType;
-(NSString *)shortVersionString;
-(NSString *)companionApplicationIdentifier;
-(char)hasSettingsBundle;
-(NSArray *)UIBackgroundModes;
-(NSArray *)appTags;
-(id)resourcesDirectoryURL;
-(char)isNewsstandApp;
-(char)isPlaceholder;
-(char)isRestricted;
-(NSNumber *)betaExternalVersionIdentifier;
-(NSArray *)requiredDeviceCapabilities;
-(NSNumber *)externalVersionIdentifier;
-(id)machOUUIDs;
-(NSString *)applicationDSID;
-(char)hasMIDBasedSINF;
-(char)missingRequiredSINF;
-(NSString *)vendorName;
-(NSString *)itemName;
-(NSString *)sourceAppIdentifier;
@end

