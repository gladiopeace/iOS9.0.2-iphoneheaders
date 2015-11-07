/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/FTFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSNumber;

@interface FTCancelMessage : FTFaceTimeMessage <NSCopying> {

	NSArray* _peers;
	NSNumber* _reason;

}

@property (copy) NSArray * peers;                //@synthesize peers=_peers - In the implementation block
@property (copy) NSNumber * reason;              //@synthesize reason=_reason - In the implementation block
-(void)setReason:(NSNumber *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)reason;
-(id)bagKey;
-(id)requiredKeys;
-(id)messageBody;
-(void)setPeers:(NSArray *)arg1 ;
-(NSArray *)peers;
@end

