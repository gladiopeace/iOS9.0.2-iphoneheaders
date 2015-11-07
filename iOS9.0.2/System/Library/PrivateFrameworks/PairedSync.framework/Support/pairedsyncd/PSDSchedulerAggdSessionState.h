/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary;

@interface PSDSchedulerAggdSessionState : NSObject <NSCoding> {

	NSMutableDictionary* _stateDictionary;

}
-(void)noteActivityStarted:(id)arg1 ;
-(void)noteActivityCompletedSending:(id)arg1 ;
-(void)noteActivityFinished:(id)arg1 ;
-(char)hasDurationForActivity:(id)arg1 milestone:(unsigned)arg2 ;
-(double)durationForActivity:(id)arg1 milestone:(unsigned)arg2 ;
-(id)stateDictionaryForActivity:(id)arg1 ;
-(id)_keyForMilestone:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
@end

