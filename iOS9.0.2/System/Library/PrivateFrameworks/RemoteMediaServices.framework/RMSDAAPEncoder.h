/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableData, NSData;

@interface RMSDAAPEncoder : NSObject {

	NSMutableData* _data;

}

@property (nonatomic,readonly) NSData * data;              //@synthesize data=_data - In the implementation block
-(id)init;
-(NSData *)data;
-(void)encodeBytes:(const char*)arg1 length:(unsigned)arg2 forCode:(unsigned)arg3 ;
-(void)encodeInt32:(int)arg1 forCode:(unsigned)arg2 ;
-(void)encodeInt64:(long long)arg1 forCode:(unsigned)arg2 ;
-(void)encodeString:(id)arg1 forCode:(unsigned)arg2 ;
-(void)encodeData:(id)arg1 forCode:(unsigned)arg2 ;
@end

