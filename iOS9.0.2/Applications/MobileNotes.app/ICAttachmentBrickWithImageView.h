/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICAttachmentBrickView.h>

@class UIView, UIImageView;

@interface ICAttachmentBrickWithImageView : ICAttachmentBrickView {

	char _showAsFileIcon;
	UIView* _imageContainerView;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIView * imageContainerView;              //@synthesize imageContainerView=_imageContainerView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) char showAsFileIcon;                      //@synthesize showAsFileIcon=_showAsFileIcon - In the implementation block
+(UIColor*)imageBorderColor;
+(id)thumbnailCache;
-(void)updateContentFromAttachment;
-(void)setImageInset:(float)arg1 ;
-(void)updateImageOutline;
-(void)setIconImage:(UIImage*)arg1 contentMode:(unsigned)arg2 ;
-(void)setIconImage:(UIImage*)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIView*)iconView;
-(UIView *)imageContainerView;
-(void)setImageContainerView:(UIView *)arg1 ;
-(char)showAsFileIcon;
-(void)setShowAsFileIcon:(char)arg1 ;
-(void)attachmentPreviewImagesDidUpdate:(id)arg1 ;
@end

