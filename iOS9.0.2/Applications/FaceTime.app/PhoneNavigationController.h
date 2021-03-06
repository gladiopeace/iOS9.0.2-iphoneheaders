/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <UIKit/UINavigationController.h>
#import <FaceTime/PhoneTabViewController.h>

@protocol PhoneTabViewController;
@class UIViewController, NSString;

@interface PhoneNavigationController : UINavigationController <PhoneTabViewController> {

	UIViewController*<PhoneTabViewController> _rootController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tabBarIconImage;
+(id)tabBarIconImageSelected;
+(id)tabBarIconName;
+(int)tabViewType;
+(char)_isViewSizeFullScreen:(id)arg1 inWindow:(id)arg2 ;
+(id)defaultPNGName;
+(SCD_Struct_Ph0)badge;
-(char)shouldSnapshot;
-(void)prepareForSnapshot;
-(void)_updateRootViewController;
-(void)dealloc;
-(id)rootViewController;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(void)presentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void)setViewControllers:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
@end

