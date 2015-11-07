/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WelcomeKitCore/WLMigrationWebService.h>

@class ACAccountStore;

@interface WLMailAccountMigrator : WLMigrationWebService {

	ACAccountStore* _accountStore;

}
+(id)contentType;
-(id)contentType;
-(void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(char)arg3 ;
-(void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2 ;
-(id)importWillBegin;
-(void)importDidEnd;
-(void)_importGoogleAccountWithUsername:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

