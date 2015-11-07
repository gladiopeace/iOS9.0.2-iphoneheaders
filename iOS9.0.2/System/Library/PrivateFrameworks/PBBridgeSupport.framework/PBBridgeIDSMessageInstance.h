/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNumber;

@interface PBBridgeIDSMessageInstance : NSObject {

	unsigned short _typeID;
	NSNumber* _sentAbsoluteTime;
	int _retryCount;
	/*^block*/id _retryAction;
	double _retryInterval;

}

@property (nonatomic,retain) NSNumber * sentAbsoluteTime;              //@synthesize sentAbsoluteTime=_sentAbsoluteTime - In the implementation block
@property (assign,nonatomic) unsigned short typeID;                    //@synthesize typeID=_typeID - In the implementation block
@property (assign,nonatomic) int retryCount;                           //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) double retryInterval;                     //@synthesize retryInterval=_retryInterval - In the implementation block
@property (nonatomic,copy) id retryAction;                             //@synthesize retryAction=_retryAction - In the implementation block
+(id)newMessageInstanceOfType:(unsigned short)arg1 retryCount:(int)arg2 retryInterval:(double)arg3 withAction:(/*^block*/id)arg4 ;
-(id)init;
-(id)description;
-(void)setRetryCount:(int)arg1 ;
-(int)retryCount;
-(void)setSentAbsoluteTime:(NSNumber *)arg1 ;
-(void)setTypeID:(unsigned short)arg1 ;
-(void)setRetryAction:(id)arg1 ;
-(NSNumber *)sentAbsoluteTime;
-(unsigned short)typeID;
-(id)retryAction;
-(double)retryInterval;
-(void)setRetryInterval:(double)arg1 ;
@end

