/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WelcomeKit/WLDaemonController.h>

@protocol WLDataMigratorProtocol, WLDataMigrationDelegate;
@class WLSourceDevice, WLDeviceAuthentication;

@interface WLDataMigrationController : WLDaemonController {

	id<WLDataMigratorProtocol> _migrator;
	WLSourceDevice* _device;
	unsigned _dataTypes;
	WLDeviceAuthentication* _auth;
	id<WLDataMigrationDelegate> _delegate;

}

@property (nonatomic,retain,readonly) WLSourceDevice * device;                           //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) unsigned dataTypes;                                       //@synthesize dataTypes=_dataTypes - In the implementation block
@property (nonatomic,retain,readonly) WLDeviceAuthentication * auth;                     //@synthesize auth=_auth - In the implementation block
@property (nonatomic,__weak,readonly) id<WLDataMigrationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WLDataMigrationDelegate>)delegate;
-(unsigned)dataTypes;
-(WLSourceDevice *)device;
-(void)cancelMigration;
-(void)startMigration;
-(id)initWithSourceDevice:(id)arg1 dataTypes:(unsigned)arg2 authentication:(id)arg3 delegate:(id)arg4 ;
-(WLDeviceAuthentication *)auth;
@end

