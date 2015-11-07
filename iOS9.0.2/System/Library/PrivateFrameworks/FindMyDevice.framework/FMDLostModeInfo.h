/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMDLostModeInfo : NSObject <NSSecureCoding> {

	char _lostModeEnabled;
	NSString* _message;
	NSString* _phoneNumber;

}

@property (assign,nonatomic) char lostModeEnabled;                //@synthesize lostModeEnabled=_lostModeEnabled - In the implementation block
@property (nonatomic,retain) NSString * message;                  //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(char)lostModeEnabled;
-(void)setLostModeEnabled:(char)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

