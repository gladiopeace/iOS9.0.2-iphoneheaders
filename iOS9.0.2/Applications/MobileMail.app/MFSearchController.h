/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UISearchController.h>

@class MFAtomSearchBar;

@interface MFSearchController : UISearchController {

	MFAtomSearchBar* _atomSearchBar;

}

@property (assign,nonatomic) id<MFSearchResultsUpdating> searchResultsUpdater; 
@property (assign,nonatomic) id<MFSearchControllerDelegate> delegate; 
@property (nonatomic,retain,readonly) MFAtomSearchBar * searchBar; 
-(void)_noteScopeBarVisibilityChanged;
-(void)_handleMailNavigationControllerShowViewController:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(MFAtomSearchBar *)searchBar;
-(void)_uninstallBackGestureRecognizer;
@end

