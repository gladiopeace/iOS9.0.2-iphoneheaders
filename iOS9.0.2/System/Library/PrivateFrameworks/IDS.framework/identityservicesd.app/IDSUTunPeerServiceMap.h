/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSMapTable;

@interface IDSUTunPeerServiceMap : NSObject {

	NSObject*<OS_dispatch_semaphore> _lock;
	unsigned char _remoteInstanceID[16];
	NSMapTable* _serviceNameToStreamIDMap;
	NSMapTable* _streamIDToServiceNameMap;
	unsigned short _nextStreamID;

}

@property (readonly) unsigned count; 
-(void)setRemoteInstanceID:(unsigned char*)arg1 ;
-(void)associateServiceName:(id)arg1 withStreamID:(unsigned short)arg2 remoteInstanceID:(unsigned char*)arg3 remoteInstanceIDChanged:(char*)arg4 ;
-(char)translateStreamID:(unsigned short)arg1 toServiceName:(id*)arg2 remoteInstanceID:(unsigned char*)arg3 remoteInstanceIDChanged:(char*)arg4 ;
-(char)translateServiceName:(id)arg1 toStreamID:(unsigned short*)arg2 createIfNotFound:(char)arg3 mappingCreated:(char*)arg4 remoteInstanceID:(unsigned char*)arg5 remoteInstanceIDChanged:(char*)arg6 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(id)description;
@end

