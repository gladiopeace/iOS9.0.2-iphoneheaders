/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <backupd/backupd-Structs.h>
@interface MBRestoreFailuresManager : NSObject
+(id)sharedManager;
-(id)restoreFailuresForDataClass:(id)arg1 assetType:(id)arg2 range:(NSRange)arg3 ;
-(id)_iconDataForRestoreFailure:(id)arg1 error:(id*)arg2 ;
-(char)recordRestoreFailure:(id)arg1 error:(id*)arg2 ;
-(unsigned)countOfRestoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 ;
@end

