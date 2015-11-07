/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/CompletionItem.h>

@class WBSQuickWebsiteSearchProvider, QuickWebsiteSearchQuery, NSString;

@interface QuickWebsiteSearchCompletionItem : NSObject <CompletionItem> {

	WBSQuickWebsiteSearchProvider* _searchProvider;
	QuickWebsiteSearchQuery* _searchQuery;

}

@property (nonatomic,readonly) WBSQuickWebsiteSearchProvider * searchProvider;                   //@synthesize searchProvider=_searchProvider - In the implementation block
@property (nonatomic,readonly) QuickWebsiteSearchQuery * searchQuery;                            //@synthesize searchQuery=_searchQuery - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) NSString * lastSearchQuery; 
@property (nonatomic,readonly) NSString * completionTableHeaderViewReuseIdentifier; 
@property (nonatomic,readonly) char restoresSearchState; 
-(id)completionTableViewCellReuseIdentifier;
-(void)acceptCompletionWithActionHandler:(id)arg1 ;
-(id)completionTableViewCell;
-(void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2 ;
-(void)auditAcceptedCompletionWithRank:(unsigned)arg1 ;
-(id)reflectedStringForUserTypedString:(id)arg1 ;
-(id)initWithProvider:(id)arg1 query:(id)arg2 ;
-(WBSQuickWebsiteSearchProvider *)searchProvider;
-(QuickWebsiteSearchQuery *)searchQuery;
-(NSString *)parsecDomainIdentifier;
@end

