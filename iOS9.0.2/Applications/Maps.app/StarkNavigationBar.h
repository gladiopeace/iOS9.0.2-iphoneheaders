/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UINavigationBar.h>

@class UIView;

@interface StarkNavigationBar : UINavigationBar {

	UIView* _overrideFocusView;

}

@property (assign,nonatomic,__weak) UIView * overrideFocusView;              //@synthesize overrideFocusView=_overrideFocusView - In the implementation block
-(UIView *)overrideFocusView;
-(void)setOverrideFocusView:(UIView *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)preferredFocusedView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setItems:(id)arg1 animated:(char)arg2 ;
@end

