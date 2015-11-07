/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol TKSmartCardUserInteractionDelegate;
@interface TKSmartCardUserInteraction : NSObject <NSSecureCoding> {

	id<TKSmartCardUserInteractionDelegate> _delegate;
	double _initialTimeout;
	double _interactionTimeout;

}

@property (__weak) id<TKSmartCardUserInteractionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) double initialTimeout;                                        //@synthesize initialTimeout=_initialTimeout - In the implementation block
@property (assign) double interactionTimeout;                                    //@synthesize interactionTimeout=_interactionTimeout - In the implementation block
+(char)supportsSecureCoding;
-(char)cancel;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<TKSmartCardUserInteractionDelegate>)arg1 ;
-(id)init;
-(id<TKSmartCardUserInteractionDelegate>)delegate;
-(void)runWithReply:(/*^block*/id)arg1 ;
-(double)initialTimeout;
-(void)setInitialTimeout:(double)arg1 ;
-(double)interactionTimeout;
-(void)setInteractionTimeout:(double)arg1 ;
@end

