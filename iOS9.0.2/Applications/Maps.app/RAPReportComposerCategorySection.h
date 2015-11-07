/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPTablePartSection.h>

@class RAPCategoryQuestion, NSArray;

@interface RAPReportComposerCategorySection : RAPTablePartSection {

	RAPCategoryQuestion* _question;
	NSArray* _selectableCategories;
	/*^block*/id _selection;

}
-(id)cellForRowAtIndex:(int)arg1 ;
-(int)rowsCount;
-(void)didSelectCellForRowAtIndex:(int)arg1 tableIndexPath:(id)arg2 ;
-(id)initWithCategoryQuestion:(id)arg1 selection:(/*^block*/id)arg2 ;
@end

