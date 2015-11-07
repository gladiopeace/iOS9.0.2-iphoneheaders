/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/ETSettings.bundle/ETSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ETSettings/ETPeopleViewController.h>
#import <ETSettings/ETDeleteButtonDelegate.h>

@protocol ETSettingsPeopleViewControllerDelegate;
@class UILabel, ETDeleteButton, NSTimer;

@interface ETSettingsPeopleViewController : ETPeopleViewController <ETDeleteButtonDelegate> {

	unsigned _addPersonIndex;
	UILabel* _titleLabel;
	ETDeleteButton* _deleteButton;
	NSTimer* _deleteButtonAppearanceTimer;
	id<ETSettingsPeopleViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<ETSettingsPeopleViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_selectSlotAtIndex:(unsigned)arg1 includeSelectionIndicator:(char)arg2 animated:(char)arg3 ;
-(void)peripheryPersonViewTapped:(id)arg1 ;
-(void)_deleteButtonAppearanceTimerFired;
-(void)_stopDeleteButtonAppearanceTimer;
-(void)_startDeleteButtonAppearanceTimerIfNecessary;
-(float)_dialViewTopOffset;
-(float)_titleLabelTopOffset;
-(void)_removeDeleteButton;
-(void)deleteButtonDidFinishHideAnimation:(id)arg1 ;
-(void)deleteSelectedPerson;
-(void)centerPersonViewTapped:(id)arg1 ;
-(void)_groupTitleChanged;
-(void)_deleteButtonTapped;
-(void)setDelegate:(id<ETSettingsPeopleViewControllerDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id<ETSettingsPeopleViewControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
@end

