/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SYServiceDelegate <NSObject>
@optional
-(void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3;
-(void)serviceDidPairDevice:(id)arg1;
-(void)serviceDidUnpairDevice:(id)arg1;
-(void)service:(id)arg1 incomingData:(id)arg2 completion:(/*^block*/id)arg3;
-(void)service:(id)arg1 incomingStream:(id)arg2 metadata:(id)arg3 completion:(/*^block*/id)arg4;
-(void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;

@required
-(char)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3;

@end

