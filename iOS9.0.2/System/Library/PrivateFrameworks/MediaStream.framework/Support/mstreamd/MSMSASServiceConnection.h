/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/Support/mstreamd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <mstreamd/XPCNSServiceConnectionDelegate.h>

@class NSMutableDictionary, NSString;

@interface MSMSASServiceConnection : NSObject <XPCNSServiceConnectionDelegate> {

	NSMutableDictionary* _foregroundPingTimerByPersonID;
	NSMutableDictionary* _XPCForegroundRequestByPersonID;

}

@property (nonatomic,retain) NSMutableDictionary * foregroundPingTimerByPersonID;               //@synthesize foregroundPingTimerByPersonID=_foregroundPingTimerByPersonID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * XPCForegroundRequestByPersonID;              //@synthesize XPCForegroundRequestByPersonID=_XPCForegroundRequestByPersonID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableDictionary *)foregroundPingTimerByPersonID;
-(void)_foregroundPingTimerDidExpire:(id)arg1 ;
-(NSMutableDictionary *)XPCForegroundRequestByPersonID;
-(void)_handleForegroundPing:(id)arg1 request:(id)arg2 ;
-(void)_handleFocusAlbum:(id)arg1 ;
-(void)setForegroundPingTimerByPersonID:(NSMutableDictionary *)arg1 ;
-(void)setXPCForegroundRequestByPersonID:(NSMutableDictionary *)arg1 ;
-(id)workQueue;
-(void)XPCNSServiceConnection:(id)arg1 didReceiveRequest:(id)arg2 sequenceNumber:(unsigned)arg3 ;
-(void)XPCNSServiceConnectionDidDisconnect:(id)arg1 ;
@end

