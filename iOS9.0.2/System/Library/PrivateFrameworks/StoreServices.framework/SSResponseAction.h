/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSAccount, NSString, SSDialog, NSURL;

@interface SSResponseAction : NSObject <NSCopying> {

	SSAccount* _account;
	NSString* _actionType;
	NSString* _clientIdentifier;
	NSString* _creditsString;
	SSDialog* _dialog;
	NSString* _footerSection;
	NSURL* _url;
	int _urlBagType;

}

@property (nonatomic,readonly) NSString * actionType;                    //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) SSAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * creditsString;                 //@synthesize creditsString=_creditsString - In the implementation block
@property (nonatomic,readonly) SSDialog * dialog;                        //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,readonly) NSString * footerSection;                 //@synthesize footerSection=_footerSection - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) int URLBagType;                           //@synthesize urlBagType=_urlBagType - In the implementation block
+(id)_dialogActionWithDialog:(id)arg1 ;
+(id)_invalidateURLBagsAction;
+(id)_setActiveAccountActionWithAccount:(id)arg1 ;
+(id)_setCreditsActionWithCredits:(id)arg1 account:(id)arg2 ;
+(id)_actionWithActionType:(id)arg1 ;
+(id)_urlActionWithType:(id)arg1 URL:(id)arg2 ;
+(id)_selectFooterActionWithSection:(id)arg1 ;
+(id)_checkInAppQueueActionWithClientID:(id)arg1 environment:(id)arg2 ;
-(NSString *)actionType;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(NSString *)clientIdentifier;
-(int)URLBagType;
-(SSDialog *)dialog;
-(SSAccount *)account;
-(NSString *)creditsString;
-(NSString *)footerSection;
@end

