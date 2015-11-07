/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <MobilePhone/PHVoicemailGreetingPlaybackCellDelegate.h>
#import <MobilePhone/PHVoicemailGreetingModelDelegate.h>

@protocol PHVoicemailGreetingViewControllerDelegate;
@class PHVoicemailGreetingModel, NSString;

@interface PHVoicemailGreetingViewController : UITableViewController <PHVoicemailGreetingPlaybackCellDelegate, PHVoicemailGreetingModelDelegate> {

	char _presentedFromSetup;
	char _hasRecordedNewGreeting;
	id<PHVoicemailGreetingViewControllerDelegate> _greetingDelegate;
	PHVoicemailGreetingModel* _greetingModel;

}

@property (getter=isPresentedFromSetup) char presentedFromSetup;                                //@synthesize presentedFromSetup=_presentedFromSetup - In the implementation block
@property (assign) id<PHVoicemailGreetingViewControllerDelegate> greetingDelegate;              //@synthesize greetingDelegate=_greetingDelegate - In the implementation block
@property (assign,nonatomic) char hasRecordedNewGreeting;                                       //@synthesize hasRecordedNewGreeting=_hasRecordedNewGreeting - In the implementation block
@property (nonatomic,retain) PHVoicemailGreetingModel * greetingModel;                          //@synthesize greetingModel=_greetingModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)playStopButtonTapped;
-(void)recordStopButtonTapped;
-(void)setGreetingDelegate:(id<PHVoicemailGreetingViewControllerDelegate>)arg1 ;
-(PHVoicemailGreetingModel *)greetingModel;
-(void)setGreetingModel:(PHVoicemailGreetingModel *)arg1 ;
-(char)isPresentedFromSetup;
-(void)_saveButtonTapped;
-(void)_selectCell:(id)arg1 ;
-(id<PHVoicemailGreetingViewControllerDelegate>)greetingDelegate;
-(id)playbackControlsCell;
-(id)sliderCell;
-(char)hasRecordedNewGreeting;
-(id)_titleForCellAtIndexPath:(id)arg1 ;
-(id)_selectedCellIndexPath;
-(void)setHasRecordedNewGreeting:(char)arg1 ;
-(void)voicemailGreetingAudioControllerDidChangeState:(int)arg1 ;
-(void)voicemailGreetingFailedWithError:(id)arg1 ;
-(void)voicemailGreetingRecordingProgressChanged:(float)arg1 ;
-(void)voicemailGreetingPlayingProgressChanged:(float)arg1 ;
-(void)voicemailGreetingDurationChanged:(double)arg1 ;
-(void)voicemailGreetingDidFinishRecording;
-(void)voicemailGreetingDidSave;
-(void)setPresentedFromSetup:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)_handleDeactivation:(id)arg1 ;
-(void)_cancelButtonTapped;
@end

