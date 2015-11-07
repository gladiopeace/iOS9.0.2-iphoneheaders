/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBSDisplay, NSString;

@interface FBUIApplicationSceneDeactivationAssertion : NSObject <BSDescriptionProviding> {

	FBSDisplay* _display;
	float _sceneLevel;
	int _reason;
	/*^block*/id _predicate;
	char _acquired;

}

@property (nonatomic,readonly) float sceneLevel;                             //@synthesize sceneLevel=_sceneLevel - In the implementation block
@property (nonatomic,readonly) int reason;                                   //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy,readonly) id predicate;                            //@synthesize predicate=_predicate - In the implementation block
@property (getter=isAcquired,nonatomic,readonly) char acquired;              //@synthesize acquired=_acquired - In the implementation block
@property (nonatomic,retain,readonly) FBSDisplay * display;                  //@synthesize display=_display - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(FBSDisplay *)display;
-(id)predicate;
-(int)reason;
-(void)acquire;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(float)sceneLevel;
-(id)initWithReason:(int)arg1 sceneLevel:(float)arg2 ;
-(id)_initWithReason:(int)arg1 sceneLevel:(float)arg2 forDisplay:(id)arg3 ;
-(void)relinquish;
-(void)acquireWithTransitionContext:(id)arg1 ;
-(void)acquireWithPredicate:(/*^block*/id)arg1 transitionContext:(id)arg2 ;
-(void)acquireWithPredicate:(/*^block*/id)arg1 ;
-(char)isAcquired;
-(id)initWithReason:(int)arg1 ;
@end

