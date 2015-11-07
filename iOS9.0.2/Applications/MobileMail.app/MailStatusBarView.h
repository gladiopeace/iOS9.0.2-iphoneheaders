/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@protocol MailStatusBarViewDelegate;
@class UIProgressView, MailStatusProgressBarView, MailStatusUpdateView, MailStatusIndeterminateView;

@interface MailStatusBarView : UIView {

	id<MailStatusBarViewDelegate> _delegate;
	UIProgressView* _progressView;
	MailStatusProgressBarView* _progressStatusView;
	MailStatusUpdateView* _updateView;
	MailStatusIndeterminateView* _indeterminateView;
	char _showProgressView;
	unsigned _state;

}

@property (assign,nonatomic) unsigned state; 
-(void)_addOrRemoveProgressViewIfNecessary;
-(void)_updateFrameForSuperview;
-(void)switchSubviewToView:(id)arg1 showProgress:(char)arg2 ;
-(void)showIndeterminateStatus;
-(void)showProgressBar;
-(void)showUpdateStatus;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)didMoveToSuperview;
-(void)updateForMiniBarState:(char)arg1 ;
@end

