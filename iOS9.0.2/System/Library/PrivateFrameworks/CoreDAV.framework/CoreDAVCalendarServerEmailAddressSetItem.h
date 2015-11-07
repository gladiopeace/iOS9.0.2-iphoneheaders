/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, CoreDAVItemWithNoChildren;

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem {

	NSMutableSet* _emailAddresses;
	CoreDAVItemWithNoChildren* _unauthenticated;

}

@property (nonatomic,retain) NSMutableSet * emailAddresses;                            //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * unauthenticated;              //@synthesize unauthenticated=_unauthenticated - In the implementation block
+(id)copyParseRules;
-(NSMutableSet *)emailAddresses;
-(void)dealloc;
-(id)init;
-(id)description;
-(CoreDAVItemWithNoChildren *)unauthenticated;
-(void)setEmailAddresses:(NSMutableSet *)arg1 ;
-(void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)addEmailAddress:(id)arg1 ;
@end

