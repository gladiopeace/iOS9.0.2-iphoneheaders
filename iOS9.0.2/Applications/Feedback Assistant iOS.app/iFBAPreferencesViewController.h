/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/Feedback Assistant iOS-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableViewCell, UILabel, NSString;

@interface iFBAPreferencesViewController : UITableViewController <UITableViewDelegate> {

	UITableViewCell* _resetWarningsCell;
	UILabel* _versionLabel;

}

@property (assign,nonatomic,__weak) UITableViewCell * resetWarningsCell;              //@synthesize resetWarningsCell=_resetWarningsCell - In the implementation block
@property (nonatomic,retain) UILabel * versionLabel;                                  //@synthesize versionLabel=_versionLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapSignOut:(id)arg1 ;
-(void)didTapDone:(id)arg1 ;
-(char)isWarningsOn;
-(UITableViewCell *)resetWarningsCell;
-(void)updateFooter;
-(UILabel *)versionLabel;
-(void)resetWarnings;
-(void)didResetWarnings:(id)arg1 ;
-(void)setResetWarningsCell:(UITableViewCell *)arg1 ;
-(void)setVersionLabel:(UILabel *)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
@end

