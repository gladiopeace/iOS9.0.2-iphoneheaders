/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class UIViewController;

@interface UIPrintActivity : UIActivity {

	UIViewController* _wrapperViewController;

}

@property (retain) UIViewController * wrapperViewController;              //@synthesize wrapperViewController=_wrapperViewController - In the implementation block
-(id)activityType;
-(void)activityDidFinish:(char)arg1 ;
-(id)printInteractionController;
-(id)_activityImage;
-(id)activityTitle;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)printInteractionControllerParentViewController:(id)arg1 ;
-(id)_embeddedActivityViewController;
-(void)setWrapperViewController:(UIViewController *)arg1 ;
-(void)cancelPrintOptions;
-(UIViewController *)wrapperViewController;
@end

