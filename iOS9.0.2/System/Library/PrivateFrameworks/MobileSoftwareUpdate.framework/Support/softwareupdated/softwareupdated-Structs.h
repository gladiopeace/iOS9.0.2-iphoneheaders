/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/Support/softwareupdated
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct __CFBundle* CFBundleRef;

typedef struct VPNTunnel {
	/*function pointer*/void* SetStatus;
	/*function pointer*/void* SetPersistentData;
	/*function pointer*/void* CopyPersistentData;
	/*function pointer*/void* FetchCredentialComplete;
	/*function pointer*/void* Authenticate;
	/*function pointer*/void* DisplayBanner;
	/*function pointer*/void* SetConfigurationEntities;
	/*function pointer*/void* SetTunnelSocket;
	/*function pointer*/void* CryptoEnable;
	/*function pointer*/void* CryptoDisable;
	/*function pointer*/void* CryptoAddConfigurations;
	/*function pointer*/void* CryptoRemoveConfigurations;
	/*function pointer*/void* CryptoGenerateIndex;
	/*function pointer*/void* CryptoStopDataTraffic;
	/*function pointer*/void* CryptoStartDataTraffic;
	/*function pointer*/void* ClearConfiguration;
	/*function pointer*/void* IPCSendMessage;
	/*function pointer*/void* UpdatePlugin;
	/*function pointer*/void* EnvironmentEventComplete;
	/*function pointer*/void* Log;
	/*function pointer*/void* CopySocketInfo;
	/*function pointer*/void* CopyConfiguration;
	/*function pointer*/void* CopyVendorData;
	/*function pointer*/void* CopyConfigurationName;
	/*function pointer*/void* IncrementDataSent;
	/*function pointer*/void* IncrementDataReceived;
	/*function pointer*/void* PluginInit;
	/*function pointer*/void* PluginFetchCredential;
	/*function pointer*/void* PluginConnect;
	/*function pointer*/void* PluginDisconnect;
	/*function pointer*/void* PluginEnvironmentEvent;
	/*function pointer*/void* PluginIPCReceivedMessage;
	/*function pointer*/void* PluginDispose;
	/*function pointer*/void* PluginAuthenticateComplete;
	/*function pointer*/void* PluginDisplayBannerComplete;
	/*function pointer*/void* PluginCryptoCallComplete;
	/*function pointer*/void* PluginNewFlow;
	void pluginInfo;
	__CFBundle pluginBundle;
	int plugin_number;
	int tunSocket;
	__CFString serviceID;
	__CFString userPrefsID;
	__CFString subtype;
	__CFDictionary auth_data;
	__CFDictionary banner_data;
	__CFUserNotification userNotificationRef;
	__CFRunLoopSource userNotificationRLS;
	__SCDynamicStore dynamic_store;
	__CFRunLoopSource dynamic_store_rls;
	void agent;
} VPNTunnel;

typedef struct NEVirtualInterface_s* NEVirtualInterface_sRef;

typedef struct _NEFlowDirector* NEFlowDirectorRef;

typedef struct __CFString* CFStringRef;

typedef struct _NEFlow* NEFlowRef;

typedef struct __CFDictionary* CFDictionaryRef;

