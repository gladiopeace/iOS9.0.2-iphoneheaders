/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TUCall.h>

@protocol CSDCallDelegate;
@class TUDialRequest;

@interface CSDCall : TUCall {

	id<CSDCallDelegate> _delegate;
	TUDialRequest* _dialRequest;

}

@property (assign,nonatomic,__weak) id<CSDCallDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TUDialRequest * dialRequest;                       //@synthesize dialRequest=_dialRequest - In the implementation block
@property (nonatomic,readonly) int callStatusFromUnderlyingSource; 
@property (nonatomic,readonly) char shouldOverrideCallStatus; 
@property (nonatomic,readonly) int callStatusFromOverride; 
-(TUDialRequest *)dialRequest;
-(int)callStatusFromUnderlyingSource;
-(void)propertiesChanged;
-(void)updateForDisconnection;
-(void)setDialRequest:(TUDialRequest *)arg1 ;
-(char)shouldOverrideCallStatus;
-(int)callStatusFromOverride;
-(void)updateWithProxyCall:(id)arg1 ;
-(void)setDelegate:(id<CSDCallDelegate>)arg1 ;
-(id<CSDCallDelegate>)delegate;
-(char)isOutgoing;
-(id)destinationID;
-(int)callIdentifier;
-(char)isVoicemail;
-(char)isEmergencyCall;
-(void)dialWithRequest:(id)arg1 ;
-(void)setEndpointOnCurrentDevice:(char)arg1 ;
-(void)setWantsHoldMusic:(char)arg1 ;
-(void)setDisconnectedReason:(int)arg1 ;
-(void)setShouldSuppressRingtone:(char)arg1 ;
-(void)setTransitionStatus:(int)arg1 ;
-(void)setFaceTimeIDStatus:(int)arg1 ;
-(void)setWasDialAssisted:(char)arg1 ;
-(void)setConnecting:(char)arg1 ;
-(void)setHasSentInvitation:(char)arg1 ;
-(void)setHasUpdatedAudio:(char)arg1 ;
-(void)setHasAudioFinished:(char)arg1 ;
-(void)setSoundRegion:(int)arg1 ;
-(int)callStatus;
-(void)setConnected:(char)arg1 ;
@end

