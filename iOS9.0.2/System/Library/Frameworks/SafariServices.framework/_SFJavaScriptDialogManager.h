/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface _SFJavaScriptDialogManager : NSObject {

	double _shortInterval;
	NSDate* _lastDismissalDate;
	unsigned _numberOfConsecutiveShortDialoglessIntervals;
	unsigned _allowedNumberOfConsecutiveShortDialoglessIntervals;
	char _suppressing;

}
-(char)mayShowDialogFromSecurityOrigin:(id)arg1 inViewController:(id)arg2 ;
-(void)didDismissDialog;
-(void)willShowDialog;
-(void)_updateShortInterval;
-(void)_accessibilityOptionsChanged:(id)arg1 ;
-(id)init;
-(void)reset;
@end

