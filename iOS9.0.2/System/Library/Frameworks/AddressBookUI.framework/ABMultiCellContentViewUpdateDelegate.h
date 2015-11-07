/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABMultiCellContentViewUpdateDelegate <ABTabOrderDelegate,ABDatePickerPresentationDelegate>
@required
-(char)multiCellContentView:(id)arg1 entryFieldShouldBeginEditing:(id)arg2;
-(void)multiCellContentView:(id)arg1 entryFieldDidBeginEditing:(id)arg2;
-(void)multiCellContentView:(id)arg1 entryField:(id)arg2 didUpdateValue:(id)arg3 forKey:(id)arg4;
-(void)multiCellContentView:(id)arg1 entryFieldDidEndEditing:(id)arg2 forKey:(id)arg3;
-(void)multiCellContentViewDidEndEditing:(id)arg1;
-(void)multiCellContentView:(id)arg1 touchesBeganForView:(id)arg2;
-(void)multiCellContentView:(id)arg1 touchesEndedForView:(id)arg2;
-(void)multiCellContentView:(id)arg1 touchesCancelledForView:(id)arg2;
-(void)multiCellContentView:(id)arg1 willResizeAnimated:(char)arg2;
-(void)multiCellContentView:(id)arg1 didResizeAnimated:(char)arg2;
-(void)multiCellContentViewWillShowDeleteConfirmation:(id)arg1;
-(void)multiCellContentViewWillHideDeleteConfirmation:(id)arg1;

@end

