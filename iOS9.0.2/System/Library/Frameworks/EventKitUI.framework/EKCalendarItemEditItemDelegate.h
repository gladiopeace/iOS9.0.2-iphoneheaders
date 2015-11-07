/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EKCalendarItemEditItemDelegate <NSObject>
@optional
-(void)editItem:(id)arg1 textViewShouldReturn:(id)arg2;
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3;
-(void)editItem:(id)arg1 wantsRowsScrolledToVisible:(id)arg2;
-(id)viewControllerForEditItem:(id)arg1;
-(void)editItem:(id)arg1 wantsDoneButtonDisabled:(char)arg2;
-(void)editItemDidStartEditing:(id)arg1;
-(void)editItemDidEndEditing:(id)arg1;
-(void)editItem:(id)arg1 didCommitFromDetailViewController:(char)arg2;
-(void)editItemTextChanged:(id)arg1;
-(void)editItemRequiresHeightChange:(id)arg1;
-(void)editItem:(id)arg1 wantsKeyboardPinned:(char)arg2;
-(void)editItemWantsInjectableViewControllerToBeShown:(id)arg1;
-(int)rowNumberForEditItem:(id)arg1;
-(void)editItem:(id)arg1 wantsRowReload:(id)arg2;
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;
-(void)editItem:(id)arg1 performActionsOnCellAtSubitem:(unsigned)arg2 actions:(/*^block*/id)arg3;
-(void)editItem:(id)arg1 willBeginDatePickingWithDate:(id)arg2 action:(SEL)arg3 animated:(char)arg4 forSubitem:(unsigned)arg5;
-(void)editItem:(id)arg1 didEndDatePickingAnimated:(char)arg2;
-(void)editItemRequiresPopoverSizeUpdate:(id)arg1;

@required
-(id)defaultAlertTitleForEditItem:(id)arg1;

@end

