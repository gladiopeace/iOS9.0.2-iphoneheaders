/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ICSectionedSearchResults : NSObject {

	NSMutableDictionary* _searchResultsBySection;

}

@property (nonatomic,retain) NSMutableDictionary * searchResultsBySection;              //@synthesize searchResultsBySection=_searchResultsBySection - In the implementation block
+(id)newSearchResultsBySection;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)clear;
-(id)removeSearchResultAtRow:(int)arg1 section:(unsigned)arg2 ;
-(void)setSearchResultsBySection:(NSMutableDictionary *)arg1 ;
-(void)objectsDidChange:(id)arg1 ;
-(NSMutableDictionary *)searchResultsBySection;
-(unsigned)removeSearchResultsWithIdentifiers:(id)arg1 forHiding:(char)arg2 ;
-(id)searchResultSectionForSectionIndex:(unsigned)arg1 ;
-(void)addSearchResults:(id)arg1 toSection:(unsigned)arg2 ;
-(id)searchResultsInSection:(unsigned)arg1 ;
-(void)setSearchResults:(id)arg1 forSection:(unsigned)arg2 ;
-(id)searchResultAtRow:(int)arg1 section:(unsigned)arg2 ;
-(char)removeSearchResultWithIdentifier:(id)arg1 fromSection:(unsigned)arg2 forHiding:(char)arg3 ;
-(char)removeSearchResultWithIdentifier:(id)arg1 forHiding:(char)arg2 ;
-(char)passesVisibilityTesting:(id)arg1 forSearchResult:(id)arg2 ;
-(unsigned)sectionForSearchResult:(id)arg1 ;
-(id)searchResultsBySectionForSearchResults:(id)arg1 passingVisibilityTesting:(id)arg2 ;
-(unsigned)addSearchResultsBySection:(id)arg1 ;
-(unsigned)countForSection:(unsigned)arg1 ;
-(id)searchResultObjectsInSection:(unsigned)arg1 ;
-(char)addSearchResults:(id)arg1 removingFoundIdentifiers:(id)arg2 passingVisibilityTesting:(id)arg3 ;
-(void)filterSearchResultsUsingVisiblityTesting:(id)arg1 ;
@end

