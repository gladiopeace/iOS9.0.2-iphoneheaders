/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Accounts/DataclassOwners/Contacts.bundle/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Bookmarks/ACDDataclassOwnerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore, NSString;

@interface ABContactsDataclassOwner : NSObject <ACDDataclassOwnerProtocol> {

	void* _addressBook;
	NSObject*<OS_dispatch_queue> _addressBookQueue;
	ACAccountStore* _accountStore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataclasses;
-(void)_setSourceEnabled:(char)arg1 forAccount:(id)arg2 withChildren:(id)arg3 ;
-(char)_removeABAccountForACAccount:(id)arg1 withChildren:(id)arg2 ;
-(void*)_copyABAccountForACAccount:(id)arg1 withChildren:(id)arg2 ;
-(char)_mergeFacebookContactsIntoDefaultSourceFromABAccount:(void*)arg1 ;
-(char)_removeContactsAccount:(void*)arg1 ;
-(void)_setLocalSourceEnabled:(char)arg1 ;
-(void*)_copyDefaultAddressBookSourceForAccount:(id)arg1 withChildren:(id)arg2 createIfNecessary:(char)arg3 ;
-(char)_mergeContactsFromLocalSourceIntoSource:(void*)arg1 ;
-(char)_mergeContactsIntoLocalSourceFromABAccount:(void*)arg1 ;
-(void)_enableLocalSourceIfNecessaryIgnoringAccount:(id)arg1 ;
-(void*)_copyABAccountWithoutLockingForACAccount:(id)arg1 withChildren:(id)arg2 ;
-(char)_isLocalSourceEmpty;
-(id)actionsForEnablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForDisablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2 ;
-(char)_drainLocalStore;
-(id)_syncingAccountForParentAccount:(id)arg1 withChildren:(id)arg2 ;
-(char)_areSourcesEmptyForAccount:(id)arg1 ;
-(char)_createABAccountForACAccount:(id)arg1 withChildren:(id)arg2 ;
-(id)actionsForAddingAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForDeletingAccount:(id)arg1 forDataclass:(id)arg2 ;
-(char)performAction:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 forDataclass:(id)arg4 ;
-(void*)_addressBook;
-(void)dealloc;
-(id)init;
-(id)_accountStore;
@end

