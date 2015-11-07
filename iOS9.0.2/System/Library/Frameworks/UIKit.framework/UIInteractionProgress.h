/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSPointerArray;

@interface UIInteractionProgress : NSObject {

	NSPointerArray* _observers;
	float _previousPercentComplete;
	double _previousUpdateTime;
	double _mostRecentUpdateTime;
	int _atLeastTwoUpdates;
	float _percentComplete;

}

@property (nonatomic,readonly) float percentComplete;              //@synthesize percentComplete=_percentComplete - In the implementation block
@property (nonatomic,readonly) float velocity; 
-(id)init;
-(id)description;
-(float)percentComplete;
-(float)velocity;
-(void)addProgressObserver:(id)arg1 ;
-(void)endInteraction:(char)arg1 ;
-(unsigned)_indexOfObserver:(id)arg1 ;
-(void)setPercentComplete:(float)arg1 ;
-(void)endInteraction:(char)arg1 finalVelocity:(float)arg2 ;
-(void)removeProgressObserver:(id)arg1 ;
@end

