/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FBApplicationUpdateScenesTransaction.h>

@protocol UIApplicationSceneClientSettings;
@class SBWorkspaceApplication, SBWorkspaceApplicationTransitionContext, FBSDisplay, NSString, UIMutableApplicationSceneSettings, UIApplicationSceneTransitionContext, FBSSceneClientSettings;

@interface SBApplicationSceneUpdateTransaction : FBApplicationUpdateScenesTransaction {

	SBWorkspaceApplication* _appContext;
	SBWorkspaceApplicationTransitionContext* _transitionContext;
	FBSDisplay* _display;
	NSString* _sceneIdentifier;
	UIMutableApplicationSceneSettings* _settings;
	UIApplicationSceneTransitionContext* _sceneTransitionContext;
	FBSSceneClientSettings*<UIApplicationSceneClientSettings> _clientSettings;
	char _suspendedActivation;
	char _shouldSendActivationResult;

}

@property (nonatomic,retain,readonly) SBWorkspaceApplication * application;                           //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,retain,readonly) NSString * sceneIdentifier;                                     //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (nonatomic,retain,readonly) UIMutableApplicationSceneSettings * sceneSettings;              //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) char shouldSendActivationResult;                                         //@synthesize shouldSendActivationResult=_shouldSendActivationResult - In the implementation block
-(id)initWithApplication:(id)arg1 transitionRequest:(id)arg2 ;
-(void)setShouldSendActivationResult:(char)arg1 ;
-(void)_sendActivationResultWithSuccess:(char)arg1 ;
-(char)shouldSendActivationResult;
-(void)dealloc;
-(void)_didComplete;
-(void)_performSynchronizedCommit:(id)arg1 ;
-(id)_customizedDescriptionProperties;
-(UIMutableApplicationSceneSettings *)sceneSettings;
-(NSString *)sceneIdentifier;
-(SBWorkspaceApplication *)application;
@end

