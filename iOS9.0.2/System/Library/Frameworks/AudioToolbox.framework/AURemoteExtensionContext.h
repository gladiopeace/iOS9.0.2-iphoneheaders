/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libextension.dylib/NSExtensionContext.h>
#import <libobjc.A.dylib/AUAudioUnitXPCProtocol.h>

@protocol AUAudioUnitHostProtocol, OS_dispatch_queue, OS_voucher;
@class AUAudioUnit, NSObject, NSMutableArray, AUParameterTree, AUAudioUnitViewService;

@interface AURemoteExtensionContext : NSExtensionContext <AUAudioUnitXPCProtocol> {

	AUAudioUnit* _audioUnit;
	BOOL _isUIExtension;
	AudioComponentDescription _componentDescription;
	id<AUAudioUnitHostProtocol> _remoteHost;
	AUExtRenderingServer* _renderServer;
	NSObject*<OS_dispatch_queue> _propertyObserverQueue;
	NSMutableArray* _pendingChangedProperties;
	int _deferPropertyChangeNotifications;
	NSObject*<OS_voucher> _initializationVoucher;
	AUParameterTree* _cachedParameterTree;
	void* _rpcObserverToken;
	AUAudioUnitViewService* _viewService;

}

@property (assign) AUAudioUnitViewService * viewService;              //@synthesize viewService=_viewService - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)open:(/*^block*/id)arg1 ;
-(void)addPropertyObserver:(id)arg1 ;
-(void)removePropertyObserver:(id)arg1 ;
-(void)setBusFormat:(unsigned long)arg1 scope:(unsigned long)arg2 format:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)setBusCount:(unsigned)arg1 scope:(unsigned long)arg2 reply:(/*^block*/id)arg3 ;
-(void)initialize:(unsigned)arg1 reply:(/*^block*/id)arg2 ;
-(void)initialize2:(int)arg1 formats:(id)arg2 maxFrames:(unsigned)arg3 buffer:(id)arg4 bufferSize:(unsigned)arg5 beginSem:(id)arg6 endSem:(id)arg7 reply:(/*^block*/id)arg8 ;
-(void)uninitialize:(/*^block*/id)arg1 ;
-(void)valueForProperty:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)getBusses:(unsigned long)arg1 reply:(/*^block*/id)arg2 ;
-(id)_getBus:(unsigned long)arg1 scope:(unsigned long)arg2 error:(id*)arg3 ;
-(void)getParameterTree:(/*^block*/id)arg1 ;
-(void)setParameter:(unsigned long long)arg1 value:(float)arg2 ;
-(void)getParameter:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)parameterStringFromValue:(float)arg1 currentValue:(char)arg2 address:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)parameterValueFromString:(id)arg1 address:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)parameterNode:(id)arg1 displayNameWithLength:(int)arg2 reply:(/*^block*/id)arg3 ;
-(void)parametersForOverviewWithCount:(int)arg1 reply:(/*^block*/id)arg2 ;
-(void)addRemoteParameterObserver:(char)arg1 reply:(/*^block*/id)arg2 ;
-(void)removeRemoteParameterObserver:(unsigned long)arg1 reply:(/*^block*/id)arg2 ;
-(AUAudioUnitViewService *)viewService;
-(id)iOSViewController;
-(id)currentParameterTree;
-(char)_identifyBus:(id)arg1 scope:(unsigned*)arg2 element:(unsigned*)arg3 ;
-(id)_fetchAndClearPendingChangedProperties;
-(void)setBusName:(unsigned long)arg1 scope:(unsigned long)arg2 name:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)requestViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setViewService:(AUAudioUnitViewService *)arg1 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(void)dealloc;
-(void)reset;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

