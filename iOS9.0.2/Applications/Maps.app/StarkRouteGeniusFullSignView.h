/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@protocol StarkRouteGeniusFullSignViewDelegate;
@class StarkFocusableButton, UILabel, UIView, StarkRouteInfoView, MapsAutoLayoutContext, UIActivityIndicatorView, NSString, MNGuidanceETA;

@interface StarkRouteGeniusFullSignView : UIView {

	StarkFocusableButton* _yesButton;
	StarkFocusableButton* _noButton;
	UILabel* _titleLabel;
	UILabel* _addressLabel;
	UIView* _horizontalKeyline;
	UIView* _verticalKeyline;
	StarkRouteInfoView* _infoView;
	MapsAutoLayoutContext* _layoutContext;
	UIView* _labelContainerView;
	UIActivityIndicatorView* _activityIndicator;
	char _loading;
	char _disabled;
	id<StarkRouteGeniusFullSignViewDelegate> _delegate;
	NSString* _title;
	NSString* _address;
	MNGuidanceETA* _latestETA;

}

@property (assign,nonatomic,__weak) id<StarkRouteGeniusFullSignViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title;                                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * address;                                                      //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) MNGuidanceETA * latestETA;                                             //@synthesize latestETA=_latestETA - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                         //@synthesize loading=_loading - In the implementation block
@property (assign,getter=isDisabled,nonatomic) char disabled;                                       //@synthesize disabled=_disabled - In the implementation block
+(char)requiresConstraintBasedLayout;
-(void)startRoute;
-(MNGuidanceETA *)latestETA;
-(void)setLatestETA:(MNGuidanceETA *)arg1 ;
-(void)cancelRoute;
-(NSString *)address;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<StarkRouteGeniusFullSignViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id<StarkRouteGeniusFullSignViewDelegate>)delegate;
-(NSString *)title;
-(id)preferredFocusedView;
-(void)updateConstraints;
-(void)setDisabled:(char)arg1 ;
-(char)isLoading;
-(void)setAddress:(NSString *)arg1 ;
-(void)setLoading:(char)arg1 ;
-(char)isDisabled;
@end

