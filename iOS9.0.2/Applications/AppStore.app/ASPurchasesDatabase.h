/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class HSCloudClient, SSAppPurchaseHistoryDatabase, NSObject;

@interface ASPurchasesDatabase : NSObject {

	HSCloudClient* _cloudClient;
	SSAppPurchaseHistoryDatabase* _database;
	NSObject*<OS_dispatch_queue> _accessQueue;

}
+(id)sharedPurchasesDatabase;
-(void)updateActiveAccountWithReason:(int)arg1 ;
-(void)hideItemWithStoreIdentifier:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updateForFamilyMember:(id)arg1 withReason:(int)arg2 ;
-(id)itemsWithPredicate:(id)arg1 sortColumn:(id)arg2 sortAscending:(char)arg3 familyMember:(id)arg4 ;
-(void)_updateForFamilyMember:(id)arg1 withReason:(int)arg2 ;
-(void)dealloc;
-(id)init;
@end

