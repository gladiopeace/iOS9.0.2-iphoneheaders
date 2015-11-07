/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class UIViewController, NSDictionary, NSString;

@interface BatteryUsageRadarComposeViewController : NSObject <UIAlertViewDelegate> {

	UIViewController* _parentViewController;
	NSDictionary* _currentDictionary;

}

@property (nonatomic,retain) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) NSDictionary * currentDictionary;                     //@synthesize currentDictionary=_currentDictionary - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)hasRadarCompose;
-(id)initWithParentView:(id)arg1 andDictionary:(id)arg2 ;
-(void)showRadarComposeAlert;
-(void)setCurrentDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)currentDictionary;
-(UIViewController *)parentViewController;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)setParentViewController:(UIViewController *)arg1 ;
@end

