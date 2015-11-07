/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
@class NSString;

@interface FTRegConnectionHandler : NSObject {

	int _serviceType;
	unsigned _caps;
	NSString* _name;
	NSString* _listenerID;
	NSString* _logName;
	struct {
		unsigned listeningForNotifications : 1;
	}  _handlerFlags;

}

@property (assign,nonatomic) unsigned caps;                                            //@synthesize caps=_caps - In the implementation block
@property (assign,nonatomic) int serviceType;                                          //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) NSString * _serviceName; 
@property (nonatomic,retain) NSString * _logName;                                      //@synthesize logName=_logName - In the implementation block
@property (setter=_setListenerID:,nonatomic,copy) NSString * _listenerID;              //@synthesize listenerID=_listenerID - In the implementation block
-(void)_startListeningForNotifications;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)_serviceName;
-(NSString *)_logName;
-(id)initWithServiceType:(int)arg1 name:(id)arg2 ;
-(char)isConnectedToDaemon;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_stopListeningForNotifications;
-(void)set_logName:(NSString *)arg1 ;
-(id)initWithServiceType:(int)arg1 name:(id)arg2 capabilities:(unsigned)arg3 ;
-(void)_disconnectFromDaemon;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(char)_isServiceSupported;
-(char)connectToDaemon:(char)arg1 ;
-(void)setServiceType:(int)arg1 ;
-(int)serviceType;
-(char)connectToDaemon;
-(NSString *)_listenerID;
-(void)_setListenerID:(id)arg1 ;
-(unsigned)caps;
-(void)setCaps:(unsigned)arg1 ;
@end

