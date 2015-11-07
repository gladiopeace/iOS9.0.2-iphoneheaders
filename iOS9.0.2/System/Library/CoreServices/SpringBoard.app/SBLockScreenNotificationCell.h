/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBNotificationCell.h>

@protocol SBAwayListCellButtonHandler, UIScrollViewDelegate;
@class SBLockScreenNotificationScrollView, SBLockScreenActionContext, UILabel, UIScrollView;

@interface SBLockScreenNotificationCell : SBNotificationCell {

	char _isTopCell;
	float _currentContentAlpha;
	id<SBAwayListCellButtonHandler> _actionButtonHandler;
	SBLockScreenNotificationScrollView* _contentScrollView;
	SBLockScreenActionContext* _lockScreenActionContext;
	UILabel* _unlockTextLabel;
	id<UIScrollViewDelegate> _delegate;
	char _resetsScrollOnPluginWillDisable;
	float _contentScrollViewWidth;

}

@property (assign,nonatomic) id<UIScrollViewDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char isTopCell;                                                   //@synthesize isTopCell=_isTopCell - In the implementation block
@property (assign,nonatomic) float contentScrollViewWidth;                                     //@synthesize contentScrollViewWidth=_contentScrollViewWidth - In the implementation block
@property (nonatomic,retain) SBLockScreenActionContext * lockScreenActionContext;              //@synthesize lockScreenActionContext=_lockScreenActionContext - In the implementation block
@property (nonatomic,retain,readonly) UIScrollView * contentScrollView;                        //@synthesize contentScrollView=_contentScrollView - In the implementation block
@property (assign,nonatomic) char resetsScrollOnPluginWillDisable;                             //@synthesize resetsScrollOnPluginWillDisable=_resetsScrollOnPluginWillDisable - In the implementation block
+(id)defaultColorForRelevanceDate;
+(id)defaultColorForEventDate;
+(id)defaultColorForPrimaryText;
+(id)defaultColorForSubtitleText;
+(id)defaultColorForSecondaryText;
+(char)wantsUnlockActionText;
+(float)unlockLineBaselineOffsetFromPreviousLine;
+(float)rowHeightForTitle:(id)arg1 subtitle:(id)arg2 body:(id)arg3 maxLines:(unsigned)arg4 attachmentSize:(CGSize)arg5 secondaryContentSize:(CGSize)arg6 datesVisible:(char)arg7 rowWidth:(float)arg8 includeUnlockActionText:(char)arg9 ;
+(float)lastLineBottomPadding;
-(char)shouldVerticallyCenterContent;
-(void)setRelevanceDateLabel:(id)arg1 ;
-(SBLockScreenActionContext *)lockScreenActionContext;
-(id)_secondaryContentView;
-(void)setLockScreenActionContext:(SBLockScreenActionContext *)arg1 ;
-(void)setResetsScrollOnPluginWillDisable:(char)arg1 ;
-(void)_notePluginWillDisable:(id)arg1 ;
-(void)scrollToOriginAnimated:(char)arg1 ;
-(id)_vibrantTextColor;
-(void)_updateUnlockText:(id)arg1 ;
-(id)_buttonWithLabel:(id)arg1 ;
-(void)_handleActionButtonPress:(id)arg1 ;
-(float)_unlockTextOriginY;
-(void)resetScrollView;
-(void)setContentScrollViewWidth:(float)arg1 ;
-(void)setIsTopCell:(char)arg1 ;
-(void)setButtonLabel:(id)arg1 handler:(id)arg2 ;
-(char)shouldAnimateHintForTouchInCell:(CGPoint)arg1 ;
-(float)contentScrollViewWidth;
-(char)resetsScrollOnPluginWillDisable;
-(char)isTopCell;
-(void)setContentAlpha:(float)arg1 ;
-(void)setDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<UIScrollViewDelegate>)delegate;
-(void)prepareForReuse;
-(int)_separatorBackdropOverlayBlendMode;
-(void)_setSeparatorBackdropOverlayBlendMode:(int)arg1 ;
-(UIScrollView *)contentScrollView;
@end

