/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPTablePartSection.h>

@class RAPCategoryQuestion, MKMapItem;

@interface RAPReportComposerSnippetSection : RAPTablePartSection {

	RAPCategoryQuestion* _question;
	MKMapItem* _placeSnippetMapItem;

}
+(char)canDisplaySnippetForCategoryQuestion:(id)arg1 ;
-(id)cellForRowAtIndex:(int)arg1 ;
-(int)rowsCount;
-(id)initWithPlaceSnippetMapItem:(id)arg1 ;
-(int)_snippetKind;
-(id)_placeSnippetMapItem;
-(id)initWithCategoryQuestion:(id)arg1 ;
-(float)heightForRowAtIndex:(int)arg1 ;
-(id)headerTitle;
@end

