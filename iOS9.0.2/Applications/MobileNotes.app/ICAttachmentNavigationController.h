/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UINavigationController.h>

@protocol ICAttachmentPresentationDelegate;
@class UIBarButtonItem, UIView, ICFreeTransformableViewController;

@interface ICAttachmentNavigationController : UINavigationController {

	id<ICAttachmentPresentationDelegate> _attachmentPresentationDelegate;
	UIBarButtonItem* _goToNoteButton;

}

@property (__weak) id<ICAttachmentPresentationDelegate> attachmentPresentationDelegate;                          //@synthesize attachmentPresentationDelegate=_attachmentPresentationDelegate - In the implementation block
@property (readonly) UIView * attachmentView; 
@property (retain) UIBarButtonItem * goToNoteButton;                                                             //@synthesize goToNoteButton=_goToNoteButton - In the implementation block
@property (nonatomic,readonly) ICFreeTransformableViewController * freeTransformableViewController; 
-(UIBarButtonItem *)goToNoteButton;
-(id)imageForTransition;
-(void)setGoToNoteButton:(UIBarButtonItem *)arg1 ;
-(ICFreeTransformableViewController *)freeTransformableViewController;
-(void)setAttachmentPresentationDelegate:(id<ICAttachmentPresentationDelegate>)arg1 ;
-(CGRect)contentsRectInAttachmentViewForBounds:(CGRect)arg1 flipped:(char)arg2 ;
-(void)willTransitionOut;
-(void)didCancelTransitionTo;
-(CGRect)frameForFullscreenAttachmentInView:(id)arg1 ;
-(CGRect)contentsRectForInlineAttachment;
-(id)scrimColor;
-(id<ICAttachmentPresentationDelegate>)attachmentPresentationDelegate;
-(char)shouldHideStatusBar;
-(id)initWithAttachmentPresentationDelegate:(id)arg1 ;
-(char)prefersStatusBarHidden;
-(UIView *)attachmentView;
@end

