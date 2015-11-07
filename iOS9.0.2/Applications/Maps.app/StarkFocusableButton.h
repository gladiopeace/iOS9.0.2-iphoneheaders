/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MapsLargerHitTargetButton.h>

@class UILongPressGestureRecognizer, UIColor;

@interface StarkFocusableButton : MapsLargerHitTargetButton {

	UILongPressGestureRecognizer* _recognizer;
	char _modifiesBackgroundColor;
	UIColor* _focusedTintColor;
	UIColor* _nonFocusedTintColor;
	UIColor* _focusedBackgroundColor;
	UIColor* _nonFocusedBackgroundColor;

}

@property (nonatomic,retain) UIColor * nonFocusedTintColor;                    //@synthesize nonFocusedTintColor=_nonFocusedTintColor - In the implementation block
@property (nonatomic,retain) UIColor * focusedTintColor;                       //@synthesize focusedTintColor=_focusedTintColor - In the implementation block
@property (nonatomic,retain) UIColor * focusedBackgroundColor;                 //@synthesize focusedBackgroundColor=_focusedBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * nonFocusedBackgroundColor;              //@synthesize nonFocusedBackgroundColor=_nonFocusedBackgroundColor - In the implementation block
@property (assign,nonatomic) char modifiesBackgroundColor;                     //@synthesize modifiesBackgroundColor=_modifiesBackgroundColor - In the implementation block
-(void)tappedButton:(id)arg1 ;
-(void)setNonFocusedBackgroundColor:(UIColor *)arg1 ;
-(void)setNonFocusedTintColor:(UIColor *)arg1 ;
-(UIColor *)focusedTintColor;
-(UIColor *)focusedBackgroundColor;
-(char)modifiesBackgroundColor;
-(void)setFocusedTintColor:(UIColor *)arg1 ;
-(void)setModifiesBackgroundColor:(char)arg1 ;
-(UIColor *)nonFocusedTintColor;
-(void)setFocusedBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)nonFocusedBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)canBecomeFocused;
@end

