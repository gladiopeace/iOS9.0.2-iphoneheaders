/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CRVehicleDiscovery <NSObject>
@optional
-(void)vehicleDiscoverer:(id)arg1 didDiscoverVehicle:(id)arg2;
-(void)vehicleDiscoverer:(id)arg1 didUpdateVehicle:(id)arg2;
-(void)vehicleDiscoverer:(id)arg1 didRemoveVehicle:(id)arg2;

@required
-(id)viewControllerPresentingPairingForVehicleDiscoverer:(id)arg1;

@end

