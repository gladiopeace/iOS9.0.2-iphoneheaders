/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBLockStateAggregator : NSObject {

	unsigned _lockState;

}
+(id)sharedInstance;
-(id)_descriptionForLockState:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(unsigned)lockState;
-(char)hasAnyLockState;
-(void)_updateLockState;
@end

