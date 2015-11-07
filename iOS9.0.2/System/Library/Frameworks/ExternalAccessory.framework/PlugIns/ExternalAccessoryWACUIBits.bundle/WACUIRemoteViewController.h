/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/PlugIns/ExternalAccessoryWACUIBits.bundle/ExternalAccessoryWACUIBits
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <ExternalAccessoryWACUIBits/WACUIHostProtocol.h>

@class EAWiFiUnconfiguredAccessoryBrowserManager, NSString;

@interface WACUIRemoteViewController : _UIRemoteViewController <WACUIHostProtocol> {

	EAWiFiUnconfiguredAccessoryBrowserManager* _parent;

}

@property (__weak) EAWiFiUnconfiguredAccessoryBrowserManager * parent;              //@synthesize parent=_parent - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)_signalPresentationComplete;
-(void)dismissWithStatus:(long)arg1 ;
-(void)wifiDidShutdown;
-(void)backendDidStartSearchWithError:(id)arg1 ;
-(void)backendDidStopSearchWithError:(id)arg1 ;
-(void)backendFoundNewWACDevices:(id)arg1 andRemovedWACDevices:(id)arg2 ;
-(EAWiFiUnconfiguredAccessoryBrowserManager *)parent;
-(void)setParent:(EAWiFiUnconfiguredAccessoryBrowserManager *)arg1 ;
-(void)updateState:(int)arg1 ;
@end

