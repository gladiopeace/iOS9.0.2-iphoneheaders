/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSceneManagerDelegate.h>
#import <libobjc.A.dylib/FBSceneManagerObserver.h>
#import <libobjc.A.dylib/FBProcessManagerObserver.h>
#import <SpringBoard/FBWorkspaceDelegate.h>
#import <libobjc.A.dylib/FBDisplayManagerObserver.h>
#import <SpringBoard/SBSceneManagerDelegate.h>

@class FBSceneManager, NSMutableDictionary, NSString;

@interface SBSceneManagerCoordinator : NSObject <FBSceneManagerDelegate, FBSceneManagerObserver, FBProcessManagerObserver, FBWorkspaceDelegate, FBDisplayManagerObserver, SBSceneManagerDelegate> {

	FBSceneManager* _sceneManager;
	NSMutableDictionary* _displayToSceneManagers;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mainDisplaySceneManager;
+(id)sharedInstance;
-(void)sceneManager:(id)arg1 scene:(id)arg2 willTransitionToState:(unsigned)arg3 ;
-(id)_sceneManagerForDisplay:(id)arg1 creatingIfNecessary:(char)arg2 ;
-(void)removeManagerForDisplay:(id)arg1 ;
-(void)_destroySceneManagerIfNecessary:(id)arg1 ;
-(id)sceneManagerForDisplay:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5 ;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3 ;
-(void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned)arg3 ;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned)arg3 ;
-(void)workspace:(id)arg1 didReceiveCreateSceneRequestForIdentifier:(id)arg2 initialClientSettings:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)workspace:(id)arg1 didReceiveDestroySceneRequestForIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(int)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3 ;
-(id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2 ;
-(void)displayManager:(id)arg1 willConnectDisplay:(id)arg2 ;
-(void)processManager:(id)arg1 didAddProcess:(id)arg2 ;
-(void)processManager:(id)arg1 didRemoveProcess:(id)arg2 ;
@end

