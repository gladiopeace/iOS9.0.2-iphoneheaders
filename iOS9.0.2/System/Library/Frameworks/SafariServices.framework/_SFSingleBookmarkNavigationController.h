/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/_SFBookmarkInfoViewControllerDelegate.h>

@protocol _SFSingleBookmarkNavigationControllerDelegate;
@class _SFBookmarkInfoViewController, WebBookmarkCollection, NSString;

@interface _SFSingleBookmarkNavigationController : UINavigationController <_SFBookmarkInfoViewControllerDelegate> {

	_SFBookmarkInfoViewController* _infoViewController;
	WebBookmarkCollection* _collection;
	char _delegateNotifiedOfResult;
	id<_SFSingleBookmarkNavigationControllerDelegate> _bookmarkNavDelegate;

}

@property (assign,nonatomic,__weak) id<_SFSingleBookmarkNavigationControllerDelegate> bookmarkNavDelegate;              //@synthesize bookmarkNavDelegate=_bookmarkNavDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newBookmarkInfoViewControllerWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(char)arg3 toFavorites:(char)arg4 willBeDisplayedModally:(char)arg5 ;
-(id)initWithCollection:(id)arg1 ;
-(id)_initWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(char)arg3 toFavorites:(char)arg4 ;
-(void)bookmarkInfoViewController:(id)arg1 didFinishWithResult:(char)arg2 ;
-(char)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1 ;
-(char)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)arg1 ;
-(id)initWithBookmark:(id)arg1 inCollection:(id)arg2 ;
-(id)initForAddingToFavoritesInCollection:(id)arg1 ;
-(void)addBookmarkWithTitle:(id)arg1 address:(id)arg2 parentBookmark:(id)arg3 ;
-(char)shouldShowBrowserPanel;
-(void)panelWillSuspend;
-(char)shouldResumePanel;
-(void)willHideOnSuspend;
-(id<_SFSingleBookmarkNavigationControllerDelegate>)bookmarkNavDelegate;
-(void)setBookmarkNavDelegate:(id<_SFSingleBookmarkNavigationControllerDelegate>)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
@end

