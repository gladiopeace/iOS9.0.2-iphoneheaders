/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/PassbookUIService.app/PassbookUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIApplication.h>

@class NSNumber;

@interface PassbookUIServiceApplication : UIApplication {

	NSNumber* _statusBarHeightOverride;

}

@property (nonatomic,retain) NSNumber * statusBarHeightOverride;              //@synthesize statusBarHeightOverride=_statusBarHeightOverride - In the implementation block
+(char)shouldBackgroundMainThreadOnSuspendedLaunch;
-(NSNumber *)statusBarHeightOverride;
-(void)setStatusBarHeightOverride:(NSNumber *)arg1 ;
-(void)dealloc;
-(float)statusBarHeight;
@end

