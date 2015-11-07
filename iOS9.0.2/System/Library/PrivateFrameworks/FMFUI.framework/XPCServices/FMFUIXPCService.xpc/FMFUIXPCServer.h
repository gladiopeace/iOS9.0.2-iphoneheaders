/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/XPCServices/FMFUIXPCService.xpc/FMFUIXPCService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMFUIXPCService/FMFUIXPCInterface.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSString;

@interface FMFUIXPCServer : NSObject <FMFUIXPCInterface, NSXPCListenerDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(oneway void)monogramImageForHandle:(id)arg1 height:(id)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)mapImageForFMFLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

