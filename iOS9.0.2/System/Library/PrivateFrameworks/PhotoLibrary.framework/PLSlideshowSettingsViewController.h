/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/MPMediaPickerControllerDelegate.h>

@protocol PLSlideshowSettingsViewControllerDelegate;
@class NSArray, MPMediaPickerController, PLSlideshowTransitionsViewController, PLSlideshowAirPlayRoutesViewController, UITableView, UITableViewCell, NSString, MPMediaItemCollection;

@interface PLSlideshowSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MPMediaPickerControllerDelegate> {

	NSArray* _airplayRoutes;
	unsigned _selectedAirplayRouteIndex;
	NSArray* _transitionKeys;
	NSArray* _alternateTransitionLocalizations;
	MPMediaPickerController* _mediaPicker;
	PLSlideshowTransitionsViewController* _transitionsController;
	PLSlideshowAirPlayRoutesViewController* _airPlayRoutesController;
	UITableView* _table;
	UITableViewCell* _transitionCell;
	UITableViewCell* _selectedMusicCell;
	UITableViewCell* _playMusicSwitchCell;
	char _slideshowShouldPlayMusic;
	id<PLSlideshowSettingsViewControllerDelegate> _delegate;
	NSString* _selectedTransition;
	MPMediaItemCollection* _slideshowMusicCollection;

}

@property (assign,nonatomic) id<PLSlideshowSettingsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * selectedTransition;                                         //@synthesize selectedTransition=_selectedTransition - In the implementation block
@property (assign,nonatomic) char slideshowShouldPlayMusic;                                       //@synthesize slideshowShouldPlayMusic=_slideshowShouldPlayMusic - In the implementation block
@property (nonatomic,retain) MPMediaItemCollection * slideshowMusicCollection;                    //@synthesize slideshowMusicCollection=_slideshowMusicCollection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)AppleTVPushTransitions;
+(id)TVOutTransitions;
+(id)iPhoneTransitions;
+(id)iPadTransitions;
+(int)_uiTransitionForTransitionKey:(id)arg1 ;
-(id)slideshowSettings;
-(void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2 ;
-(void)mediaPickerDidCancel:(id)arg1 ;
-(void)setDelegate:(id<PLSlideshowSettingsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<PLSlideshowSettingsViewControllerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(CGSize)contentSizeForViewInPopoverView;
-(void)_preheatMediaPicker;
-(void)setSelectedTransition:(NSString *)arg1 ;
-(void)setSlideshowShouldPlayMusic:(char)arg1 ;
-(void)setSlideshowMusicCollection:(MPMediaItemCollection *)arg1 ;
-(NSString *)selectedTransition;
-(char)slideshowShouldPlayMusic;
-(MPMediaItemCollection *)slideshowMusicCollection;
-(int)_mainSection;
-(void)_updateSettingsInfo;
-(id)_selectedAirplayRoute;
-(void)applySlideshowSettings:(id)arg1 ;
-(char)_includeAirPlaySection;
-(int)_airPlaySection;
-(int)_buttonSection;
-(id)initWithAirplayRoutes:(id)arg1 selectedRouteIndex:(unsigned)arg2 ;
-(void)_playMusicSwitchValueDidChange:(id)arg1 ;
-(id)_selectedMusic;
-(void)_playButtonWasPressed:(id)arg1 ;
-(void)updateTransitionKeys:(id)arg1 ;
@end

