/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABFMFActionButtonsDelegate.h>

@class ABUnknownPersonViewController, UIButton, NSString;

@interface ABFMFActionButtons : NSObject <ABFMFActionButtonsDelegate> {

	ABUnknownPersonViewController* _upvc;
	UIButton* _messageButton;
	UIButton* _facetimeButton;
	UIButton* _callButton;

}

@property (assign,nonatomic) void* displayedPerson; 
@property (nonatomic,readonly) char hasTelephonyCapability; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)hasTelephonyCapability;
-(void)showFMFMessageButton:(char)arg1 withAction:(id)arg2 ;
-(void)showFMFFacetimeButton:(char)arg1 withAction:(id)arg2 ;
-(void)showFMFCallButton:(char)arg1 withAction:(id)arg2 ;
-(id)initWithMessageButton:(id)arg1 facetimeButton:(id)arg2 callButton:(id)arg3 ;
-(void)setDisplayedPerson:(void*)arg1 ;
-(void)dealloc;
-(id)init;
-(void*)displayedPerson;
@end

