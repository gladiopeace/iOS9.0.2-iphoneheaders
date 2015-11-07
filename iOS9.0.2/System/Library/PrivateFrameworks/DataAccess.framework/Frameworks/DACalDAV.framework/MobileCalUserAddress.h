/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MobileCalDAVAccount, NSURL;

@interface MobileCalUserAddress : NSObject {

	MobileCalDAVAccount* _account;
	NSURL* _address;

}

@property (assign,nonatomic,__weak) MobileCalDAVAccount * account;              //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSURL * address;                                     //@synthesize address=_address - In the implementation block
+(id)userAddress:(id)arg1 forAccount:(id)arg2 ;
+(id)userAddressFromDictionaryRepresentation:(id)arg1 forAccount:(id)arg2 ;
-(NSURL *)address;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithAddress:(id)arg1 account:(id)arg2 ;
-(void)setAddress:(NSURL *)arg1 ;
-(void)setAccount:(MobileCalDAVAccount *)arg1 ;
-(MobileCalDAVAccount *)account;
@end

