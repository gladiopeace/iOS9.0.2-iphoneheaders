/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/akd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSString;

@interface AKToken : NSObject {

	NSDate* _expirationDate;
	NSString* _stringValue;
	NSString* _name;

}

@property (nonatomic,copy) NSString * stringValue;                   //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
+(id)tokenWithValue:(id)arg1 lifetime:(id)arg2 ;
+(id)tokenWithBase64String:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(NSDate *)expirationDate;
@end

