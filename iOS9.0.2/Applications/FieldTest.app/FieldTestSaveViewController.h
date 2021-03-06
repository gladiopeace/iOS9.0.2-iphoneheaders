/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FieldTest.app/FieldTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FieldTest/FieldTest-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSDate, NSArray, UITableView, UITextField, NSString;

@interface FieldTestSaveViewController : UIViewController <UITableViewDataSource, UITextFieldDelegate> {

	NSDate* _timeStamp;
	NSArray* _saveHistory;
	UITableView* saveContentTable;
	UITextField* saveDescription;

}

@property (nonatomic,retain) UITableView * saveContentTable; 
@property (nonatomic,retain) UITextField * saveDescription; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSaveHistory:(id)arg1 ;
-(void)savePressed:(id)arg1 ;
-(void)backgroundTouched:(id)arg1 ;
-(UITableView *)saveContentTable;
-(void)setSaveContentTable:(UITableView *)arg1 ;
-(UITextField *)saveDescription;
-(void)setSaveDescription:(UITextField *)arg1 ;
-(void)cancelPressed:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
@end

