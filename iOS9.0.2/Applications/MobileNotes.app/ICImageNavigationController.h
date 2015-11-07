/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICAttachmentNavigationController.h>

@protocol ICImageAttachmentPresentationDelegate;
@class ICImageViewController;

@interface ICImageNavigationController : ICAttachmentNavigationController {

	id<ICImageAttachmentPresentationDelegate> _imageAttachmentPresentationDelegate;
	ICImageViewController* _imageViewController;

}

@property (assign,nonatomic,__weak) id<ICImageAttachmentPresentationDelegate> imageAttachmentPresentationDelegate;              //@synthesize imageAttachmentPresentationDelegate=_imageAttachmentPresentationDelegate - In the implementation block
@property (nonatomic,retain) ICImageViewController * imageViewController;                                                       //@synthesize imageViewController=_imageViewController - In the implementation block
-(id)imageForTransition;
-(id)initWithImageAttachmentPresentationDelegate:(id)arg1 ;
-(id)freeTransformableViewController;
-(CGRect)frameForFullscreenAttachmentInView:(id)arg1 ;
-(CGRect)contentsRectForInlineAttachment;
-(id)scrimColor;
-(void)setImageAttachmentPresentationDelegate:(id<ICImageAttachmentPresentationDelegate>)arg1 ;
-(id<ICImageAttachmentPresentationDelegate>)imageAttachmentPresentationDelegate;
-(char)shouldHideStatusBar;
-(void)setImageViewController:(ICImageViewController *)arg1 ;
-(ICImageViewController *)imageViewController;
@end

