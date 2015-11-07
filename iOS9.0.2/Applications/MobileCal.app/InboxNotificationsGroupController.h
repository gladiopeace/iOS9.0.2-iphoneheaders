/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/CalendarMessageCellDelegate.h>
#import <MobileCal/InboxTableViewGroupController.h>

@protocol InboxTableViewGroupControllerDelegate;
@class CalendarModel, NSMutableArray, NSMutableDictionary, NSString;

@interface InboxNotificationsGroupController : NSObject <CalendarMessageCellDelegate, InboxTableViewGroupController> {

	CalendarModel* _model;
	NSMutableArray* _notificationReferences;
	NSMutableArray* _sharedCalendarInvitationsReplyPending;
	NSMutableDictionary* _pendingComments;
	char _needsRefresh;
	char _visible;
	id<InboxTableViewGroupControllerDelegate> _delegate;

}

@property (__weak) id<InboxTableViewGroupControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) char visible;                                                    //@synthesize visible=_visible - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)refreshIfNeeded;
-(void)inboxWillDismiss;
-(void)messageCell:(id)arg1 committedComment:(id)arg2 ;
-(void)performAction:(int)arg1 forCell:(id)arg2 ;
-(void)_notificationsChanged:(id)arg1 ;
-(void)_savePendingComments;
-(id)filteredNotificationsFromArray:(id)arg1 ;
-(id)eventForRow:(int)arg1 ;
-(void)_saveStatus:(int)arg1 forEventInvitationNotification:(id)arg2 ;
-(id)eventStoreForCell:(id)arg1 ;
-(id)initWithModel:(id)arg1 delegate:(id)arg2 ;
-(char)hasRows;
-(void)rowSelected:(int)arg1 ;
-(id)noContentStringForInboxTableView:(id)arg1 ;
-(id)_eventForIndexPath:(id)arg1 ;
-(char)canSelectRow:(int)arg1 ;
-(float)estimatedHeightForRow:(int)arg1 ;
-(id)titleForHeader;
-(id)cellForRow:(int)arg1 ;
-(void)setDelegate:(id<InboxTableViewGroupControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<InboxTableViewGroupControllerDelegate>)delegate;
-(char)visible;
-(id)tableView;
-(int)numberOfRows;
-(void)setVisible:(char)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)_localeChanged:(id)arg1 ;
@end

