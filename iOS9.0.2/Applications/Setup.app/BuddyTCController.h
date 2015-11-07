/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BuddyController.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>

@class RUIObjectModel, BuddyiOSTCController, BuddyWarrantyTCController, NSString;

@interface BuddyTCController : NSObject <BuddyController, RUIObjectModelDelegate> {

	id _delegate;
	RUIObjectModel* _objectModel;
	BuddyiOSTCController* _iOSTermsController;
	BuddyWarrantyTCController* _warrantyTermsController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)skip;
+(char)controllerNeedsToRun;
-(void)buddyTCSubController:(id)arg1 didFinishWithAgree:(char)arg2 ;
-(id)multiTermsController;
-(id)iOSTermsController;
-(id)warrantyTermsController;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)viewController;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(char)controllerAllowsNavigatingBack;
-(void)removeFromNavHierarchyOf:(id)arg1 ;
@end

