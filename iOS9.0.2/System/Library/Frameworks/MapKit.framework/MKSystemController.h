/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@interface MKSystemController : NSObject
+(id)sharedInstance;
-(char)supportsPitchAPI;
-(char)isHiDPI;
-(char)isPhone6PlusOrLarger;
-(char)isWifiEnabled;
-(char)reduceMotionEnabled;
-(char)supports3DImagery;
-(char)overrideBlurStyle;
-(char)supports3DMaps;
-(char)isDevicePluggedIn;
-(char)requiresRTT;
-(char)openURL:(id)arg1 bundleIdentifier:(id)arg2 ;
-(int)userInterfaceIdiom;
-(char)openURL:(id)arg1 ;
-(float)screenScale;
-(char)isInternalInstall;
-(CGSize)screenSize;
@end

