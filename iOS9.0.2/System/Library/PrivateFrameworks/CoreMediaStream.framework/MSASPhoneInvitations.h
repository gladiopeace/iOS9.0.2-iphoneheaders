/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class MSASStateMachine, MSASAlbum, IDSService, NSMutableDictionary, NSString;

@interface MSASPhoneInvitations : NSObject <IDSServiceDelegate> {

	MSASStateMachine* _stateMachine;
	MSASAlbum* _album;
	IDSService* _idsService;
	NSMutableDictionary* _sendMessageIdentifierToPhone;

}

@property (nonatomic,retain) MSASStateMachine * stateMachine;                                 //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) MSASAlbum * album;                                               //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) IDSService * idsService;                                         //@synthesize idsService=_idsService - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sendMessageIdentifierToPhone;              //@synthesize sendMessageIdentifierToPhone=_sendMessageIdentifierToPhone - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MSASAlbum *)album;
-(void)setAlbum:(MSASAlbum *)arg1 ;
-(id)init;
-(void)addPendingPhoneInvitations:(id)arg1 toOwnedAlbum:(id)arg2 inStateMachin:(id)arg3 ;
-(void)removeSharingRelationships:(id)arg1 forAlbum:(id)arg2 ;
-(MSASStateMachine *)stateMachine;
-(void)setStateMachine:(MSASStateMachine *)arg1 ;
-(NSMutableDictionary *)sendMessageIdentifierToPhone;
-(void)setSendMessageIdentifierToPhone:(NSMutableDictionary *)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
-(IDSService *)idsService;
-(void)setIdsService:(IDSService *)arg1 ;
@end

