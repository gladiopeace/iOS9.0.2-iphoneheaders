/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/StepByStepUIViewController.h>
#import <libobjc.A.dylib/TableViewManagerDelegate.h>

@class NSDictionary, UIPopoverController, NSArray, NSString, RecommendationActionController;

@interface StepByStepUIViewController_DevicePicker : StepByStepUIViewController <TableViewManagerDelegate> {

	NSDictionary* _selectedDevice;
	NSDictionary* _sourceNetwork;
	NSDictionary* _sourceBase;
	NSDictionary* _targetBase;
	UIPopoverController* _popover;
	NSArray* sortedDevices;
	NSString* connectionMedium;
	RecommendationActionController* actionController;
	char _showSingleBaseTopo;
	char showFullList;

}

@property (nonatomic,retain) NSArray * sortedDevices; 
@property (assign,nonatomic) NSString * connectionMedium; 
@property (nonatomic,retain) RecommendationActionController * actionController; 
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(char)showMoreOptions;
-(void)touchInCellAtIndexPath:(id)arg1 ;
-(id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned)arg2 inCellWithTag:(int)arg3 ;
-(void)setSortedDevices:(NSArray *)arg1 ;
-(void)setConnectionMedium:(NSString *)arg1 ;
-(NSString *)connectionMedium;
-(NSArray *)sortedDevices;
-(void)setupPickerTable;
-(void)updateSelections;
-(id)pickerContent;
-(RecommendationActionController *)actionController;
-(void)setActionController:(RecommendationActionController *)arg1 ;
@end

