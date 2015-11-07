/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppPredictionInternal/_ATXAppLaunchHistogram.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSString;

@interface _ATXAppLaunchHistogramWithBackingFile : _ATXAppLaunchHistogram {

	NSObject*<OS_dispatch_source> _saveTimer;
	NSObject*<OS_dispatch_queue> _saveQueue;
	char _saveInBackground;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;                  //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) char saveInBackground;              //@synthesize saveInBackground=_saveInBackground - In the implementation block
-(void)_scheduleSave;
-(void)dealloc;
-(void)flush;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(id)initWithPath:(id)arg1 andSaveInBackground:(char)arg2 ;
-(void)resetData;
-(void)addLaunchWithBundleId:(id)arg1 withDate:(id)arg2 ;
-(void)removeLaunchWithBundleId:(id)arg1 withDate:(id)arg2 ;
-(char)removeAllHistoryForBundleId:(id)arg1 ;
-(void)_cancelSaveTimer;
-(char)saveInBackground;
-(void)setSaveInBackground:(char)arg1 ;
@end

