/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKContentViewControllerDelegate
@optional
-(void)contentView:(id)arg1 unhandledClickAtPoint:(CGPoint)arg2;
-(void)contentViewController:(id)arg1 showHighlightingMenuForAnnotation:(id)arg2;
-(char)isAnnotationSharingSupportedForContentViewController:(id)arg1;
-(void)contentViewController:(id)arg1 shareAnnotation:(id)arg2 completion:(/*^block*/id)arg3;
-(void)contentViewController:(id)arg1 showNoteForAnnotation:(id)arg2;
-(void)contentViewFailedToLoad:(id)arg1 error:(id)arg2;
-(void)contentViewController:(id)arg1 goToURL:(id)arg2;
-(void)contentViewDidDraw:(id)arg1;
-(void)contentView:(id)arg1 didSelectMediaOverlayElement:(id)arg2;
-(void)contentViewControllerDidEnterFullscreen:(id)arg1;
-(void)contentViewControllerDidExitFullscreen:(id)arg1;
-(void)contentViewControllerAnnotationsDidChange:(id)arg1;
-(void)contentViewControllerAdornmentsDidChange:(id)arg1;
-(void)contentViewControllerDidFinishLayout:(id)arg1;
-(void)contentViewReady:(id)arg1;
-(void)contentViewControllerDidChangeLocation:(id)arg1;
-(void)contentViewController:(id)arg1 goToLocation:(id)arg2;
-(void)contentViewController:(id)arg1 showAlertController:(id)arg2 fromRect:(CGRect)arg3 animated:(char)arg4;

@end

