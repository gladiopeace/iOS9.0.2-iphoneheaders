/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <callservicesd/CSDClient.h>

@class NSString, NSArray, NSXPCConnection;

@interface CSDXPCClient : CSDClient {

	NSString* _processName;
	NSString* _processBundleIdentifier;
	NSArray* _entitlements;

}

@property (nonatomic,readonly) NSXPCConnection * connection; 
@property (nonatomic,retain) NSString * processName;                          //@synthesize processName=_processName - In the implementation block
@property (nonatomic,retain) NSString * processBundleIdentifier;              //@synthesize processBundleIdentifier=_processBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * entitlements;                          //@synthesize entitlements=_entitlements - In the implementation block
-(void)setEntitlements:(NSArray *)arg1 ;
-(void)setProcessBundleIdentifier:(NSString *)arg1 ;
-(id)objectForBlock;
-(char)isEntitledForCapability:(id)arg1 ;
-(id)valueForEntitlement:(id)arg1 ;
-(void)dealloc;
-(NSString *)processName;
-(NSXPCConnection *)connection;
-(id)propertiesDescription;
-(id)initWithConnection:(id)arg1 ;
-(NSArray *)entitlements;
-(char)isRemote;
-(NSString *)processBundleIdentifier;
-(void)setProcessName:(NSString *)arg1 ;
@end

