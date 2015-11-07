/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIViewController, UIPopoverController, NSString;

@interface _UITextServiceSession : NSObject <UIPopoverControllerDelegate> {

	int _type;
	UIViewController* _modalViewController;
	UIPopoverController* _popoverController;
	char _isTextEffectsWindow;
	char _dismissed;
	/*^block*/id _dismissedHandler;

}

@property (nonatomic,copy) id dismissedHandler;                     //@synthesize dismissedHandler=_dismissedHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)canShowTextServices;
+(id)showServiceForText:(id)arg1 type:(int)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
+(id)textServiceSessionForType:(int)arg1 ;
-(id)init;
-(int)type;
-(id)initWithType:(int)arg1 ;
-(void)dismissTextServiceAnimated:(char)arg1 ;
-(void)setDismissedHandler:(id)arg1 ;
-(char)isDisplaying;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)_endSession;
-(void)sessionDidDismiss;
-(id)dismissedHandler;
@end

