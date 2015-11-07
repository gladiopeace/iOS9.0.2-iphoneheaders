/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBDataPlanAlertItem.h>

@class NSString;

@interface SBDataPlanCompletionAlertItem : SBDataPlanAlertItem {

	NSString* _carrierName;
	char _newAccount;

}

@property (nonatomic,copy) NSString * carrierName;                             //@synthesize carrierName=_carrierName - In the implementation block
@property (assign,getter=isNewAccount,nonatomic) char newAccount;              //@synthesize newAccount=_newAccount - In the implementation block
-(id)initWithCarrierName:(id)arg1 newAccount:(char)arg2 ;
-(void)setNewAccount:(char)arg1 ;
-(char)isNewAccount;
-(void)setCarrierName:(NSString *)arg1 ;
-(void)dealloc;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(NSString *)carrierName;
@end

