/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <FrontBoardServices/FBSMutableSceneSettings.h>
#import <UIKit/UIApplicationSceneSettings.h>

@class NSNumber, NSString;

@interface UIMutableApplicationSceneSettings : FBSMutableSceneSettings <UIApplicationSceneSettings>

@property (assign,nonatomic) char underLock; 
@property (assign,nonatomic) int statusBarStyleOverridesToSuppress; 
@property (assign,nonatomic) unsigned deactivationReasons; 
@property (nonatomic,retain) NSNumber * forcedStatusBarStyle; 
@property (nonatomic,retain) NSNumber * forcedStatusBarHidden; 
@property (assign,nonatomic) char deviceOrientationEventsEnabled; 
@property (assign,nonatomic) char canShowAlerts; 
@property (assign,nonatomic) char idleModeEnabled; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isUISubclass;
-(unsigned)deactivationReasons;
-(char)canShowAlerts;
-(char)underLock;
-(NSNumber *)forcedStatusBarStyle;
-(NSNumber *)forcedStatusBarHidden;
-(int)statusBarStyleOverridesToSuppress;
-(char)idleModeEnabled;
-(void)setIdleModeEnabled:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned)arg1 ;
-(void)setDeviceOrientationEventsEnabled:(char)arg1 ;
-(id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned)arg3 ;
-(char)deviceOrientationEventsEnabled;
-(void)setUnderLock:(char)arg1 ;
-(void)setStatusBarStyleOverridesToSuppress:(int)arg1 ;
-(void)setDeactivationReasons:(unsigned)arg1 ;
-(void)setForcedStatusBarStyle:(NSNumber *)arg1 ;
-(void)setForcedStatusBarHidden:(NSNumber *)arg1 ;
-(void)setCanShowAlerts:(char)arg1 ;
@end

