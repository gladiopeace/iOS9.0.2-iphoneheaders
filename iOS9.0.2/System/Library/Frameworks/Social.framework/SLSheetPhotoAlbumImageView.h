/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <Social/SLSheetImagePreviewView.h>

@class CALayer, NSMutableArray, UILabel;

@interface SLSheetPhotoAlbumImageView : SLSheetImagePreviewView {

	CALayer* _frameLayer;
	CALayer* _glossLayer;
	NSMutableArray* _frameViews;
	int _imageQuantity;
	int _numPreviewImagesAdded;
	UILabel* _imageCountLabel;
	char _allAttachmentsAreImages;

}
+(unsigned)displayedFrameMaximum;
-(void)setPreviewImage:(id)arg1 forAttachment:(id)arg2 ;
-(id)_itemCountString;
-(void)addPreviewImage:(id)arg1 ;
-(char)_shouldDisplayImageCountLabel;
-(id)initWithPrincipalAttachments:(id)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)sizeToFit;
-(CGSize)intrinsicContentSize;
-(void)setItemCountString:(id)arg1 ;
@end

