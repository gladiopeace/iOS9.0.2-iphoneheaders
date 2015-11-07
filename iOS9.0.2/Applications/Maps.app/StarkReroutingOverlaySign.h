/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel, UIView, MapsAutoLayoutContext;

@interface StarkReroutingOverlaySign : UIView {

	UIActivityIndicatorView* _activityIndicator;
	UILabel* _reroutingLabel;
	UILabel* _messageLabel;
	UIView* _container;
	MapsAutoLayoutContext* _layoutContext;
	char _showsDataConnectionMessage;

}

@property (assign,nonatomic) char showsDataConnectionMessage;              //@synthesize showsDataConnectionMessage=_showsDataConnectionMessage - In the implementation block
-(void)setShowsDataConnectionMessage:(char)arg1 ;
-(void)setShowsDataConnectionMessage:(char)arg1 animated:(char)arg2 ;
-(char)showsDataConnectionMessage;
-(void)_updateStyling;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
@end

