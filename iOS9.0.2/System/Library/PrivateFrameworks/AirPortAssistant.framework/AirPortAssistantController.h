/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface AirPortAssistantController : NSObject {

	id _delegate;
	id _viewController;
	id _context;
	NSString* _configuredSSID;
	NSDictionary* _unconfiguredWACDevices;

}

@property (assign,nonatomic) id<AirPortAssistantControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) id context;                                                             //@synthesize context=_context - In the implementation block
@property (retain) id viewController;                                                      //@synthesize viewController=_viewController - In the implementation block
@property (retain) NSString * configuredSSID;                                              //@synthesize configuredSSID=_configuredSSID - In the implementation block
@property (retain) NSDictionary * unconfiguredWACDevices;                                  //@synthesize unconfiguredWACDevices=_unconfiguredWACDevices - In the implementation block
+(id)sharedInstance;
+(void)downloadAssetsCancel;
+(void)downloadAssetsIfNeeded;
+(char)launchAUForNetwork:(id)arg1 withMacAddress:(id)arg2 getAUFromAppStore:(char)arg3 viewController:(id)arg4 ;
+(id)assistantUIViewControllerWithParameters:(id)arg1 ;
+(void)cancelAirPortAssistantController;
+(char)isAirPlayDevice:(id)arg1 ;
+(char)isSTAOnlyDevice:(id)arg1 ;
+(char)isGenericMFiAccessory:(id)arg1 ;
+(char)isUnconfiguredDevice:(id)arg1 ;
+(id)unconfiguredDeviceName:(id)arg1 ;
+(id)uniqueBaseStationName:(id)arg1 withBssid:(id)arg2 ;
+(char)launchAUForNetwork:(id)arg1 withMacAddress:(id)arg2 getAUFromAppStore:(char)arg3 ;
-(void)setDelegate:(id<AirPortAssistantControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<AirPortAssistantControllerDelegate>)delegate;
-(id)context;
-(void)setViewController:(id)arg1 ;
-(id)viewController;
-(void)setContext:(id)arg1 ;
-(void)wirelessScanDone:(id)arg1 ;
-(void)assistantCompleteWithResult:(long)arg1 ;
-(void)setConfiguredSSID:(NSString *)arg1 ;
-(void)updateWACListeners;
-(id)WACDeviceFromScanInfo:(id)arg1 ;
-(void)setUnconfiguredWACDevices:(NSDictionary *)arg1 ;
-(NSDictionary *)unconfiguredWACDevices;
-(long)start2_4WiFiScan;
-(void)stop2_4WiFiScan;
-(long)configureUIViewControllerWithParameters:(id)arg1 ;
-(NSString *)configuredSSID;
@end

