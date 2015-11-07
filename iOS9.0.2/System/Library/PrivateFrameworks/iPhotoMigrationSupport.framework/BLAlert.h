/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BLAlertViewControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class BLAlertAction, NSArray, BLAlertViewController, NSString;

@interface BLAlert : NSObject <BLAlertViewControllerDelegate, UIAlertViewDelegate> {

	BLAlertAction* _cancelAction;
	NSArray* _actions;
	/*^block*/id _conditionBlock;
	id _context;
	/*^block*/id _executionBlock;
	char _showing;
	int _options;
	BLAlertViewController* _alertView;
	BLAlert* _strongSelf;

}

@property (copy) id conditionBlock;                                 //@synthesize conditionBlock=_conditionBlock - In the implementation block
@property (retain) id context;                                      //@synthesize context=_context - In the implementation block
@property (retain) BLAlert * strongSelf;                            //@synthesize strongSelf=_strongSelf - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pendingAlerts;
+(id)popPendingAlert;
+(void)pushPendingAlert:(id)arg1 ;
+(void)performWithTitle:(id)arg1 message:(id)arg2 action:(id)arg3 ;
-(BLAlert *)strongSelf;
-(void)setStrongSelf:(BLAlert *)arg1 ;
-(void)hide;
-(void)show;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)context;
-(void)setMessage:(id)arg1 ;
-(void)setContext:(id)arg1 ;
-(char)isShowing;
-(void)alertViewController:(id)arg1 didPressButtonAtIndex:(int)arg2 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelAction:(id)arg3 otherActions:(id)arg4 ;
-(id)conditionBlock;
-(void)showPendingAlertIfNeeded;
-(char)wantSingular;
-(void)cancelDelayedHide;
-(void)hideWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 options:(int)arg3 cancelAction:(id)arg4 otherActions:(id)arg5 ;
-(void)showWithExecutionBlock:(/*^block*/id)arg1 ;
-(void)hideWithDelay:(double)arg1 ;
-(void)hideWithDelay:(double)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setConditionBlock:(id)arg1 ;
-(void)hide:(char)arg1 ;
@end

