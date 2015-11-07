/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/IMKeyValueStoreTransactionGroup.h>
#import <Podcasts/MZKeyValueStoreTransactionProcessing.h>

@class NSArray, NSMutableDictionary, IMKeyValueStoreTransaction, NSString;

@interface IMKeyValueStoreRemoveKeysTransactionGroup : IMKeyValueStoreTransactionGroup <MZKeyValueStoreTransactionProcessing> {

	NSArray* _keys;
	NSMutableDictionary* _itemsToRemove;
	IMKeyValueStoreTransaction* _currenTransaction;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)versionForGetTransaction:(id)arg1 key:(id)arg2 ;
-(id)dataForSetTransaction:(id)arg1 key:(id)arg2 version:(id*)arg3 ;
-(void)transaction:(id)arg1 mergeData:(id)arg2 forKey:(id)arg3 domainVersion:(id)arg4 version:(id)arg5 mismatch:(char)arg6 finishedBlock:(/*^block*/id)arg7 ;
-(void)transaction:(id)arg1 willProcessResponseWithDomainVersion:(id)arg2 ;
-(void)transaction:(id)arg1 didProcessResponseWithDomainVersion:(id)arg2 ;
-(char)scheduleNextTransactionInController:(id)arg1 ;
-(id)_transactionItemForKey:(id)arg1 ;
-(id)initWithKeys:(id)arg1 ;
-(void)dealloc;
@end

