/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/SpringBoardPlugins/ChatKit.servicebundle/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface MMSDelayedDownloadAlertItem : SBAlertItem {

	NSString* _fromAddress;
	int _messageCount;

}
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(void)setAddress:(id)arg1 ;
-(void)setMessageCount:(int)arg1 ;
-(void)_showNetworkPrefs;
@end

