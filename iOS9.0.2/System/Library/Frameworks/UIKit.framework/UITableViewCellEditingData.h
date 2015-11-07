/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UITableViewCell, UITableViewCellEditControl, UITableViewCellReorderControl, UITableViewCellDeleteConfirmationControl_Legacy, UIView;

@interface UITableViewCellEditingData : NSObject {

	UITableViewCell* _cell;
	int _editingStyle;
	UITableViewCellEditControl* _editControl;
	UITableViewCellReorderControl* _reorderControl;
	UITableViewCellDeleteConfirmationControl_Legacy* _deleteConfirmationControl;
	UIView* _reorderSeparatorView;

}

@property (getter=isDataRequired,nonatomic,readonly) char dataRequired; 
@property (nonatomic,readonly) char wantsMaskingWhileAnimatingDisabled; 
-(void)dealloc;
-(id)editControl:(char)arg1 ;
-(id)deleteConfirmationControl:(char)arg1 ;
-(id)initWithTableViewCell:(id)arg1 editingStyle:(int)arg2 ;
-(id)reorderControl:(char)arg1 ;
-(char)wantsMaskingWhileAnimatingDisabled;
-(id)reorderSeparatorView:(char)arg1 ;
-(char)isDataRequired;
@end

