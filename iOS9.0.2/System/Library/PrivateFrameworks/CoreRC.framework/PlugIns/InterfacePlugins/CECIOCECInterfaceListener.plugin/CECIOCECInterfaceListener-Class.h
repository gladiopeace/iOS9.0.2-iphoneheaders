/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/PlugIns/InterfacePlugins/CECIOCECInterfaceListener.plugin/CECIOCECInterfaceListener
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CECIOCECInterfaceListener/CECIOCECInterfaceListener-Structs.h>
#import <CoreRC/CoreRCInterfaceListener.h>

@interface CECIOCECInterfaceListener : CoreRCInterfaceListener {

	IOCECInterfaceListenerRef _listener;

}
-(void)addIOCECInterface:(IOCECInterfaceRef)arg1 ;
-(void)dealloc;
-(void)scheduleWithDispatchQueue:(id)arg1 ;
-(void)unscheduleFromDispatchQueue:(id)arg1 ;
-(id)initWithInterfaceController:(id)arg1 ;
@end

