/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface BKDAAPBuffer : NSObject {

	NSData* _data;

}

@property (nonatomic,readonly) NSData * data;              //@synthesize data=_data - In the implementation block
-(long)appendHeader:(unsigned long)arg1 size:(unsigned long)arg2 ;
-(long)appendUInt8:(unsigned char)arg1 withCode:(unsigned long)arg2 ;
-(long)appendUInt32:(unsigned long)arg1 withCode:(unsigned long)arg2 ;
-(long)appendUInt64:(unsigned long long)arg1 withCode:(unsigned long)arg2 ;
-(id)init;
-(NSData *)data;
@end
