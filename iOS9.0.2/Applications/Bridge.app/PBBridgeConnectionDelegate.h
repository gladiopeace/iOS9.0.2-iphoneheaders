/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PBBridgeConnectionDelegate <NSObject>
@optional
-(void)connectionDidBecomeActive;
-(void)connectionDidBecomeInactive;
-(void)showTermsConfirmation;
-(void)setCrownOrientationRight:(char)arg1;
-(char)checkBrickedState;
-(void)remoteDidFailActivation:(id)arg1;
-(void)pushControllerType:(unsigned)arg1 withIntendedFireTime:(double)arg2;
-(void)popToControllerType:(unsigned)arg1 withIntendedFireTime:(double)arg2;
-(void)showLockedOnAnimation;
-(void)setSyncProgress:(float)arg1 andState:(int)arg2;
-(void)prepareForInitialSync;
-(void)didHandlePerformanceResults;
-(void)remoteDidFailActivation:(id)arg1 userActionable:(char)arg2;

@required
-(id)navigationController;
-(void)remoteDidBecomeAvailable;
-(void)transportBecameReachable;
-(void)transportBecameUnreachable;

@end

