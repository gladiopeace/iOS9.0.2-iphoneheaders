/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFDataConsumer.h>

@class NSMutableArray, NSArray, NSString;

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer> {

	NSMutableArray* _consumers;
	char _serialAppend;

}

@property (assign,getter=isSerialAppend,nonatomic) char serialAppend;              //@synthesize serialAppend=_serialAppend - In the implementation block
@property (nonatomic,readonly) NSArray * consumers;                                //@synthesize consumers=_consumers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)filterWithConsumers:(id)arg1 ;
+(id)filterWithConsumer:(id)arg1 ;
-(void)dealloc;
-(void)done;
-(int)appendData:(id)arg1 ;
-(char)isSerialAppend;
-(void)setSerialAppend:(char)arg1 ;
-(id)initWithConsumers:(id)arg1 ;
-(NSArray *)consumers;
-(id)initWithConsumer:(id)arg1 ;
@end

