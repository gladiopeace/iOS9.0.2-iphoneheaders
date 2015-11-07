/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CommCenter/CommCenter-Structs.h>
@class NSString;

@interface CellDataActivationFailureAlertItem : NSObject {

	int _error;
	char _suggestWiFi;
	NSString* _reason;
	dict* _additionalData;
	NSString* _settingsText;
	NSString* _okText;
	NSString* _body;
	NSString* _title;

}
-(id)initWithErrorCode:(int)arg1 reason:(id)arg2 additionalData:(dict*)arg3 suggestWiFi:(char)arg4 ;
-(void)button_config;
-(void)show;
-(void)dealloc;
@end

