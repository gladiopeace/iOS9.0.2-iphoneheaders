/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <vot/VOTRotor.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject;

@interface VOTElementRotor : VOTRotor {

	NSArray* _enabledWebRotorItems;
	NSObject*<OS_dispatch_queue> _enabledWebRotorItemsQueue;
	char _showsWebSearchResults;
	int _temporaryRotorTypeNeedingPromotion;

}

@property (assign,nonatomic) char showsWebSearchResults;              //@synthesize showsWebSearchResults=_showsWebSearchResults - In the implementation block
-(void)updateRotorForElement:(id)arg1 shouldPreserveRotorNavigation:(char)arg2 ;
-(void)setShowsWebSearchResults:(char)arg1 ;
-(char)showsWebSearchResults;
-(void)_updateWebRotorItems;
-(int)_firstNonGesturedTextInputRotorTypeWithFallback:(int)arg1 ;
-(id)_currentEnabledWebRotorItems;
-(void)_promoteGesturedTextInputRotorIfNeeded;
-(void)nanoUpdateRotorForElement:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

