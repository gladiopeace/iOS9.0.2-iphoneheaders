/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class _AddBookmarkViewController, SearchResult, NSString;

@interface AddBookmarkViewController : UINavigationController {

	_AddBookmarkViewController* _controller;
	SearchResult* _bookmark;
	NSString* _bookmarkTitle;

}

@property (assign,nonatomic,__weak) id<AddBookmarkViewControllerDelegate> addBookmarkDelegate; 
@property (nonatomic,retain) SearchResult * bookmark;                                                       //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,copy) NSString * bookmarkTitle;                                                        //@synthesize bookmarkTitle=_bookmarkTitle - In the implementation block
@property (nonatomic,retain) id controller;                                                                 //@synthesize controller=_controller - In the implementation block
-(id<AddBookmarkViewControllerDelegate>)addBookmarkDelegate;
-(void)setAddBookmarkDelegate:(id<AddBookmarkViewControllerDelegate>)arg1 ;
-(NSString *)bookmarkTitle;
-(void)setBookmarkTitle:(NSString *)arg1 ;
-(void)setBookmark:(SearchResult *)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)controller;
-(void)setController:(id)arg1 ;
-(SearchResult *)bookmark;
@end

