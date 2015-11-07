/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RAPTablePartSection.h>

@class RAPBadRouteSuggestionsQuestion;

@interface RAPReportComposerBadRouteSelectionSection : RAPTablePartSection {

	RAPBadRouteSuggestionsQuestion* _question;
	char _collapsed;
	/*^block*/id _willChangeQuestionRequiringNoScroll;

}
-(id)cellForRowAtIndex:(int)arg1 ;
-(int)rowsCount;
-(void)didSelectCellForRowAtIndex:(int)arg1 tableIndexPath:(id)arg2 ;
-(char)usesAutoLayoutForRowAtIndex:(int)arg1 ;
-(void)tableViewTintColorDidChange;
-(int)_expansionCellIndex;
-(char)_isNoGoodCellIndex:(int)arg1 ;
-(UIEdgeInsets)_separatorInset;
-(char)_isExpansionCellIndex:(int)arg1 ;
-(unsigned)_selectableRouteSuggestionIndexForCellIndex:(int)arg1 ;
-(void)_noteWillSelectWithoutScroll;
-(id)initWithQuestion:(id)arg1 willChangeQuestionRequiringNoScroll:(/*^block*/id)arg2 ;
-(float)heightForRowAtIndex:(int)arg1 ;
@end

