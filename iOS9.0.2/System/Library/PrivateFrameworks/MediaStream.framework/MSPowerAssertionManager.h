/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MSPowerAssertionManager : NSObject {

	char _isAssertingPowerAssertion;
	char _isBusy;
	int _busyCount;
	int _UIBusyCount;
	unsigned _assertionID;

}

@property (assign,nonatomic) int busyCount;                               //@synthesize busyCount=_busyCount - In the implementation block
@property (assign,nonatomic) int UIBusyCount;                             //@synthesize UIBusyCount=_UIBusyCount - In the implementation block
@property (assign,nonatomic) char isBusy;                                 //@synthesize isBusy=_isBusy - In the implementation block
@property (assign,nonatomic) char isAssertingPowerAssertion;              //@synthesize isAssertingPowerAssertion=_isAssertingPowerAssertion - In the implementation block
@property (assign,nonatomic) unsigned assertionID;                        //@synthesize assertionID=_assertionID - In the implementation block
+(id)sharedManager;
-(char)isBusy;
-(void)retainBusy;
-(void)releaseBusy;
-(int)busyCount;
-(void)setBusyCount:(int)arg1 ;
-(void)retainUIBusy;
-(void)releaseUIBusy;
-(int)UIBusyCount;
-(void)setUIBusyCount:(int)arg1 ;
-(void)_recomputePowerAssertion;
-(char)isAssertingPowerAssertion;
-(void)setIsAssertingPowerAssertion:(char)arg1 ;
-(void)_assertPowerAssertion;
-(void)_deassertPowerAssertion;
-(void)toggleAssertion;
-(unsigned)assertionID;
-(void)setAssertionID:(unsigned)arg1 ;
-(void)setIsBusy:(char)arg1 ;
@end

