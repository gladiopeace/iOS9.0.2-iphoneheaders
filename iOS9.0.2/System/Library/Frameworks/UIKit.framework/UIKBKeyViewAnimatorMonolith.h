/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKBKeyViewAnimator.h>

@class NSMutableDictionary;

@interface UIKBKeyViewAnimatorMonolith : UIKBKeyViewAnimator {

	NSMutableDictionary* _selectedKeyTimestamps;
	NSMutableDictionary* _transitionCompletions;

}
-(void)dealloc;
-(id)init;
-(void)reset;
-(char)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 ;
-(int)_transitionFromState:(int)arg1 toState:(int)arg2 ;
-(Class)keyViewClassForKey:(id)arg1 traits:(id)arg2 ;
-(unsigned)controlStateForKeyState:(int)arg1 ;
-(void)addTransitionCompletion:(/*^block*/id)arg1 forKeyName:(id)arg2 ;
-(void)transitionFloatingKeyView:(id)arg1 toState:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)animateFloatingKeyView:(id)arg1 toControlState:(unsigned)arg2 ;
-(void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(/*^block*/id)arg4 ;
@end

