/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, _WDCompareSheetDataUnitGroupSelectionStatus;

@interface _WDCompareSheetTableViewCell : UITableViewCell {

	UIImageView* _categoryIcon;
	_WDCompareSheetDataUnitGroupSelectionStatus* _selectionStatus;

}

@property (nonatomic,retain) _WDCompareSheetDataUnitGroupSelectionStatus * selectionStatus;              //@synthesize selectionStatus=_selectionStatus - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)_multiselectBackgroundColor;
-(_WDCompareSheetDataUnitGroupSelectionStatus *)selectionStatus;
-(void)setSelectionStatus:(_WDCompareSheetDataUnitGroupSelectionStatus *)arg1 ;
@end

