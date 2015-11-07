/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKValueAddedMerchant : NSObject <NSSecureCoding> {

	NSData* _identifier;
	int _timesPresented;

}

@property (nonatomic,retain) NSData * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int timesPresented;               //@synthesize timesPresented=_timesPresented - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSData *)identifier;
-(void)setIdentifier:(NSData *)arg1 ;
-(int)timesPresented;
-(void)setTimesPresented:(int)arg1 ;
@end
