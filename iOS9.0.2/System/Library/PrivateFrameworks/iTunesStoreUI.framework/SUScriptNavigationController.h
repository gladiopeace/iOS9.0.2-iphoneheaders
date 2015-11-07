/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class UINavigationController, SUScriptNavigationBar, SUScriptViewController;

@interface SUScriptNavigationController : SUScriptViewController {

	UINavigationController* _navController;

}

@property (readonly) SUScriptNavigationBar * navigationBar; 
@property (assign) char navigationBarHidden; 
@property (copy) id toolbarHidden; 
@property (readonly) SUScriptViewController * topViewController; 
@property (retain) id viewControllers; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(char)navigationBarHidden;
-(void)dealloc;
-(SUScriptNavigationBar *)navigationBar;
-(SUScriptViewController *)topViewController;
-(void)popViewControllerAnimated:(char)arg1 ;
-(void)setNavigationBar:(SUScriptNavigationBar *)arg1 ;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(void)setViewControllers:(id)arg1 animated:(char)arg2 ;
-(void)setNavigationBarHidden:(char)arg1 animated:(char)arg2 ;
-(void)setToolbarHidden:(char)arg1 animated:(char)arg2 ;
-(id)viewControllers;
-(void)setToolbarHidden:(id)arg1 ;
-(void)setViewControllers:(id)arg1 ;
-(void)setNavigationBarHidden:(char)arg1 ;
-(void)popToRootViewControllerAnimated:(char)arg1 ;
-(void)_setViewControllers:(id)arg1 animated:(char)arg2 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)newNativeViewController;
-(id)initWithRootScriptViewController:(id)arg1 clientInterface:(id)arg2 ;
-(void)didPerformBatchedInvocations;
-(id)_navigationController;
-(void)willPerformBatchedInvocations;
-(void)_popToRootViewControllerAnimated:(char)arg1 ;
-(void)_popViewControllerAnimated:(char)arg1 ;
-(void)_pushViewController:(id)arg1 animated:(char)arg2 ;
-(id)_filteredViewControllers;
-(id)_copyNativeViewControllersFromScriptViewControllers:(id)arg1 ;
-(void)setTopViewController:(SUScriptViewController *)arg1 ;
-(id)toolbarHidden;
@end

