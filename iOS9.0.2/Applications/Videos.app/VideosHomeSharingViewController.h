/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUSharedLibrariesViewController.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface VideosHomeSharingViewController : MPUSharedLibrariesViewController <MCProfileConnectionObserver>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_storeButtonAction:(id)arg1 ;
-(char)_canBrowseStore;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_updateNavigationBar;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)presentSharedLibrariesViewController:(char)arg1 ;
@end

