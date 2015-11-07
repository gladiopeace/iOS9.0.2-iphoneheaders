/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RecentsViewControllerDelegate <CollectionsTableViewControllerDelegate>
@optional
-(void)recentsViewController:(id)arg1 choseCategoryResult:(id)arg2;
-(void)recentsViewController:(id)arg1 chosePopularNearbyResult:(id)arg2;
-(void)recentsViewControllerDidSelectCollectionsButton:(id)arg1;
-(void)recentsViewControllerDidDismissClearHistorySheet:(id)arg1;
-(void)setSearchType:(int)arg1;

@required
-(id)quickActionMenuHandlerForRecentsViewController:(id)arg1;
-(char)recentsViewControllerShouldPresentToOrFromSelectionAlert:(id)arg1;
-(void)recentsViewController:(id)arg1 didShowCategory:(id)arg2;
-(void)recentsViewController:(id)arg1 choseBookmark:(id)arg2;
-(void)recentsViewController:(id)arg1 choseHistoryItem:(id)arg2;
-(void)recentsViewController:(id)arg1 choseCategory:(id)arg2;

@end

