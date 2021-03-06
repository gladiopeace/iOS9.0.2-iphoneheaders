/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/PHVoicemailListViewController.h>
#import <MobilePhone/PHVoicemailGreetingViewControllerDelegate.h>
#import <MobilePhone/PHVoicemailListViewControllerConcrete.h>

@class UIBarButtonItem, _UIContentUnavailableView, NSString, NSArray;

@interface PHVoicemailInboxListViewController : PHVoicemailListViewController <PHVoicemailGreetingViewControllerDelegate, PHVoicemailListViewControllerConcrete> {

	char _isSwipeToDelete;
	UIBarButtonItem* _readButton;
	UIBarButtonItem* _deleteButton;
	_UIContentUnavailableView* _noContentView;

}

@property (assign,nonatomic) char isSwipeToDelete;                                   //@synthesize isSwipeToDelete=_isSwipeToDelete - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * readButton;                           //@synthesize readButton=_readButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * deleteButton;                         //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) _UIContentUnavailableView * noContentView;              //@synthesize noContentView=_noContentView - In the implementation block
@property (readonly) NSString * cellDetailDestructiveActionText; 
@property (readonly) NSString * navigationBarText; 
@property (readonly) NSString * folderName; 
@property (readonly) unsigned flagsToHave; 
@property (readonly) unsigned flagsNotToHave; 
@property (readonly) char popOffIfEmpty; 
@property (readonly) NSString * tableViewDestructiveActionText; 
@property (readonly) NSString * navigationBarTextWithCountFormat; 
@property (readonly) NSArray * childListControllers; 
-(NSString *)cellDetailDestructiveActionText;
-(void)performCellDetailDestructiveActionForVoicemail:(id)arg1 ;
-(unsigned)flagsToHave;
-(unsigned)flagsNotToHave;
-(void)performTableViewDestructiveActionForVoicemail:(id)arg1 ;
-(void)willShowVoicemails:(id)arg1 ;
-(NSString *)navigationBarText;
-(char)popOffIfEmpty;
-(NSString *)tableViewDestructiveActionText;
-(NSArray *)childListControllers;
-(void)_updateGreetingButtonAllowed;
-(char)_selectionContainsUnreadVoicemail;
-(void)setIsSwipeToDelete:(char)arg1 ;
-(char)isSwipeToDelete;
-(void)_markAsRead:(id)arg1 ;
-(void)greetingButtonTapped;
-(void)voicemailGreetingViewControllerFinished:(id)arg1 ;
-(UIBarButtonItem *)readButton;
-(void)setReadButton:(UIBarButtonItem *)arg1 ;
-(NSString *)navigationBarTextWithCountFormat;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)setNoContentView:(_UIContentUnavailableView *)arg1 ;
-(_UIContentUnavailableView *)noContentView;
-(UIBarButtonItem *)deleteButton;
-(void)setDeleteButton:(UIBarButtonItem *)arg1 ;
-(void)_delete:(id)arg1 ;
-(NSString *)folderName;
-(id)initWithNavigationController:(id)arg1 ;
@end

