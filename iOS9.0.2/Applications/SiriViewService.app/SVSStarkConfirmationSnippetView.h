/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <UIKit/UIView.h>

@protocol SVSStarkConfirmationSnippetViewDelegate;
@class NSArray;

@interface SVSStarkConfirmationSnippetView : UIView {

	id<SVSStarkConfirmationSnippetViewDelegate> _delegate;
	NSArray* _confirmationButtons;
	float _confirmationButtonYOrigin;

}

@property (nonatomic,readonly) NSArray * confirmationButtons;                                                //@synthesize confirmationButtons=_confirmationButtons - In the implementation block
@property (assign,nonatomic,__weak) id<SVSStarkConfirmationSnippetViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=_confirmationButtonYOrigin,nonatomic) float confirmationButtonYOrigin;              //@synthesize confirmationButtonYOrigin=_confirmationButtonYOrigin - In the implementation block
-(NSArray *)confirmationButtons;
-(id)initWithFrame:(CGRect)arg1 confirmationButtons:(id)arg2 delegate:(id)arg3 ;
-(void)enableReadAgainButton;
-(float)_confirmationButtonYOriginInBounds:(CGRect)arg1 ;
-(void)confirmationButton:(id)arg1 tappedWithHandler:(/*^block*/id)arg2 ;
-(void)setConfirmationButtonYOrigin:(float)arg1 ;
-(float)_confirmationButtonYOrigin;
-(void)setDelegate:(id<SVSStarkConfirmationSnippetViewDelegate>)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<SVSStarkConfirmationSnippetViewDelegate>)delegate;
-(id)preferredFocusedView;
@end

