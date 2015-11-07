/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSSet, NSObject;

@interface _ATXAppIconState : NSObject {

	NSDictionary* _appLocation;
	NSSet* _dockedApps;
	NSSet* _folderApps;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)reload;
-(id)loadIconState;
-(void)parseIconState:(id)arg1 ;
-(id)allAppsOnSpringboard;
-(id)allDockedApps;
-(id)allFolderApps;
-(char)appOnDockWithBundleId:(id)arg1 ;
-(char)appInFolderWithBundleId:(id)arg1 ;
-(int)springboardPageNumberForBundleId:(id)arg1 ;
-(int)springboardPageLocationForBundleId:(id)arg1 ;
-(int)folderPageNumberForBundleId:(id)arg1 ;
@end

