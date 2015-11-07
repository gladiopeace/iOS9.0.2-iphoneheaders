/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iPhotoMigrationSupport/BLAlert.h>

@class UIProgressView, UIActivityIndicatorView;

@interface BLActivityAlert : BLAlert {

	UIProgressView* _progressView;
	UIActivityIndicatorView* _activityIndicatorView;
	int _type;
	float _progress;
	char _hasActivity;

}
-(void)setActivityType:(int)arg1 ;
-(void)setTitle:(id)arg1 ;
-(int)activityType;
-(void)setProgress:(float)arg1 ;
-(void)setHasActivity:(char)arg1 ;
-(id)initWithType:(int)arg1 title:(id)arg2 options:(int)arg3 cancelAction:(id)arg4 ;
-(id)initWithType:(int)arg1 title:(id)arg2 cancelAction:(id)arg3 ;
@end

