/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface XPCTransaction : NSObject {

	char _isInTransaction;
	NSString* _identifier;

}

@property (copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(void)close;
-(id)initWithIdentifier:(id)arg1 ;
-(void)open;
@end

