/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TRPacketEvent.h>

@class NSArray;

@interface TRResendPacketEvent : TRPacketEvent {

	NSArray* _resendPacketEventClasses;

}

@property (nonatomic,readonly) NSArray * resendPacketEventClasses;              //@synthesize resendPacketEventClasses=_resendPacketEventClasses - In the implementation block
+(unsigned)_packetEventType;
-(id)description;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initWithResendPacketEventClasses:(id)arg1 ;
-(NSArray *)resendPacketEventClasses;
@end

