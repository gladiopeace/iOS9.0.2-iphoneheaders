/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SearchUI/SearchUITableViewController.h>

@class NSArray, NSDictionary;

@interface SearchUITestTableViewController : SearchUITableViewController {

	unsigned _style;
	NSArray* _sections;
	NSDictionary* _resultsForSection;

}

@property (assign) unsigned style;                                //@synthesize style=_style - In the implementation block
@property (retain) NSArray * sections;                            //@synthesize sections=_sections - In the implementation block
@property (retain) NSDictionary * resultsForSection;              //@synthesize resultsForSection=_resultsForSection - In the implementation block
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned)style;
-(void)setStyle:(unsigned)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(id)initWithResults:(id)arg1 style:(unsigned)arg2 ;
-(void)selectRowAtIndexPath:(id)arg1 ;
-(void)setResultsForSection:(NSDictionary *)arg1 ;
-(NSDictionary *)resultsForSection;
-(id)resultAtIndexPath:(id)arg1 ;
@end

