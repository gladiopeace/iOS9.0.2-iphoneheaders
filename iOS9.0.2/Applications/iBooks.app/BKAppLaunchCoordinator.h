/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKAppLaunchCoordinating.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSMutableArray, NSString;

@interface BKAppLaunchCoordinator : NSObject <BKAppLaunchCoordinating> {

	unsigned _holdAtLaunchScreenCount;
	char _hasLaunched;
	char _hasEnteredGroup;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;
	NSMutableArray* _launchBlocks;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) NSMutableArray * launchBlocks;                     //@synthesize launchBlocks=_launchBlocks - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)appLaunchCoordinatorHoldAtLaunchScreenAssertion;
-(void)appLaunchCoordinatorPerformBlockWhenLaunched:(/*^block*/id)arg1 ;
-(char)appLaunchCoordinatorHasAppLaunched;
-(NSMutableArray *)launchBlocks;
-(void)setLaunchBlocks:(NSMutableArray *)arg1 ;
-(void)waitForReadyToLeaveLaunchScreenWithTimeout:(double)arg1 run:(/*^block*/id)arg2 ;
-(void)completedLaunchTransition;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)init;
-(NSObject*<OS_dispatch_group>)group;
@end

