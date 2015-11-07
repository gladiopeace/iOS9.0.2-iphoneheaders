/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFSyncHandler <NSObject>
@optional
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(int)arg3 forKey:(id)arg4 beginInfo:(id)arg5 configuration:(id)arg6;
-(void)beginSyncWithInfo:(id)arg1 configuration:(id)arg2;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(int)arg3 forKey:(id)arg4 beginInfo:(id)arg5;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2;
-(void)syncDidEnd;

@end

