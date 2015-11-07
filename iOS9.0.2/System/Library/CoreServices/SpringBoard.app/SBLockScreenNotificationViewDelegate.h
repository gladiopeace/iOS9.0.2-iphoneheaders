/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBLockScreenNotificationViewDelegate <SBLockScreenActionHandler>
@required
-(id)lockScreenScrollView;
-(void)noteUnlockActionChanged:(id)arg1;
-(void)listViewDidBeginScrolling:(id)arg1;
-(void)listViewDidEndScrolling:(id)arg1;
-(void)listView:(id)arg1 cellDidBeginScrolling:(id)arg2;
-(void)listView:(id)arg1 cellDidEndScrolling:(id)arg2;
-(void)noteListViewReadyForModelUpdate;

@end

