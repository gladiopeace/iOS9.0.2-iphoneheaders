/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/nanomapscd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NMCServerXPCInterface.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <nanomapscd/NMDeviceConnectionObserver.h>
#import <nanomapscd/NMMapsXPCInterface.h>
#import <nanomapscd/NMCSyncManagerDelegate.h>
#import <libobjc.A.dylib/GEOExperimentConfigurationObserver.h>
#import <libobjc.A.dylib/NRDevicePropertyObserver.h>

@protocol OS_dispatch_queue;
@class GEOResourceManifestConfiguration, GEOResourceManifestManager, GEOTileLoader, NSMutableDictionary, NSLock, NMCSyncManager, NSXPCListener, NSMutableArray, NSXPCConnection, BKSProcessAssertion, NRPairedDeviceRegistry, NRDevice, NMTileMessageQueue, GEOCompanionRouteStatus, NSData, NSObject, NSString;

@interface NMCServer : NSObject <NSXPCListenerDelegate, NMCServerXPCInterface, GEOResourceManifestTileGroupObserver, NMDeviceConnectionObserver, NMMapsXPCInterface, NMCSyncManagerDelegate, GEOExperimentConfigurationObserver, NRDevicePropertyObserver> {

	GEOResourceManifestConfiguration* _manifestConfiguration;
	GEOResourceManifestManager* _manifestManager;
	GEOTileLoader* _tileLoader;
	NSMutableDictionary* _requestIdentifierToPendingTileKeys;
	NSLock* _requestIdentifierToPendingTileKeysLock;
	NMCSyncManager* _syncManager;
	NSXPCListener* _listener;
	NSMutableArray* _peerConnections;
	NSXPCConnection* _geoNavigationConnection;
	NSXPCConnection* _directionsControllerConnection;
	NSXPCListener* _mapsListener;
	NSMutableArray* _mapsPeerConnections;
	NSLock* _connectionsLock;
	BKSProcessAssertion* _assertion;
	unsigned _assertionToken;
	unsigned _numConnectionsHoldingAssertion;
	NRPairedDeviceRegistry* _registry;
	NRDevice* _activeDevice;
	NSMutableDictionary* _locationManagers;
	NSLock* _locationManagersLock;
	NSLock* _assertionLock;
	NSLock* _routeStatusLock;
	NMTileMessageQueue* _tileMessageQueue;
	char _shouldSendAllNavStatusUpdates;
	int _currentRouteSendability;
	GEOCompanionRouteStatus* _lastRouteStatus;
	GEOCompanionRouteStatus* _lastSentRouteStatus;
	NSData* _lastSentRouteDetailsData;
	NSData* _lastSentRouteContext;
	NSObject*<OS_dispatch_queue> _tileLoaderQueue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)syncBookmarksWithReply:(/*^block*/id)arg1 ;
-(void)requestSyncUpdateWithReply:(/*^block*/id)arg1 ;
-(void)syncHistoryWithReply:(/*^block*/id)arg1 ;
-(void)_debug_fetchServerConfiguration:(/*^block*/id)arg1 ;
-(void)_debug_fetchDiagnosticsString:(/*^block*/id)arg1 ;
-(void)_didUnpair:(id)arg1 ;
-(void)_updateManifestConfiguration;
-(id)_bundleIdentifierForConnection:(id)arg1 ;
-(void)checkinForNavigationControl;
-(id)_locationManagerForBundleIdentifier:(id)arg1 ;
-(void)showPreviewRoute:(id)arg1 forContext:(id)arg2 ;
-(void)syncManager:(id)arg1 didRequestInitialSync:(/*^block*/id)arg2 ;
-(char)_shouldSendRoute;
-(id)_locationManagerForEffectiveBundleIdentifier:(id)arg1 ;
-(void)connection:(id)arg1 didChangeDeviceConnectivity:(char)arg2 ;
-(void)_sendRouteStatus:(id)arg1 ;
-(void)fetchTilesForMessage:(id)arg1 ;
-(void)_didPair:(id)arg1 ;
-(void)fetchRouteGeniusForMessage:(id)arg1 ;
-(void)syncManagerDidUpdate:(id)arg1 ;
-(void)_sendTileGroupDidChange;
-(id)_mapsLocationManager;
-(void)checkinWithCurrentTileGroupIdentifier:(id)arg1 ;
-(void)connectionNeedsStateSynchronization:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)experimentConfigurationDidChange:(id)arg1 ;
-(void)_updateNavigationRouteDetails:(id)arg1 routeStatus:(id)arg2 routeContext:(id)arg3 ;
-(void)didChangeActiveTileGroup:(id)arg1 ;
-(void)didChangePairedDeviceReachability:(char)arg1 ;
-(void)updateNavigationRouteStatus:(id)arg1 ;
-(void)invalidateNavigationSessionWithRouteContext:(id)arg1 ;
-(void)pingForNavigationBarrier:(/*^block*/id)arg1 ;
-(void)updateNavigationRouteDetails:(id)arg1 routeStatus:(id)arg2 routeContext:(id)arg3 ;
-(void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3 ;
-(void)setDroppedPin:(id)arg1 ;
-(void)updatedHistoryItem:(id)arg1 ;
@end

