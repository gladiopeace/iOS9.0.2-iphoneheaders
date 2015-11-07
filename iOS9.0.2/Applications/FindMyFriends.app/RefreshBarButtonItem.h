/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyFriends/FindMyFriends-Structs.h>
#import <UIKit/UIBarButtonItem.h>

@class RefreshWrapperButton, TintedActivityIndicatorView, UIImageView;

@interface RefreshBarButtonItem : UIBarButtonItem {

	RefreshWrapperButton* _wrapperButton;
	TintedActivityIndicatorView* _aiv;
	UIImageView* _imageView;
	id _locateNotification;

}

@property (nonatomic,retain) RefreshWrapperButton * wrapperButton;              //@synthesize wrapperButton=_wrapperButton - In the implementation block
@property (nonatomic,retain) TintedActivityIndicatorView * aiv;                 //@synthesize aiv=_aiv - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                           //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) id locateNotification;                             //@synthesize locateNotification=_locateNotification - In the implementation block
-(void)updateLocateInProgress;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setEnabled:(char)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(id)accessibilityLabel;
-(UIImageView *)imageView;
-(char)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(id)accessibilityHint;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setAiv:(TintedActivityIndicatorView *)arg1 ;
-(void)setWrapperButton:(RefreshWrapperButton *)arg1 ;
-(RefreshWrapperButton *)wrapperButton;
-(TintedActivityIndicatorView *)aiv;
-(id)locateNotification;
-(void)setLocateNotification:(id)arg1 ;
@end

