/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBApplicationLibraryObserver <NSObject>
@optional
-(void)applicationLibrary:(id)arg1 didAddPlaceholders:(id)arg2;
-(void)applicationLibrary:(id)arg1 didCancelPlaceholders:(id)arg2;
-(void)applicationLibrary:(id)arg1 didAddApplications:(id)arg2;
-(void)applicationLibrary:(id)arg1 didReplaceApplications:(id)arg2 withApplications:(id)arg3;
-(void)applicationLibrary:(id)arg1 didRemoveApplications:(id)arg2;
-(void)applicationLibrary:(id)arg1 didDemoteApplications:(id)arg2;
-(void)applicationLibrary:(id)arg1 networkUsageDidChange:(char)arg2;

@end

