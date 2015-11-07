/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSData, UIAlertController, NSString;

@interface AXScreenshotReporterDelegate : NSObject <UIAlertViewDelegate> {

	NSData* _screenshotData;
	UIAlertController* _alertController;

}

@property (nonatomic,retain) NSData * screenshotData;                          //@synthesize screenshotData=_screenshotData - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;              //@synthesize alertController=_alertController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setScreenshotData:(NSData *)arg1 ;
-(NSData *)screenshotData;
-(void)dealloc;
-(void)alertViewCancel:(id)arg1 ;
-(void)_cleanup;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
@end
