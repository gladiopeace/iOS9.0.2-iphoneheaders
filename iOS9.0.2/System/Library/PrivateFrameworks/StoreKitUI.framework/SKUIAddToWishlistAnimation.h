/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIImage, UINavigationButton;

@interface SKUIAddToWishlistAnimation : NSObject {

	/*^block*/id _completionBlock;
	UIImage* _image;
	UINavigationButton* _targetButton;

}
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(id)initWithImage:(id)arg1 buttonItem:(id)arg2 navigationBar:(id)arg3 ;
-(void)animateWithCompletionBlock:(/*^block*/id)arg1 ;
@end

