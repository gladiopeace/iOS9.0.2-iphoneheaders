/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/_GCExtendedGamepad.h>
#import <libobjc.A.dylib/_GCSnapshot.h>

@class NSData, GCMotion, NSString;

@interface _GCExtendedGamepadSnapshot : _GCExtendedGamepad <_GCSnapshot> {

	NSData* _snapshotData;
	GCMotion* _motion;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSData * snapshotData;                   //@synthesize snapshotData=_snapshotData - In the implementation block
-(id)motion;
-(void)setSnapshotData:(NSData *)arg1 ;
-(id)initWithController:(id)arg1 snapshotData:(id)arg2 ;
-(void)set_motion:(id)arg1 ;
-(NSData *)snapshotData;
-(id)initWithSnapshotData:(id)arg1 ;
-(id)init;
@end

