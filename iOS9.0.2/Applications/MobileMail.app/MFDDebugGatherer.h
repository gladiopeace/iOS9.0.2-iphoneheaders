/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailServices/MSDebugGatherer.h>
#import <libobjc.A.dylib/MSDDebugGathererProtocol.h>

@class MFXPCClient, NSString;

@interface MFDDebugGatherer : MSDebugGatherer <MSDDebugGathererProtocol> {

	MFXPCClient* _client;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)endpointInfo;
-(id)_rawSourceForCurrentEmail;
-(id)_diagnosticsDump;
-(void)dealloc;
-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithRemoteObjectInterface:(id)arg1 ;
-(id)newConnectionForInterface:(id)arg1 ;
-(void)gatherDebugDiagnostics:(unsigned)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithClient:(id)arg1 ;
@end

