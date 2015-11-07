/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <Social/SLSheetImagePreviewView.h>

@class UIView, UIImageView;

@interface SLSheetBevelledImageView : SLSheetImagePreviewView {

	UIView* _placeholderPreviewView;
	UIImageView* _placeholderGlyphView;
	char _needsURLPlaceholderImage;

}

@property (assign,nonatomic) char needsURLPlaceholderImage;              //@synthesize needsURLPlaceholderImage=_needsURLPlaceholderImage - In the implementation block
-(char)needsURLPlaceholderImage;
-(char)generatePreviewImageFromAttachments;
-(void)ensurePlaceholderPreviewImage;
-(void)setNeedsURLPlaceholderImage:(char)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
@end

