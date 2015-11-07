/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class WDControllerManager, WDMyHealthViewController, WDCalendarSplitViewController, _UINavigationControllerPalette, NSUserActivity;

@interface WDHealthDataViewController : UIViewController {

	WDControllerManager* _controllerManager;
	WDMyHealthViewController* _listVC;
	WDCalendarSplitViewController* _calendarSplitViewController;
	int _selectedControlIndex;
	_UINavigationControllerPalette* _palette;
	NSUserActivity* _listUserActivity;
	NSUserActivity* _calendarUserActivity;

}
-(id)initWithControllerManager:(id)arg1 ;
-(void)controlValueChanged:(id)arg1 ;
-(void)_switchToSegment:(unsigned)arg1 ;
-(void)_updateTabsFrom:(id)arg1 toVC:(id)arg2 ;
-(void)todayPressed:(id)arg1 ;
-(void)attachPaletteTo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)restoreUserActivityState:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)addItem:(id)arg1 ;
@end
