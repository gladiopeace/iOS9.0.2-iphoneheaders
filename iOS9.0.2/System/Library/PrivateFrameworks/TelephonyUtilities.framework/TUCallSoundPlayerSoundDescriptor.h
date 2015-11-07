/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TUCallSoundPlayerSoundDescriptor : NSObject {

	id _sound;
	unsigned _iterations;
	double _pauseDuration;

}

@property (nonatomic,retain) id sound;                          //@synthesize sound=_sound - In the implementation block
@property (assign,nonatomic) unsigned iterations;               //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) double pauseDuration;              //@synthesize pauseDuration=_pauseDuration - In the implementation block
-(id)description;
-(unsigned)iterations;
-(void)setIterations:(unsigned)arg1 ;
-(id)sound;
-(void)setSound:(id)arg1 ;
-(void)setPauseDuration:(double)arg1 ;
-(double)pauseDuration;
-(id)initWithSound:(id)arg1 iterations:(unsigned)arg2 pauseDuration:(double)arg3 ;
@end

