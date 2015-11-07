/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol ABSearchOperationDelegate;
@class NSThread, NSPredicate, NSArray;

@interface ABSearchOperation : NSOperation {

	void* _addressBook;
	void* _internalSearchAddressBook;
	/*^block*/id _progressBlock;
	NSThread* _progressBlockThread;
	void* _context;
	id<ABSearchOperationDelegate> _delegate;
	NSPredicate* _predicate;
	NSArray* _prefetchProperties;
	unsigned _sortOrdering;

}

@property (assign,nonatomic) void* addressBook; 
@property (nonatomic,retain) NSPredicate * predicate;                             //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * prefetchProperties;                          //@synthesize prefetchProperties=_prefetchProperties - In the implementation block
@property (assign,nonatomic) id<ABSearchOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) void* context;                                       //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned sortOrdering;                               //@synthesize sortOrdering=_sortOrdering - In the implementation block
@property (nonatomic,copy) id progressBlock;                                      //@synthesize progressBlock=_progressBlock - In the implementation block
@property (assign,nonatomic) void* internalSearchAddressBook; 
+(id)personPredicateWithName:(id)arg1 addressBook:(void*)arg2 ;
+(id)personPredicateWithNameLike:(id)arg1 inGroup:(void*)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithNameLike:(id)arg1 inSource:(void*)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithNameLike:(id)arg1 inSource:(void*)arg2 includeSourceInResults:(char)arg3 addressBook:(void*)arg4 ;
+(id)personPredicateWithNameLike:(id)arg1 inSource:(void*)arg2 includeSourceInResults:(char)arg3 includePhotosInResults:(char)arg4 addressBook:(void*)arg5 ;
+(id)personPredicateWithNameLike:(id)arg1 inAccount:(id)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithNameOnly:(id)arg1 inAccount:(id)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithAnyValueForProperty:(int)arg1 addressBook:(void*)arg2 ;
+(id)personPredicateWithGroup:(void*)arg1 addressBook:(void*)arg2 ;
+(id)personPredicateWithNameLike:(id)arg1 inGroups:(id)arg2 sources:(id)arg3 addressBook:(void*)arg4 ;
+(id)personPredicateWithNameLike:(id)arg1 addressBook:(void*)arg2 ;
+(id)personPredicateWithValue:(id)arg1 comparison:(long)arg2 forProperty:(int)arg3 addressBook:(void*)arg4 ;
+(id)personPredicateWithPhoneLike:(id)arg1 countryHint:(id)arg2 addressBook:(void*)arg3 ;
-(void*)internalSearchAddressBook;
-(void)_mainThread_tellDelegateSearchFoundMatch:(void*)arg1 ;
-(void)setInternalSearchAddressBook:(void*)arg1 ;
-(NSArray *)prefetchProperties;
-(void)setPrefetchProperties:(NSArray *)arg1 ;
-(unsigned)sortOrdering;
-(void)setSortOrdering:(unsigned)arg1 ;
-(char)isConcurrent;
-(char)predicateShouldContinue:(id)arg1 ;
-(char)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(void)setAddressBook:(void*)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<ABSearchOperationDelegate>)arg1 ;
-(void)dealloc;
-(id<ABSearchOperationDelegate>)delegate;
-(void*)context;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setContext:(void*)arg1 ;
-(void)main;
-(id)progressBlock;
-(void*)addressBook;
-(void)setProgressBlock:(id)arg1 ;
@end

