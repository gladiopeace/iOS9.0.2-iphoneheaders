/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNContactDataSource.h>

@protocol CNCancelable, CNScheduler;
@class CNContactDataSourceSafeDelegate, CNContactFormatter, CNContactStore, CNContactStoreFilter, CNManualObservable, NSMutableArray, NSString, NSArray, NSDictionary, CNContactFilter, CNContact;

@interface CNContactAsyncDataSource : NSObject <CNContactDataSource> {

	CNContactDataSourceSafeDelegate* _delegate;
	CNContactFormatter* _contactFormatter;
	CNContactStore* _store;
	CNContactStoreFilter* _filter;
	id<CNCancelable> _searchCancelationToken;
	id<CNScheduler> _reloadScheduler;
	CNManualObservable* _reloadStream;
	NSMutableArray* _resultingContacts;

}

@property (nonatomic,retain) CNContactStore * store;                                                       //@synthesize store=_store - In the implementation block
@property (nonatomic,copy) CNContactStoreFilter * filter;                                                  //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) id<CNCancelable> searchCancelationToken;                                      //@synthesize searchCancelationToken=_searchCancelationToken - In the implementation block
@property (nonatomic,retain) id<CNScheduler> reloadScheduler;                                              //@synthesize reloadScheduler=_reloadScheduler - In the implementation block
@property (nonatomic,retain) CNManualObservable * reloadStream;                                            //@synthesize reloadStream=_reloadStream - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultingContacts;                                           //@synthesize resultingContacts=_resultingContacts - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * contacts; 
@property (nonatomic,readonly) NSString * meContactIdentifier; 
@property (nonatomic,readonly) NSDictionary * contactMatchInfos; 
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,readonly) NSArray * indexSections; 
@property (assign,nonatomic,__weak) id<CNContactDataSourceDelegate> delegate; 
@property (nonatomic,readonly) char canReload; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) CNContactFilter * effectiveFilter; 
@property (nonatomic,readonly) CNContact * meContact; 
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                                        //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,readonly) char shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled; 
-(NSArray *)contacts;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(id)indexPathForContact:(id)arg1 ;
-(id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(char)arg2 keysToFetch:(id)arg3 ;
-(NSString *)meContactIdentifier;
-(char)shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
-(NSDictionary *)contactMatchInfos;
-(NSArray *)indexSections;
-(CNContactFilter *)effectiveFilter;
-(void)setResultingContacts:(NSMutableArray *)arg1 ;
-(void)setReloadScheduler:(id<CNScheduler>)arg1 ;
-(void)setReloadStream:(CNManualObservable *)arg1 ;
-(CNManualObservable *)reloadStream;
-(id<CNScheduler>)reloadScheduler;
-(void)reloadWithRequest:(id)arg1 ;
-(NSMutableArray *)resultingContacts;
-(void)invalidateSearch;
-(void)invalidateResults;
-(void)setSearchCancelationToken:(id<CNCancelable>)arg1 ;
-(id<CNCancelable>)searchCancelationToken;
-(id)initWithStore:(id)arg1 ;
-(CNContactStore *)store;
-(void)setStore:(CNContactStore *)arg1 ;
-(char)canReload;
-(CNContactStoreFilter *)filter;
-(void)setDelegate:(id<CNContactDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(void)reload;
-(id<CNContactDataSourceDelegate>)delegate;
-(void)invalidate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilter:(CNContactStoreFilter *)arg1 ;
-(NSString *)displayName;
-(NSArray *)sections;
@end

