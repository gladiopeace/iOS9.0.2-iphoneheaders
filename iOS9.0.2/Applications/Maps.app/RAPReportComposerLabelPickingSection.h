/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPTablePartSection.h>

@class RAPLabelCorrectionsQuestion, RAPMapFeaturePickerViewController;

@interface RAPReportComposerLabelPickingSection : RAPTablePartSection {

	RAPLabelCorrectionsQuestion* _question;
	RAPMapFeaturePickerViewController* _mapPicker;

}
-(id)cellForRowAtIndex:(int)arg1 ;
-(int)rowsCount;
-(void)registerReuseIdentifiersForCells;
-(id)initWithQuestion:(id)arg1 ;
-(float)heightForRowAtIndex:(int)arg1 ;
@end

