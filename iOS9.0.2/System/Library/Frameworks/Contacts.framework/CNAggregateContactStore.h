/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/CNContactStore.h>

@class CNContactStore, NSArray;

@interface CNAggregateContactStore : CNContactStore {

	CNContactStore* _mainStore;
	NSArray* _contactStores;

}

@property (nonatomic,copy) NSArray * contactStores;                            //@synthesize contactStores=_contactStores - In the implementation block
@property (nonatomic,__weak,readonly) CNContactStore * mainStore; 
-(void)setContactStores:(NSArray *)arg1 ;
-(CNContactStore *)mainStore;
-(id)_allStoreResultsWithError:(id*)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)_unifiedContactsFromContacts:(id)arg1 unifyContactsFromMainStore:(char)arg2 keysToFetch:(id)arg3 error:(id*)arg4 ;
-(id)meContactIdentifierWithError:(id*)arg1 ;
-(id)contactIdentifiersForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)groupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2 ;
-(id)initWithContactStores:(id)arg1 ;
-(char)store:(id)arg1 supportsSelector:(SEL)arg2 ;
-(NSArray *)contactStores;
-(id)iOSMapper;
-(id)containersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)defaultContainerIdentifier;
-(id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)userActivityUserInfoForContact:(id)arg1 ;
-(id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2 ;
-(id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)originForSuggestion:(id)arg1 error:(id*)arg2 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(char)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)executeFetchRequest:(id)arg1 progressiveResults:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(char)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
@end

