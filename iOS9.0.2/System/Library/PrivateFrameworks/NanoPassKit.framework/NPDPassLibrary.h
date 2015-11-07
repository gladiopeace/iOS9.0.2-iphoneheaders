/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PDXPCServiceExportedInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NPKPassLibraryFilter, NSObject, NSString;

@interface NPDPassLibrary : NSObject <PDXPCServiceExportedInterface> {

	char _serviceActive;
	NSXPCConnection* _connection;
	NPKPassLibraryFilter* _filter;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (retain) NPKPassLibraryFilter * filter;                   //@synthesize filter=_filter - In the implementation block
@property (assign) char serviceActive;                              //@synthesize serviceActive=_serviceActive - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setServiceActive:(char)arg1 ;
-(NPKPassLibraryFilter *)filter;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFilter:(NPKPassLibraryFilter *)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(char)serviceActive;
-(void)broadcastPassAdded:(id)arg1 ;
-(void)broadcastPassUpdated:(id)arg1 ;
-(void)broadcastPassRemoved:(id)arg1 ;
-(void)serviceResumed;
-(void)serviceSuspended;
@end

