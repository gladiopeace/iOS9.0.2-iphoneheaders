/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIModalViewDelegate.h>

@class WiFiNetwork, UIAlertView, NSString;

@interface APCarPlayAlert : NSObject <UIModalViewDelegate> {

	id _delegate;
	WiFiNetwork* _network;
	UIAlertView* _sheet;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)dismiss;
-(void)showAlertForNetwork:(id)arg1 carName:(id)arg2 delegate:(id)arg3 ;
-(void)dismissWithClickedButtonIndex:(int)arg1 ;
-(id)getNetwork;
@end

