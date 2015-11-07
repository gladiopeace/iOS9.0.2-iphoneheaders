/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CPLEngineSyncManagerImplementation <CPLPlatformImplementation>
@required
-(void)setSyncSessionShouldBeForeground:(char)arg1;
-(void)syncSessionDidFailWithError:(id)arg1;
-(void)syncSessionDidSucceed;
-(void)didFinishSyncSession;
-(void)didMoveToState:(unsigned)arg1;
-(void)willStartSyncSession;
-(void)didProgress:(float)arg1 userInfo:(id)arg2 forState:(unsigned)arg3;
-(void)prepareForClose;
-(void)beginClientWork:(id)arg1;
-(void)endClientWork:(id)arg1;

@end

