/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol BKAudioControllerDelegate;
@class UISlider, UIButton, UITableView, NSString;

@interface BKAudioController : BKViewController <UITableViewDelegate, UITableViewDataSource> {

	UISlider* _volumeSlider;
	UIButton* _readButton;
	UITableView* _tableView;
	id<BKAudioControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<BKAudioControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)releaseViews;
-(void)updatePopoverSize;
-(void)updateControlStates;
-(void)onVolume:(id)arg1 ;
-(void)onTurnSwitch:(id)arg1 ;
-(void)onTrackSwitch:(id)arg1 ;
-(id)sectionView:(char)arg1 ;
-(void)onReadButton:(id)arg1 ;
-(id)volumeSlider;
-(void)setDelegate:(id<BKAudioControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<BKAudioControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
@end

