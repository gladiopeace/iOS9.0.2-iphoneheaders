/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MBLSingleMessageClient <NSObject>
@optional
-(void)notifyFullMessageContentsUnavailableForMessage:(id)arg1 error:(id)arg2;

@required
-(char)wantsContentsOfType:(int)arg1;
-(void)notifyContentsAvailable:(id)arg1 forMessage:(id)arg2;
-(void)notifyContentsUnavailableForMessage:(id)arg1 error:(id)arg2;
-(double)ordering;
-(unsigned)priority;
-(id)message;

@end

