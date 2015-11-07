/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WLCardViewDelegate <NSObject>
@optional
-(void)passViewTapped:(id)arg1;
-(char)passViewShouldFlip:(id)arg1;
-(char)passViewShouldResize:(id)arg1;
-(char)passViewBackGrowsCentered:(id)arg1;
-(void)passView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
-(char)passView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
-(void)passView:(id)arg1 flipButtonPressedForPass:(id)arg2;
-(void)passView:(id)arg1 resizeButtonPressedForPass:(id)arg2;
-(void)passViewWillFlip:(id)arg1 animated:(char)arg2;
-(void)passViewDidFlip:(id)arg1 animated:(char)arg2;
-(void)passViewDidResize:(id)arg1 animated:(char)arg2;

@end

