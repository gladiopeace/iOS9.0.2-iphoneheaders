/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/SLService.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, NSBundle, NSString, NSSet, NSURL;

@interface SLRemoteService : SLService <NSSecureCoding> {

	int _maximumVideoCount;
	UIImage* _activityImage;
	NSBundle* _serviceBundle;
	char _serviceRegionTargetIsChina;
	char _addDeviceClassToRequest;
	NSString* _serviceTypeIdentifier;
	NSString* _accountTypeIdentifier;
	NSString* _localizedServiceName;
	NSString* _activityViewIconResourceName;
	int _authenticationStyle;
	int _maximumURLCount;
	int _maximumImageCount;
	int _maximumImageDataSize;
	int _maximumVideoDataSize;
	int _maximumVideoTimeLimit;
	NSSet* _supportedImageAssetURLSchemes;
	NSSet* _supportedVideoAssetURLSchemes;
	NSString* _activityImageName;
	NSURL* _serviceBundleURL;

}

@property (retain) NSString * serviceTypeIdentifier;                     //@synthesize serviceTypeIdentifier=_serviceTypeIdentifier - In the implementation block
@property (retain) NSString * accountTypeIdentifier;                     //@synthesize accountTypeIdentifier=_accountTypeIdentifier - In the implementation block
@property (retain) NSString * localizedServiceName;                      //@synthesize localizedServiceName=_localizedServiceName - In the implementation block
@property (retain) NSString * activityViewIconResourceName;              //@synthesize activityViewIconResourceName=_activityViewIconResourceName - In the implementation block
@property (assign) char serviceRegionTargetIsChina;                      //@synthesize serviceRegionTargetIsChina=_serviceRegionTargetIsChina - In the implementation block
@property (assign) int authenticationStyle;                              //@synthesize authenticationStyle=_authenticationStyle - In the implementation block
@property (assign) int maximumURLCount;                                  //@synthesize maximumURLCount=_maximumURLCount - In the implementation block
@property (assign) int maximumImageCount;                                //@synthesize maximumImageCount=_maximumImageCount - In the implementation block
@property (assign) int maximumImageDataSize;                             //@synthesize maximumImageDataSize=_maximumImageDataSize - In the implementation block
@property (assign,nonatomic) int maximumVideoCount; 
@property (assign) int maximumVideoDataSize;                             //@synthesize maximumVideoDataSize=_maximumVideoDataSize - In the implementation block
@property (assign) int maximumVideoTimeLimit;                            //@synthesize maximumVideoTimeLimit=_maximumVideoTimeLimit - In the implementation block
@property (retain) NSSet * supportedImageAssetURLSchemes;                //@synthesize supportedImageAssetURLSchemes=_supportedImageAssetURLSchemes - In the implementation block
@property (retain) NSSet * supportedVideoAssetURLSchemes;                //@synthesize supportedVideoAssetURLSchemes=_supportedVideoAssetURLSchemes - In the implementation block
@property (assign) char addDeviceClassToRequest;                         //@synthesize addDeviceClassToRequest=_addDeviceClassToRequest - In the implementation block
@property (retain) NSString * activityImageName;                         //@synthesize activityImageName=_activityImageName - In the implementation block
@property (retain) NSURL * serviceBundleURL;                             //@synthesize serviceBundleURL=_serviceBundleURL - In the implementation block
@property (readonly) NSBundle * serviceBundle; 
+(id)remoteServiceForTypeIdentifier:(id)arg1 ;
+(id)remoteServices;
+(id)_cachedServices;
+(id)_cachedServiceWithType:(id)arg1 ;
+(char)supportsSecureCoding;
-(void)addExtraParameters:(id)arg1 forRequest:(id)arg2 ;
-(int)authenticationStyle;
-(char)isFirstClassService;
-(int)maximumURLCount;
-(int)maximumImageCount;
-(int)maximumImageDataSize;
-(int)maximumVideoCount;
-(int)maximumVideoDataSize;
-(int)maximumVideoTimeLimit;
-(char)supportsImageURL:(id)arg1 ;
-(char)supportsVideoURL:(id)arg1 ;
-(id)composeViewController;
-(NSBundle *)serviceBundle;
-(char)infoDictHasRequiredKeys:(id)arg1 ;
-(void)setServiceBundleURL:(NSURL *)arg1 ;
-(void)setServiceTypeIdentifier:(NSString *)arg1 ;
-(void)setLocalizedServiceName:(NSString *)arg1 ;
-(void)setActivityViewIconResourceName:(NSString *)arg1 ;
-(void)setServiceRegionTargetIsChina:(char)arg1 ;
-(void)setAccountTypeIdentifier:(NSString *)arg1 ;
-(int)_authenticationStyleFromAuthenticationStyleIdentifier:(id)arg1 ;
-(void)setAuthenticationStyle:(int)arg1 ;
-(void)setAddDeviceClassToRequest:(char)arg1 ;
-(id)_setFromArrayWithKey:(id)arg1 inDictionary:(id)arg2 ;
-(void)setSupportedImageAssetURLSchemes:(NSSet *)arg1 ;
-(void)setSupportedVideoAssetURLSchemes:(NSSet *)arg1 ;
-(void)setActivityImageName:(NSString *)arg1 ;
-(id)integerPropertyKeyMappings;
-(id)_requiredInfoDictKeys;
-(char)_isValidAuthenicationStyleIdentifier:(id)arg1 ;
-(id)_authenticationStyleIdentifierMappings;
-(NSString *)serviceTypeIdentifier;
-(NSURL *)serviceBundleURL;
-(char)serviceRegionTargetIsChina;
-(char)addDeviceClassToRequest;
-(NSSet *)supportedImageAssetURLSchemes;
-(NSSet *)supportedVideoAssetURLSchemes;
-(id)_encodableStringProperties;
-(char)_isSupportedURL:(id)arg1 withSupportedSchemes:(id)arg2 ;
-(NSString *)activityImageName;
-(id)_activityImageForImageResourceName:(id)arg1 inBundle:(id)arg2 ;
-(NSString *)localizedServiceName;
-(id)initWithServiceBundle:(id)arg1 socialInfoDictionary:(id)arg2 ;
-(void)setMaximumVideoCount:(int)arg1 ;
-(NSString *)activityViewIconResourceName;
-(void)setMaximumURLCount:(int)arg1 ;
-(void)setMaximumImageCount:(int)arg1 ;
-(void)setMaximumImageDataSize:(int)arg1 ;
-(void)setMaximumVideoDataSize:(int)arg1 ;
-(void)setMaximumVideoTimeLimit:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)activityTitle;
-(id)activityImage;
-(id)serviceType;
-(NSString *)accountTypeIdentifier;
@end

