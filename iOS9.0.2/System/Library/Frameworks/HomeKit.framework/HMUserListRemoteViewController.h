/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/HMUserManagementRemoteHost.h>

@protocol HMUserManagementRemoteHost;
@interface HMUserListRemoteViewController : _UIRemoteViewController <HMUserManagementRemoteHost> {

	id<HMUserManagementRemoteHost> _delegate;

}

@property (assign,nonatomic,__weak) id<HMUserManagementRemoteHost> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)userManagementDidFinishWithError:(id)arg1 ;
-(void)userManagementDidLoad;
-(void)setDelegate:(id<HMUserManagementRemoteHost>)arg1 ;
-(id<HMUserManagementRemoteHost>)delegate;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

