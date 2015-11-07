/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBLockOverlayViewController.h>

@class SBFDeviceBlockTimer, NSString;

@interface SBLockScreenDeviceBlockViewController : SBLockOverlayViewController {

	SBFDeviceBlockTimer* _blockTimer;

}

@property (nonatomic,readonly) NSString * slideToUnlockText; 
@property (nonatomic,retain) SBFDeviceBlockTimer * blockTimer;              //@synthesize blockTimer=_blockTimer - In the implementation block
-(SBFDeviceBlockTimer *)blockTimer;
-(void)setBlockTimer:(SBFDeviceBlockTimer *)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)start;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(NSString *)slideToUnlockText;
@end

