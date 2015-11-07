/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSListItemsController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface PSUILTEOptionsController : PSListItemsController <UIAlertViewDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)shouldShowVoiceOptions;
+(void)setVoiceEnabled:(char)arg1 ;
+(char)isVoiceEnabled;
+(void)_executeCTConnectionDependentBlock:(/*^block*/id)arg1 ;
+(unsigned)voiceAvailability;
+(char)isOnCallOfSubType:(CFStringRef)arg1 ;
+(char)isProvisioning;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)listItemSelected:(id)arg1 ;
-(void)updateProvisioning;
-(char)presentOnCallAlertIfNeededForService:(unsigned)arg1 okayCompletion:(/*^block*/id)arg2 ;
-(void)presentCallCarrierAlert;
@end

