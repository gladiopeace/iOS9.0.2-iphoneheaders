/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIBarButtonItem;

@interface MTAddPodcastOrStationController : NSObject {

	UIBarButtonItem* _plusButtonItem;

}
-(id)plusButtonItem;
-(void)presentAddPodcastUIWithUrl:(id)arg1 ;
-(void)plusButtonPressed:(id)arg1 ;
-(void)presentAddPodcastUI;
-(char)userHasSomePodcasts;
-(void)presentAddStationUI;
-(void)performSubscribe:(id)arg1 ;
-(void)presentStationWithTitle:(id)arg1 ;
-(id)createAndSaveStationWithTitle:(id)arg1 ;
-(id)presentingViewController;
@end

