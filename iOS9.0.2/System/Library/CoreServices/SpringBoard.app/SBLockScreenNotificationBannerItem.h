/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBUIBannerItem.h>
#import <SpringBoard/SBDefaultBannerViewSource.h>
#import <libobjc.A.dylib/SBUIQuietModePlayability.h>

@protocol SBLockScreenActionHandler, SBLockScreenNotificationBannerItemDelegate;
@class SBAwayListItem, NSString;

@interface SBLockScreenNotificationBannerItem : SBUIBannerItem <SBDefaultBannerViewSource, SBUIQuietModePlayability> {

	SBAwayListItem* _listItem;
	id<SBLockScreenActionHandler> _lockedActionHandler;
	id<SBLockScreenNotificationBannerItemDelegate> _delegate;

}

@property (nonatomic,retain,readonly) SBAwayListItem * listItem;                                   //@synthesize listItem=_listItem - In the implementation block
@property (nonatomic,retain) id<SBLockScreenActionHandler> unlockActionHandler;                    //@synthesize lockedActionHandler=_lockedActionHandler - In the implementation block
@property (assign,nonatomic) id<SBLockScreenNotificationBannerItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithListItem:(id)arg1 ;
-(id)sourceDate;
-(id)attachmentImage;
-(id)lockScreenActionContext;
-(void)setUnlockActionHandler:(id<SBLockScreenActionHandler>)arg1 ;
-(id)suppressedMessage;
-(char)showMessagePreview;
-(id<SBLockScreenActionHandler>)unlockActionHandler;
-(void)setDelegate:(id<SBLockScreenNotificationBannerItemDelegate>)arg1 ;
-(void)dealloc;
-(id<SBLockScreenNotificationBannerItemDelegate>)delegate;
-(/*^block*/id)action;
-(id)title;
-(id)subtitle;
-(id)sortDate;
-(id)message;
-(id)iconImage;
-(id)accessoryIconMask;
-(char)shouldPlayLightsAndSirens;
-(char)inertWhenLocked;
-(id)attachmentText;
-(char)isCritical;
-(SBAwayListItem *)listItem;
-(char)overridesQuietMode;
-(char)overridesPocketMode;
-(char)canShowWhileLocked;
@end

