/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <callservicesd/IDSSessionDelegatePrivate.h>

@protocol CSDIDSSessionDelegate;
@class IDSSession, IDSDevice, NSNumber, NSMutableSet, NSMutableArray, NSString;

@interface CSDIDSSession : NSObject <IDSSessionDelegatePrivate> {

	char _initiator;
	char _didConnect;
	id<CSDIDSSessionDelegate> _delegate;
	IDSSession* _session;
	IDSDevice* _remoteDevice;
	int _state;
	NSNumber* _remoteProtocolVersionNumber;
	NSMutableSet* _identifiers;
	NSMutableArray* _pendingData;
	NSMutableArray* _blocksPendingSocketAvailability;

}

@property (assign,nonatomic,__weak) id<CSDIDSSessionDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IDSSession * session;                                          //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) IDSDevice * remoteDevice;                                      //@synthesize remoteDevice=_remoteDevice - In the implementation block
@property (nonatomic,readonly) int remoteProtocolVersion; 
@property (assign,nonatomic) int state;                                                     //@synthesize state=_state - In the implementation block
@property (assign,getter=isInitiator,nonatomic) char initiator;                             //@synthesize initiator=_initiator - In the implementation block
@property (assign,nonatomic) char didConnect;                                               //@synthesize didConnect=_didConnect - In the implementation block
@property (assign,nonatomic) NSNumber * remoteProtocolVersionNumber;                        //@synthesize remoteProtocolVersionNumber=_remoteProtocolVersionNumber - In the implementation block
@property (nonatomic,retain) NSMutableSet * identifiers;                                    //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingData;                                  //@synthesize pendingData=_pendingData - In the implementation block
@property (nonatomic,retain) NSMutableArray * blocksPendingSocketAvailability;              //@synthesize blocksPendingSocketAvailability=_blocksPendingSocketAvailability - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initAsInitiatorWithSession:(id)arg1 ;
-(void)sendDataAndSendInvitationIfNecessary:(id)arg1 completion:(/*^block*/id)arg2 declineOnError:(char)arg3 ;
-(void)sendDataAndAcceptInvitationIfNecessary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendDataAndDeclineInvitationIfNecessary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendData:(id)arg1 waitUntilConnected:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBlocksPendingSocketAvailability:(NSMutableArray *)arg1 ;
-(id)initAsInitiatorWithSession:(id)arg1 identifiers:(id)arg2 ;
-(id)initWithSession:(id)arg1 identifiers:(id)arg2 ;
-(id)initAsReceiverWithSession:(id)arg1 identifiers:(id)arg2 initiatingDevice:(id)arg3 initiatingProtocolVersion:(int)arg4 ;
-(void)setRemoteDevice:(IDSDevice *)arg1 ;
-(void)setRemoteProtocolVersionNumber:(NSNumber *)arg1 ;
-(NSNumber *)remoteProtocolVersionNumber;
-(void)runBlocksPendingSocketAvailability:(char)arg1 ;
-(id)allIdentifiers;
-(NSMutableArray *)blocksPendingSocketAvailability;
-(void)performBlockOnSocketAvailability:(/*^block*/id)arg1 ;
-(void)pendData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDidConnect:(char)arg1 ;
-(void)sendPendingData;
-(id)initAsReceiverWithSession:(id)arg1 initiatingProtocolVersion:(int)arg2 ;
-(int)remoteProtocolVersion;
-(void)setReceiverProtocolVersion:(int)arg1 ;
-(char)hasIdentifier:(id)arg1 ;
-(void)addIdentifier:(id)arg1 ;
-(void)addIdentifiers:(id)arg1 ;
-(void)removeIdentifiers:(id)arg1 ;
-(void)mergeSession:(id)arg1 ;
-(void)sendDataAndCancelInvitationIfNecessary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSessionWillEnd;
-(IDSDevice *)remoteDevice;
-(char)didConnect;
-(NSMutableArray *)pendingData;
-(void)setPendingData:(NSMutableArray *)arg1 ;
-(IDSSession *)session;
-(void)setDelegate:(id<CSDIDSSessionDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<CSDIDSSessionDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)endSession;
-(void)setSession:(IDSSession *)arg1 ;
-(void)sessionStarted:(id)arg1 ;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 withData:(id)arg3 ;
-(void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 ;
-(void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 withData:(id)arg3 ;
-(void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 ;
-(void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2 withData:(id)arg3 ;
-(void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2 ;
-(void)session:(id)arg1 receivedSessionMessageFromID:(id)arg2 withData:(id)arg3 ;
-(void)sessionEnded:(id)arg1 ;
-(NSMutableSet *)identifiers;
-(void)removeIdentifier:(id)arg1 ;
-(void)setIdentifiers:(NSMutableSet *)arg1 ;
-(void)setInitiator:(char)arg1 ;
-(char)isInitiator;
@end

