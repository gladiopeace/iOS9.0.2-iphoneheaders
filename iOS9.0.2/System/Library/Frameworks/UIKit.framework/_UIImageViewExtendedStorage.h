/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIImage, NSArray;

@interface _UIImageViewExtendedStorage : NSObject {

	char _highlighted;
	UIImage* _image;
	UIImage* _highlightedImage;
	NSArray* _animationImages;
	NSArray* _highlightedAnimationImages;
	double _animationDuration;
	int _animationRepeatCount;
	int _drawMode;
	int _defaultRenderingMode;
	char _masksTemplateImages;
	unsigned _templateImageRenderingEffects;
	UIImage* _displayedImage;
	UIImage* _displayedHighlightedImage;

}
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
@end

