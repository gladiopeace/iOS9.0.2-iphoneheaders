/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AXBGuidedAccessManager : NSObject {

	id _notificationToken;
	id _guidedAccessServer;

}
+(char)inGuidedAccess;
+(void)initializeMonitor;
+(char)allowsTripleClickSheet;
-(void)_loadBackboardServerBundle;
-(id)_guidedAccessServer;
-(void)dealloc;
-(id)init;
@end

