/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FTServices/FTServices-Structs.h>
#import <FTServices/IDSFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSNumber;

@interface IDSRejectMessage : IDSFaceTimeMessage <NSCopying> {

	NSData* _selfPushToken;
	NSData* _peerPushToken;
	NSString* _peerID;
	NSNumber* _reason;

}

@property (copy) NSData * peerPushToken;              //@synthesize peerPushToken=_peerPushToken - In the implementation block
@property (copy) NSData * selfPushToken;              //@synthesize selfPushToken=_selfPushToken - In the implementation block
@property (copy) NSString * peerID;                   //@synthesize peerID=_peerID - In the implementation block
@property (copy) NSNumber * reason;                   //@synthesize reason=_reason - In the implementation block
-(NSString *)peerID;
-(void)setPeerID:(NSString *)arg1 ;
-(void)setReason:(NSNumber *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)reason;
-(NSData *)selfPushToken;
-(void)setSelfPushToken:(NSData *)arg1 ;
-(NSData *)peerPushToken;
-(void)setPeerPushToken:(NSData *)arg1 ;
-(id)bagKey;
-(id)requiredKeys;
-(id)messageBody;
@end

