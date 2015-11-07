/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonCalDAV/MobileCalDAVDaemonAccount.h>

@class NSString;

@interface MobileCalDAViCloudDaemonAccount : MobileCalDAVDaemonAccount {

	NSString* _host;
	int _useSSL;
	int _port;

}
-(void)setPort:(int)arg1 ;
-(id)host;
-(int)port;
-(id)additionalHeaderValues;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(char)shouldHandleHTTPCookiesForURL:(id)arg1 ;
-(char)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(id)getAppleIDSession;
-(char)supportsReminders;
-(char)shouldUseCalendarHomeSyncReport;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)setHost:(id)arg1 ;
-(char)useSSL;
-(id)principalURL;
-(void)setUseSSL:(char)arg1 ;
@end

