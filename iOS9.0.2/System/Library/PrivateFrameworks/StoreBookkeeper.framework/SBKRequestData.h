/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBKTransaction;

@interface SBKRequestData : NSObject {

	SBKTransaction* _transaction;

}

@property (retain) SBKTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
+(id)propertyListBodyWithTransaction:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 ;
-(SBKTransaction *)transaction;
-(void)setTransaction:(SBKTransaction *)arg1 ;
-(id)serializableRequestBodyPropertyList;
@end

