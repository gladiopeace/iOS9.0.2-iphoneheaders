/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface PLVideoPosterFrameView : UIView {

	UIImageView* _imageView;
	unsigned _scaleMode;

}

@property (nonatomic,readonly) CGRect imageFrame; 
-(void)setScaleMode:(unsigned)arg1 ;
-(CGRect)imageFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)image;
-(id)imageView;
@end

