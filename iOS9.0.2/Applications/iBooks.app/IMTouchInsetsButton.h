/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UIButton.h>

@interface IMTouchInsetsButton : UIButton {

	char _titleDoesNotFollowTintColor;
	UIEdgeInsets _touchInsets;

}

@property (assign,nonatomic) UIEdgeInsets touchInsets;                      //@synthesize touchInsets=_touchInsets - In the implementation block
@property (assign,nonatomic) char titleDoesNotFollowTintColor;              //@synthesize titleDoesNotFollowTintColor=_titleDoesNotFollowTintColor - In the implementation block
-(void)setTitleDoesNotFollowTintColor:(char)arg1 ;
-(char)titleDoesNotFollowTintColor;
-(void)setTouchInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)touchInsets;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
@end

