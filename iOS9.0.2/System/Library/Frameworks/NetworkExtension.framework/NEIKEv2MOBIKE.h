/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSObject.h>

@protocol OS_dispatch_source;
@class NEIKEv2PacketTunnelProvider, NSObject, NSString;

@interface NEIKEv2MOBIKE : NSObject <NSObject> {

	char _mobikeCapable;
	char _mobikeRunning;
	NEIKEv2PacketTunnelProvider* _ikev2TunnelProvider;
	NSObject*<OS_dispatch_source> _mobikeTimer;
	unsigned _mobikeRetries;

}

@property (assign) char mobikeCapable;                                             //@synthesize mobikeCapable=_mobikeCapable - In the implementation block
@property (__weak) NEIKEv2PacketTunnelProvider * ikev2TunnelProvider;              //@synthesize ikev2TunnelProvider=_ikev2TunnelProvider - In the implementation block
@property (assign) char mobikeRunning;                                             //@synthesize mobikeRunning=_mobikeRunning - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> mobikeTimer;                      //@synthesize mobikeTimer=_mobikeTimer - In the implementation block
@property (assign) unsigned mobikeRetries;                                         //@synthesize mobikeRetries=_mobikeRetries - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)ikev2MOBIKECleanup;
-(void)setMobikeCapable:(char)arg1 ;
-(id)initWithTunnelProvider:(id)arg1 ;
-(char)ikev2MOBIKESetup:(char)arg1 ifChange:(char)arg2 ;
-(char)ikev2MOBIKESkipTunnelNetworkSettingsUpdate;
-(NEIKEv2PacketTunnelProvider *)ikev2TunnelProvider;
-(void)ikev2MOBIKEStopTimer;
-(unsigned)mobikeRetries;
-(void)ikev2MOBIKEFailed;
-(NSObject*<OS_dispatch_source>)mobikeTimer;
-(void)ikev2MOBIKEReassert;
-(void)setMobikeRetries:(unsigned)arg1 ;
-(void)ikev2MOBIKEStart:(unsigned)arg1 pathStatus:(int)arg2 persist:(unsigned char)arg3 ;
-(void)setMobikeTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(char)mobikeCapable;
-(char)mobikeRunning;
-(void)setMobikeRunning:(char)arg1 ;
-(void)setIkev2TunnelProvider:(NEIKEv2PacketTunnelProvider *)arg1 ;
-(void)dealloc;
@end

