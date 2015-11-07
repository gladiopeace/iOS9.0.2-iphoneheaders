/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFMWhereIsMyCompanionConnectionProtocol.h>

@class NSXPCConnection, NSString;

@interface NFMWhereIsMyCompanionConnection : NSObject <NFMWhereIsMyCompanionConnectionProtocol> {

	NSXPCConnection* _serverConnection;
	/*^block*/id _playSoundCompletion;
	/*^block*/id _playSoundAndLEDCompletion;

}

@property (retain) NSXPCConnection * serverConnection;                //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,copy) id playSoundCompletion;                    //@synthesize playSoundCompletion=_playSoundCompletion - In the implementation block
@property (nonatomic,copy) id playSoundAndLEDCompletion;              //@synthesize playSoundAndLEDCompletion=_playSoundAndLEDCompletion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDeviceConnection;
-(id)init;
-(NSXPCConnection *)serverConnection;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(void)applicationIdentifierWithReply:(/*^block*/id)arg1 ;
-(void)playedSound:(char)arg1 ;
-(void)playedSoundAndLED:(char)arg1 ;
-(void)playSoundOnCompanionWithCompletion:(/*^block*/id)arg1 ;
-(void)playSoundAndLightsOnCompanionWithCompletion:(/*^block*/id)arg1 ;
-(id)playSoundCompletion;
-(void)setPlaySoundCompletion:(id)arg1 ;
-(id)playSoundAndLEDCompletion;
-(void)setPlaySoundAndLEDCompletion:(id)arg1 ;
@end

