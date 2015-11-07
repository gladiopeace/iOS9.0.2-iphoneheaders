/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/HomeUIService.app/HomeUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/HMHomeManagerDelegate.h>
#import <libobjc.A.dylib/HMHomeDelegate.h>
#import <HomeUIService/HSSetupStepDelegate.h>
#import <libobjc.A.dylib/HMSetupRemoteService.h>

@protocol HSSetupStep;
@class HMHomeManager, NSUUID, HMHome, HMSetupAccessoryDescription, NSString;

@interface HSSetupViewController : UINavigationController <HMHomeManagerDelegate, HMHomeDelegate, HSSetupStepDelegate, HMSetupRemoteService> {

	char _didNotifyFinishLoading;
	char _disconnected;
	char _cancelled;
	char _backgrounding;
	HMHomeManager* _homeManager;
	NSUUID* _homeUUID;
	HMHome* _home;
	HMSetupAccessoryDescription* _accessoryDescription;
	id<HSSetupStep> _currentStep;

}

@property (nonatomic,retain) HMHomeManager * homeManager;                                     //@synthesize homeManager=_homeManager - In the implementation block
@property (assign,nonatomic) char didNotifyFinishLoading;                                     //@synthesize didNotifyFinishLoading=_didNotifyFinishLoading - In the implementation block
@property (assign,getter=isDisconnected,nonatomic) char disconnected;                         //@synthesize disconnected=_disconnected - In the implementation block
@property (assign,getter=isCancelled,nonatomic) char cancelled;                               //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,getter=isBackgrounding,nonatomic) char backgrounding;                       //@synthesize backgrounding=_backgrounding - In the implementation block
@property (nonatomic,retain) NSUUID * homeUUID;                                               //@synthesize homeUUID=_homeUUID - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                   //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMSetupAccessoryDescription * accessoryDescription;              //@synthesize accessoryDescription=_accessoryDescription - In the implementation block
@property (assign,nonatomic,__weak) id<HSSetupStep> currentStep;                              //@synthesize currentStep=_currentStep - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)setupStepDidChange:(id)arg1 ;
-(void)setupStepDidCancel:(id)arg1 ;
-(void)setupStep:(id)arg1 didProvideSetupCode:(id)arg2 ;
-(void)setupStepDidFinish:(id)arg1 ;
-(id)accessoryDescriptionForSetupStep:(id)arg1 ;
-(void)_notifyRemoteReadyToDisplayIfNeeded;
-(char)didNotifyFinishLoading;
-(void)setDidNotifyFinishLoading:(char)arg1 ;
-(void)_updateHomeFromUUID;
-(void)setBackgrounding:(char)arg1 ;
-(void)setCurrentStep:(id<HSSetupStep>)arg1 ;
-(void)setupStep:(id)arg1 didFailWithError:(id)arg2 ;
-(char)_validateSetupStateForStep:(id)arg1 ;
-(char)isBackgrounding;
-(void)setHomeUUID:(id)arg1 accessoryDescription:(id)arg2 ;
-(void)setupFailedWithError:(id)arg1 ;
-(void)setupInterruptedWithError:(id)arg1 ;
-(void)setAccessoryDescription:(HMSetupAccessoryDescription *)arg1 ;
-(void)setDisconnected:(char)arg1 ;
-(HMSetupAccessoryDescription *)accessoryDescription;
-(char)isDisconnected;
-(void)home:(id)arg1 didAddAccessory:(id)arg2 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(id)init;
-(char)isCancelled;
-(void)setCancelled:(char)arg1 ;
-(void)viewDidLoad;
-(id<HSSetupStep>)currentStep;
-(HMHomeManager *)homeManager;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(NSUUID *)homeUUID;
-(void)setHomeUUID:(NSUUID *)arg1 ;
@end

