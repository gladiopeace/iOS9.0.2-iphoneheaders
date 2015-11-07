/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/MPUExtrasLoadingViewDelegate.h>
#import <libobjc.A.dylib/IKAppNavigationController.h>

@class MPUExtrasLoadingView, UIViewController, MPUExtrasContext, MPUExtrasMainTemplateViewController, NSString;

@interface MPUExtrasNavigationController : UINavigationController <MPUExtrasLoadingViewDelegate, IKAppNavigationController> {

	MPUExtrasLoadingView* _loadingView;
	UIViewController* _emptyViewController;
	MPUExtrasContext* _context;
	char _clearStackOnPush;

}

@property (readonly) MPUExtrasMainTemplateViewController * mainTemplateViewController; 
@property (nonatomic,__weak,readonly) MPUExtrasContext * context;                                   //@synthesize context=_context - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPUExtrasContext *)context;
-(void)viewDidLoad;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(void)setViewControllers:(id)arg1 animated:(char)arg2 ;
-(void)willShowViewController:(id)arg1 animated:(char)arg2 ;
-(id)initWithContext:(id)arg1 ;
-(MPUExtrasMainTemplateViewController *)mainTemplateViewController;
-(void)_installDoneButtonOnNavigationItem:(id)arg1 ;
-(void)_presentDialogTemplate:(id)arg1 ;
-(id)_viewControllerForDocument:(id)arg1 index:(int*)arg2 ;
-(void)_installBackButtonOnNavigationItem:(id)arg1 withTitle:(id)arg2 ;
-(void)_dismissViewController:(id)arg1 ;
-(void)loadingView:(id)arg1 documentDidUpdate:(id)arg2 options:(id)arg3 ;
-(void)applyMainTemplateOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(void)finalizeMainTemplateOffset:(char)arg1 ;
-(void)setClearsStackOnNextPush;
-(id)documents;
-(void)pushDocument:(id)arg1 options:(id)arg2 ;
-(void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3 ;
-(void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3 ;
-(void)popDocument;
-(void)popToDocument:(id)arg1 ;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1 ;
@end

