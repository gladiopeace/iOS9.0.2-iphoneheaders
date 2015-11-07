/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/_SBUIWidgetHost.h>

@protocol SBWidgetViewControllerDelegate;
@class _SBUIWidgetViewController, NSString;

@interface SBAttributionWrapperViewController : UIViewController <_SBUIWidgetHost> {

	_SBUIWidgetViewController* _attributionViewController;
	id<SBWidgetViewControllerDelegate> _widgetDelegate;

}

@property (assign,nonatomic) id<SBWidgetViewControllerDelegate> widgetDelegate;              //@synthesize widgetDelegate=_widgetDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_newAttributionViewController;
+(id)_loadAttributionAppBundle;
-(id<SBWidgetViewControllerDelegate>)widgetDelegate;
-(void)setWidgetDelegate:(id<SBWidgetViewControllerDelegate>)arg1 ;
-(void)requestPresentationOfViewController:(id)arg1 presentationStyle:(int)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)requestLaunchOfURL:(id)arg1 ;
-(void)invalidatePreferredViewSize;
-(void)setVisibleWidgetsIDs:(id)arg1 ;
@end

