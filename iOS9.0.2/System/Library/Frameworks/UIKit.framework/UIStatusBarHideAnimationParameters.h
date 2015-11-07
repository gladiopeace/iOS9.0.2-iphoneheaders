/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIStatusBarAnimationParameters.h>

@interface UIStatusBarHideAnimationParameters : UIStatusBarAnimationParameters {

	int _hideAnimation;
	float _additionalSlideHeight;

}

@property (assign,nonatomic) int hideAnimation;                        //@synthesize hideAnimation=_hideAnimation - In the implementation block
@property (assign,nonatomic) float additionalSlideHeight;              //@synthesize additionalSlideHeight=_additionalSlideHeight - In the implementation block
-(id)initWithDefaultParameters;
-(void)setHideAnimation:(int)arg1 ;
-(int)hideAnimation;
-(char)shouldAnimate;
-(float)additionalSlideHeight;
-(void)setAdditionalSlideHeight:(float)arg1 ;
@end

