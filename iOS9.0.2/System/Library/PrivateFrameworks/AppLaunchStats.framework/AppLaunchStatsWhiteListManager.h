/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/DuetLoggerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, AppLaunchStatsSaveAndRestore, LSApplicationWorkspace, NSMutableArray, NSString;

@interface AppLaunchStatsWhiteListManager : NSObject <LSApplicationWorkspaceObserverProtocol, DuetLoggerProtocol> {

	NSObject*<OS_dispatch_queue> aplsWLMQueue;
	AppLaunchStatsSaveAndRestore* saveAndRestoreContext;
	LSApplicationWorkspace* wlmAppWorkSpace;
	NSMutableArray* defaultsWriteWhiteList;
	NSMutableArray* launchServiceWhiteListFetch;
	NSMutableArray* launchServiceWhiteListPush;
	char enableWhiteListCheck;

}

@property (assign,nonatomic) char enableWhiteListCheck; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instance;
-(id)init;
-(void)initSetup;
-(void)addToMultiTaskingQueue:(id)arg1 ;
-(BOOL)isAppInList:(id)arg1 withBundleID:(id)arg2 ;
-(void)logAll:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(BOOL)isWhiteListed:(id)arg1 withFetch:(int)arg2 ;
-(void)reloadConfiguration;
-(void)saveContext:(id)arg1 ;
-(char)enableWhiteListCheck;
-(void)setEnableWhiteListCheck:(char)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
@end

