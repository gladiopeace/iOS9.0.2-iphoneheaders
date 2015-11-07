/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AdSheet/AdSheet-Structs.h>
#import <AdSheet/ADJavaScriptObject.h>
#import <AdSheet/ADAdJSO_Bindings.h>

@protocol OS_dispatch_queue;
@class NSNumber, NSDictionary, NSString, ADCalendarJSO, ADStoreJSO, ADCameraJSO, ADBooksJSO, ADSMSComposerJSO, ADMailComposerJSO, ADContactsJSO, ADTwitterJSO, ADReminderComposerJSO, ADPassbookJSO, ADPurchaseJSO, ADRewardsJSO, ADShareSheetJSO, JSValue, NSMutableDictionary, AdSheetJSSetWallpaperRequest, NSObject;

@interface ADAdJSO : ADJavaScriptObject <ADAdJSO_Bindings> {

	char _isCoalescingShakeEvents;
	ADStoreJSO* _store;
	ADCalendarJSO* _calendar;
	ADCameraJSO* _camera;
	ADBooksJSO* _books;
	ADSMSComposerJSO* _smsComposer;
	ADMailComposerJSO* _mailComposer;
	ADContactsJSO* _contacts;
	ADTwitterJSO* _twitterComposer;
	ADReminderComposerJSO* _reminderComposer;
	ADPassbookJSO* _passbook;
	ADPurchaseJSO* _purchase;
	ADRewardsJSO* _rewards;
	ADShareSheetJSO* _shareSheet;
	unsigned _currentSupportedInterfaceOrientations;
	NSMutableDictionary* _bannerParametersDictionary;
	AdSheetJSSetWallpaperRequest* _wallpaperRequest;
	int _currentNetworkType;
	NSDictionary* _ringtoneData;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSMutableDictionary * bannerParametersDictionary;              //@synthesize bannerParametersDictionary=_bannerParametersDictionary - In the implementation block
@property (nonatomic,retain) AdSheetJSSetWallpaperRequest * wallpaperRequest;               //@synthesize wallpaperRequest=_wallpaperRequest - In the implementation block
@property (nonatomic,retain) JSValue * wallpaperRequestListener; 
@property (readonly) int currentNetworkType;                                                //@synthesize currentNetworkType=_currentNetworkType - In the implementation block
@property (assign,nonatomic) char isCoalescingShakeEvents;                                  //@synthesize isCoalescingShakeEvents=_isCoalescingShakeEvents - In the implementation block
@property (nonatomic,retain) NSDictionary * ringtoneData;                                   //@synthesize ringtoneData=_ringtoneData - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> dispatchQueue;                    //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSNumber * currentDeviceVolume; 
@property (nonatomic,readonly) CGRect bannerRectOnScreen; 
@property (nonatomic,readonly) CGPoint bannerTapLocation; 
@property (nonatomic,readonly) NSDictionary * bannerParameters; 
@property (nonatomic,readonly) NSString * bannerCustomMetadata; 
@property (nonatomic,readonly) int networkType; 
@property (assign,nonatomic) unsigned currentSupportedInterfaceOrientations;                //@synthesize currentSupportedInterfaceOrientations=_currentSupportedInterfaceOrientations - In the implementation block
@property (nonatomic,readonly) ADCalendarJSO * calendar;                                    //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) ADStoreJSO * store;                                          //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) ADCameraJSO * camera;                                        //@synthesize camera=_camera - In the implementation block
@property (nonatomic,readonly) ADBooksJSO * books;                                          //@synthesize books=_books - In the implementation block
@property (nonatomic,readonly) ADSMSComposerJSO * smsComposer;                              //@synthesize smsComposer=_smsComposer - In the implementation block
@property (nonatomic,readonly) ADMailComposerJSO * mailComposer;                            //@synthesize mailComposer=_mailComposer - In the implementation block
@property (nonatomic,readonly) ADContactsJSO * contacts;                                    //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,readonly) ADTwitterJSO * twitterComposer;                              //@synthesize twitterComposer=_twitterComposer - In the implementation block
@property (nonatomic,readonly) ADReminderComposerJSO * reminderComposer;                    //@synthesize reminderComposer=_reminderComposer - In the implementation block
@property (nonatomic,readonly) ADPassbookJSO * passbook;                                    //@synthesize passbook=_passbook - In the implementation block
@property (nonatomic,readonly) ADPurchaseJSO * purchase;                                    //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,readonly) ADRewardsJSO * rewards;                                      //@synthesize rewards=_rewards - In the implementation block
@property (nonatomic,readonly) ADShareSheetJSO * shareSheet;                                //@synthesize shareSheet=_shareSheet - In the implementation block
@property (assign,nonatomic,__weak) JSValue * listener; 
@property (assign,nonatomic,__weak) JSValue * shakeEventsListener; 
@property (assign,nonatomic,__weak) JSValue * deviceOrientationListener; 
@property (assign,nonatomic,__weak) JSValue * networkTypeListener; 
@property (assign,nonatomic,__weak) JSValue * writeImageListener; 
@property (assign,nonatomic,__weak) JSValue * deviceVolumeListener; 
@property (nonatomic,readonly) char modalActivityInProgress; 
+(void)initializeInContext:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 impressionController:(id)arg2 ;
-(void)forwardShakeEventToAd:(id)arg1 ;
-(void)registerForVolumeChanges:(id)arg1 ;
-(void)networkTypeChanged:(id)arg1 ;
-(unsigned)currentSupportedInterfaceOrientations;
-(NSString *)bannerCustomMetadata;
-(void)adWillDismiss;
-(JSValue *)shakeEventsListener;
-(JSValue *)deviceOrientationListener;
-(JSValue *)deviceVolumeListener;
-(JSValue *)networkTypeListener;
-(void)setWallpaperRequest:(AdSheetJSSetWallpaperRequest *)arg1 ;
-(AdSheetJSSetWallpaperRequest *)wallpaperRequest;
-(void)setWallpaperRequestListener:(JSValue *)arg1 ;
-(JSValue *)wallpaperRequestListener;
-(JSValue *)writeImageListener;
-(void)setWriteImageListener:(JSValue *)arg1 ;
-(void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(void)_previewImage:(id)arg1 data:(id)arg2 named:(id)arg3 previewTitle:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_finishedSavingVideo:(id)arg1 withError:(id)arg2 context:(void*)arg3 ;
-(NSDictionary *)ringtoneData;
-(void)setRingtoneData:(NSDictionary *)arg1 ;
-(char)modalActivityInProgress;
-(void)reportClickEvent:(id)arg1 ;
-(void)addRingtone:(id)arg1 ;
-(id)targetApplicationVersion;
-(char)isTargetApplicationInstalled;
-(void)setImageAsWallpaper:(id)arg1 withTitle:(id)arg2 listener:(id)arg3 ;
-(void)writeImageToSavedPhotosAlbum:(id)arg1 listener:(id)arg2 ;
-(void)writeVideoToSavedPhotosAlbum:(id)arg1 listener:(id)arg2 ;
-(void)writeDisplayedContentToSavedPhotosAlbum:(id)arg1 ;
-(void)captureVisibleContentsAsImageURLForListener:(id)arg1 readableImageData:(char)arg2 ;
-(NSNumber *)currentDeviceVolume;
-(CGRect)bannerRectOnScreen;
-(CGPoint)bannerTapLocation;
-(NSDictionary *)bannerParameters;
-(void)setCurrentSupportedInterfaceOrientations:(unsigned)arg1 ;
-(ADBooksJSO *)books;
-(ADSMSComposerJSO *)smsComposer;
-(ADMailComposerJSO *)mailComposer;
-(ADTwitterJSO *)twitterComposer;
-(ADReminderComposerJSO *)reminderComposer;
-(ADPassbookJSO *)passbook;
-(ADRewardsJSO *)rewards;
-(ADShareSheetJSO *)shareSheet;
-(void)setShakeEventsListener:(JSValue *)arg1 ;
-(void)setDeviceOrientationListener:(JSValue *)arg1 ;
-(void)setNetworkTypeListener:(JSValue *)arg1 ;
-(void)setDeviceVolumeListener:(JSValue *)arg1 ;
-(void)adWillPause;
-(void)adDidResume;
-(NSMutableDictionary *)bannerParametersDictionary;
-(void)setBannerParametersDictionary:(NSMutableDictionary *)arg1 ;
-(char)isCoalescingShakeEvents;
-(void)setIsCoalescingShakeEvents:(char)arg1 ;
-(ADContactsJSO *)contacts;
-(ADStoreJSO *)store;
-(void)wallpaperImageViewControllerDidFinishSaving:(id)arg1 ;
-(void)wallpaperImageViewControllerDidCancel:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)volumeChanged:(id)arg1 ;
-(char)canOpenURL:(id)arg1 ;
-(void)dismiss;
-(ADCalendarJSO *)calendar;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(ADCameraJSO *)camera;
-(char)locationServicesEnabled;
-(int)currentNetworkType;
-(void)orientationChanged:(id)arg1 ;
-(ADPurchaseJSO *)purchase;
-(int)networkType;
@end

