/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface Transaction : NSObject <NSSecureCoding> {

	unsigned _transactionType;
	NSData* _record;

}

@property (assign) unsigned transactionType;              //@synthesize transactionType=_transactionType - In the implementation block
@property (retain) NSData * record;                       //@synthesize record=_record - In the implementation block
+(char)supportsSecureCoding;
+(id)toString:(unsigned)arg1 ;
-(NSData *)record;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithType:(unsigned)arg1 andRecord:(id)arg2 ;
-(id)initWithString:(id)arg1 andRecord:(id)arg2 ;
-(void)setRecord:(NSData *)arg1 ;
-(void)setTransactionType:(unsigned)arg1 ;
-(unsigned)transactionType;
@end

