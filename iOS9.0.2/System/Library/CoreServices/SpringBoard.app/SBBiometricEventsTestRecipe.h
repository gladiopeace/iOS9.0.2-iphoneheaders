/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBTestRecipe.h>

@class NSString;

@interface SBBiometricEventsTestRecipe : NSObject <SBTestRecipe> {

	unsigned _eventIndex;

}

@property (assign,nonatomic) unsigned eventIndex;                   //@synthesize eventIndex=_eventIndex - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)title;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)setEventIndex:(unsigned)arg1 ;
-(unsigned)eventIndex;
-(void)postEvent:(unsigned)arg1 ;
@end

