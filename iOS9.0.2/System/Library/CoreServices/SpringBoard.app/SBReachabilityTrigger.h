/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBUIBiometricEventObserver.h>

@protocol SBReachabilityTriggerDelegate;
@class NSString;

@interface SBReachabilityTrigger : NSObject <SBUIBiometricEventObserver> {

	char _enabled;
	char _debouncedHome;
	char _debounced;
	unsigned _numberOfTaps;
	unsigned _currentNumberOfTaps;
	unsigned _expirationGenCount;
	unsigned _debounceGenCount;
	id<SBReachabilityTriggerDelegate> _delegate;

}

@property (nonatomic,readonly) id<SBReachabilityTriggerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned numberOfTaps;                                     //@synthesize numberOfTaps=_numberOfTaps - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleHomeButtonPress;
-(void)_debounce;
-(void)_setExpirationTimer;
-(unsigned)numberOfTaps;
-(void)setNumberOfTaps:(unsigned)arg1 ;
-(id<SBReachabilityTriggerDelegate>)delegate;
-(void)setEnabled:(char)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned)arg2 ;
@end

