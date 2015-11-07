/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNAvatarCardController.h>
#import <libobjc.A.dylib/CNAvatarCardViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, CNAvatarCardViewController, UIGestureRecognizer, NSString;

@interface CNAvatarCardCustomController : CNAvatarCardController <CNAvatarCardViewControllerDelegate, UIGestureRecognizerDelegate> {

	UIView* _sourceView;
	CNAvatarCardViewController* _cardViewController;
	UIGestureRecognizer* _orbGestureRecognizer;

}

@property (nonatomic,retain) CNAvatarCardViewController * cardViewController;              //@synthesize cardViewController=_cardViewController - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * orbGestureRecognizer;                   //@synthesize orbGestureRecognizer=_orbGestureRecognizer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)bypassActionValidation;
-(id)actionCategories;
-(void)setCardViewController:(CNAvatarCardViewController *)arg1 ;
-(CNAvatarCardViewController *)cardViewController;
-(UIGestureRecognizer *)orbGestureRecognizer;
-(void)showCard:(id)arg1 ;
-(void)setOrbGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(id)cardViewController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(void)cardViewController:(id)arg1 willShowActions:(id)arg2 ;
-(void)cardViewControllerWillDismiss:(id)arg1 ;
-(void)cardViewControllerDidDismiss:(id)arg1 ;
-(void)dismissAnimated:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)sourceView;
-(void)setSourceView:(id)arg1 ;
-(char)isVisible;
-(void)presentAnimated:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setBypassActionValidation:(char)arg1 ;
-(void)setContacts:(id)arg1 ;
-(void)setActionCategories:(id)arg1 ;
@end

