/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, MNInstructionContents, NSString;

@interface MNInstructionContentsDebugController : UITableViewController <UITextFieldDelegate> {

	UITextField* _textField;
	MNInstructionContents* _contents;
	int _settingType;
	/*^block*/id _callback;

}

@property (nonatomic,retain) MNInstructionContents * contents;              //@synthesize contents=_contents - In the implementation block
@property (assign,nonatomic) int settingType;                               //@synthesize settingType=_settingType - In the implementation block
@property (nonatomic,copy) id callback;                                     //@synthesize callback=_callback - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)title;
-(id)initWithStyle:(int)arg1 ;
-(MNInstructionContents *)contents;
-(void)setContents:(MNInstructionContents *)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(int)settingType;
-(void)setSettingType:(int)arg1 ;
@end

