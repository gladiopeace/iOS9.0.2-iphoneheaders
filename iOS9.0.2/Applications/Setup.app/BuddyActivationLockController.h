/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/SetupChoiceController.h>
#import <libobjc.A.dylib/BuddyController.h>

@class NSString;

@interface BuddyActivationLockController : SetupChoiceController <BuddyController>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)controllerNeedsToRun;
-(char)wantsNextButton;
-(id)subTitleText;
-(id)init;
-(void)viewWillAppear:(char)arg1 ;
-(id)titleText;
-(void)controllerDone;
@end

