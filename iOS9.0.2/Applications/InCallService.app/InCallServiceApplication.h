/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIApplication.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class TUCall, NSString;

@interface InCallServiceApplication : UIApplication <NSURLConnectionDataDelegate> {

	TUCall* _mostRecentlyDisconnectedCall;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TUCall * mostRecentlyDisconnectedCall;              //@synthesize mostRecentlyDisconnectedCall=_mostRecentlyDisconnectedCall - In the implementation block
+(char)shouldBackgroundMainThreadOnSuspendedLaunch;
-(void)callStatusChangedNotification:(id)arg1 ;
-(void)activateRemoteAlertsForCall:(id)arg1 withURL:(id)arg2 ;
-(void)setMostRecentlyDisconnectedCall:(TUCall *)arg1 ;
-(void)postDialRequestFailureNotification;
-(TUCall *)mostRecentlyDisconnectedCall;
-(void)handleShowInCallUIURL:(id)arg1 ;
-(void)handleDialRequestURL:(id)arg1 ;
-(void)configureTTYIfNecessaryForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)initiateCallForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)shouldSuppressShowingAlertForCall:(id)arg1 ;
-(id)remoteAlertOptionsForCall:(id)arg1 url:(id)arg2 ;
-(id)remoteStarkAlertOptions;
-(char)runOutgoingCallTestWithOptions:(id)arg1 ;
-(char)runIncomingCallTestWithOptions:(id)arg1 ;
-(char)runEndCallTestWithOptions:(id)arg1 ;
-(char)runSwapCameraTestWithOptions:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationOpenURL:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(char)runTest:(id)arg1 options:(id)arg2 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
@end

