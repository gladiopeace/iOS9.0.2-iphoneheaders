/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ADSOptInConnection_RPC.h>

@class NSXPCListener, NSMutableArray, NSString;

@interface ADSOptInConnectionManager : NSObject <NSXPCListenerDelegate, ADSOptInConnection_RPC> {

	char _refreshInFlight;
	NSXPCListener* _xpcListener;
	NSMutableArray* _refreshCompletionHandlers;

}

@property (nonatomic,retain) NSXPCListener * xpcListener;                             //@synthesize xpcListener=_xpcListener - In the implementation block
@property (assign,nonatomic) char refreshInFlight;                                    //@synthesize refreshInFlight=_refreshInFlight - In the implementation block
@property (nonatomic,retain) NSMutableArray * refreshCompletionHandlers;              //@synthesize refreshCompletionHandlers=_refreshCompletionHandlers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)limitAdTrackingRestrictionEnabled;
+(void)startOptInConnection;
-(void)scheduleBTAJobAtTimeIntervalFromNow:(double)arg1 forceReschedule:(char)arg2 ;
-(NSMutableArray *)refreshCompletionHandlers;
-(char)refreshInFlight;
-(void)setRefreshInFlight:(char)arg1 ;
-(void)_callRefreshCompletionHandlersWithStatus:(int)arg1 ;
-(void)_refreshWeakTokenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setRefreshCompletionHandlers:(NSMutableArray *)arg1 ;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)refreshOptInStatus;
-(void)handleAccountChange;
-(void)getiAdIDsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSXPCListener *)xpcListener;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(void)refreshOptInStatusRefreshingWeakToken:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setOptInStatus:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

