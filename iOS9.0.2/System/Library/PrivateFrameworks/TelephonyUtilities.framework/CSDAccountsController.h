/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegatePrivate.h>

@protocol CSDAccountsControllerDelegate, OS_dispatch_queue;
@class NSString, NSObject, IDSService;

@interface CSDAccountsController : NSObject <IDSServiceDelegatePrivate> {

	NSString* _outgoingCallerID;
	NSObject*<CSDAccountsControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	IDSService* _faceTimeService;

}

@property (assign,nonatomic) NSObject*<CSDAccountsControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char faceTimeIDMatchesAppleID; 
@property (getter=isFaceTimeAudioAvailable,nonatomic,readonly) char faceTimeAudioAvailable; 
@property (getter=isFaceTimeVideoAvailable,nonatomic,readonly) char faceTimeVideoAvailable; 
@property (nonatomic,copy) NSString * outgoingCallerID;                                                  //@synthesize outgoingCallerID=_outgoingCallerID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) IDSService * faceTimeService;                                               //@synthesize faceTimeService=_faceTimeService - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_initializeLastKnownOutgoingCallerID;
-(void)setFaceTimeService:(IDSService *)arg1 ;
-(IDSService *)faceTimeService;
-(void)imDaemonDidConnect:(id)arg1 ;
-(id)_sharedDaemonController;
-(void)serviceAvailabilityChanged:(id)arg1 ;
-(int)_faceTimeAudioAvailability;
-(int)_faceTimeVideoAvailability;
-(char)faceTimeIDMatchesAppleID;
-(NSString *)outgoingCallerID;
-(void)_updateOutgoingCallerIDAndSendDelegateCallbacksIfNecessary;
-(void)displayNameChanged:(id)arg1 ;
-(id)_outgoingCallerIDAccount;
-(void)_saveLastKnownOutgoingCallerID;
-(void)_updateOutgoingCallerID;
-(void)setOutgoingCallerID:(NSString *)arg1 ;
-(char)isFaceTimeAudioAvailable;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(NSObject*<CSDAccountsControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)debugDescription;
-(NSObject*<CSDAccountsControllerDelegate>)delegate;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(char)isFaceTimeVideoAvailable;
@end

