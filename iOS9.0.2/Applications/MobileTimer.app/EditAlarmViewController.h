/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol EditAlarmViewControllerDelegate;
@class EditAlarmView, Alarm, NSString;

@interface EditAlarmViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	EditAlarmView* _editAlarmView;
	char _edited;
	char _editingFinished;
	char _newAlarm;
	Alarm* _alarm;
	int _editingAlarmSetting;
	id<EditAlarmViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) Alarm * alarm;                                                  //@synthesize alarm=_alarm - In the implementation block
@property (assign,nonatomic,__weak) id<EditAlarmViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)desiredContentSize;
-(void)_doneButtonClicked:(id)arg1 ;
-(void)handleSuspend;
-(void)handlePickerChanged;
-(void)saveAlarmOnlyIfEdited:(char)arg1 ;
-(void)markAsEdited;
-(void)_snoozeControlChanged:(id)arg1 ;
-(void)startEditingSetting:(int)arg1 ;
-(id)initWithAlarm:(id)arg1 ;
-(Alarm *)alarm;
-(void)setDelegate:(id<EditAlarmViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<EditAlarmViewControllerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidUnload;
-(void)_cancelButtonClicked:(id)arg1 ;
@end

