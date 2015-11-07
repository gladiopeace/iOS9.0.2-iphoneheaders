/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKView.h>

@class UIImageView, UIView, SAGKImageLinkedAnswer;

@interface SiriGKImageLinkView : SiriGKView {

	UIImageView* _imageView;
	UIImageView* _playIconImageView;
	UIView* _backgroundTintView;
	UIView* _placeholderView;
	char _isVideoResult;
	SAGKImageLinkedAnswer* _imageLinkedAnswer;

}
-(void)_configureWithImage:(id)arg1 asVideoResult:(char)arg2 ;
-(id)_applyBlurredPlayIconToImage:(id)arg1 ;
-(id)initWithImageLinkedAnswer:(id)arg1 safariBackURL:(id)arg2 isVideoResult:(char)arg3 usingPersistentStore:(id)arg4 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)isSelectable;
-(char)isFullWidth;
-(id)imageResource;
@end

