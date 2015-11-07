/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSceneClientProvider.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue;
@class NSString, FBSSerialQueue, NSObject, NSMutableDictionary, FBSceneClientProviderInvalidationAction, NSSet;

@interface SBUIWorkspace : NSObject <FBSceneClientProvider, BSDescriptionProviding> {

	char _valid;
	NSString* _identifier;
	FBSSerialQueue* _clientQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _scenes;
	FBSceneClientProviderInvalidationAction* _invalidationAction;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * scenes; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)endTransaction;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(NSString *)identifier;
-(NSSet *)scenes;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)sceneWithIdentifier:(id)arg1 ;
-(void)registerInvalidationAction:(id)arg1 ;
-(id)registerHost:(id)arg1 ;
-(void)unregisterHost:(id)arg1 ;
-(void)_queue_invalidate;
-(void)_performSynchronouslyOnMainThread:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 ;
-(id)createSceneWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 ;
-(void)destroyScene:(id)arg1 ;
-(void)beginTransaction;
@end

