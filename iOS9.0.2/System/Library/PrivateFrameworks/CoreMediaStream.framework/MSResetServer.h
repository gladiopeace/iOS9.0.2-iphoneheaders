/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSResetServerProtocolDelegate.h>

@class NSString, MSResetServerProtocol, MSMediaStreamDaemon;

@interface MSResetServer : NSObject <MSResetServerProtocolDelegate> {

	NSString* _personID;
	MSResetServerProtocol* _protocol;
	MSMediaStreamDaemon* _daemon;
	id _selfReference;

}

@property (nonatomic,readonly) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) MSMediaStreamDaemon * daemon;              //@synthesize daemon=_daemon - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resetServerObjectWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)resetServerProtocol:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)resetServerProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2 ;
-(void)resetServer;
-(NSString *)personID;
-(MSMediaStreamDaemon *)daemon;
-(void)setDaemon:(MSMediaStreamDaemon *)arg1 ;
@end

