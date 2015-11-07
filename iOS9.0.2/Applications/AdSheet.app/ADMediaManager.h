/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ADMediaManager : NSObject {

	id _activeOwner;
	id _passiveOwner;
	int _activeBoundPID;
	int _passiveBoundPID;

}

@property (assign,nonatomic) int activeBoundPID;                  //@synthesize activeBoundPID=_activeBoundPID - In the implementation block
@property (assign,nonatomic,__weak) id activeOwner; 
@property (assign,nonatomic) int passiveBoundPID;                 //@synthesize passiveBoundPID=_passiveBoundPID - In the implementation block
@property (assign,nonatomic,__weak) id passiveOwner; 
+(id)sharedManager;
-(void)cancelPassiveMediaPlaybackForOwner:(id)arg1 ;
-(void)requestPassiveMediaPlaybackForPID:(int)arg1 owner:(id)arg2 ;
-(void)setActiveOwner:(id)arg1 ;
-(void)setActiveBoundPID:(int)arg1 ;
-(void)_updatePIDBinding;
-(id)activeOwner;
-(void)setPassiveOwner:(id)arg1 ;
-(void)setPassiveBoundPID:(int)arg1 ;
-(id)passiveOwner;
-(int)activeBoundPID;
-(int)passiveBoundPID;
-(void)requestActiveMediaPlaybackForPID:(int)arg1 owner:(id)arg2 ;
-(void)cancelActiveMediaPlaybackForOwner:(id)arg1 ;
@end

