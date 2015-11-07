/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKQuickRouteManagerDelegate, MKQuickRouteConfigurableView;
#import <MapKit/MapKit-Structs.h>
@class NSMutableDictionary, _MKRouteETA, NSError, MKDirections, NSObject, MKMapItem, GEOTransitOptions;

@interface _MKQuickRouteManager : NSObject {

	double _maxDistanceToRequestETA;
	NSMutableDictionary* _etaResults;
	_MKRouteETA* _lastETA;
	unsigned _lastPreferredDirectionsType;
	NSError* _lastError;
	SCD_Struct_MK1 _lastUpdatedETAOriginCoordinate;
	double _lastUpdatedETATime;
	double _lastRequestTime;
	MKDirections* _inProgressETAUpdate;
	char _lastETAUpdateHadError;
	char _haveCheckedMapItemForETA;
	double _staleDistance;
	double _staleTimeInterval;
	double _closeWalkTravelTime;
	double _maxWalkingDistance;
	char _viewHasChangedSinceLastUpdate;
	char _fetchAllTransportTypes;
	id<MKQuickRouteManagerDelegate> _delegate;
	NSObject*<MKQuickRouteConfigurableView> _view;
	MKMapItem* _mapItem;
	MKMapItem* _originMapItem;
	GEOTransitOptions* _transitOptions;
	SCD_Struct_MK1 _coordinate;

}

@property (assign,nonatomic,__weak) id<MKQuickRouteManagerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<MKQuickRouteConfigurableView> view;                                      //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) unsigned transportType; 
@property (nonatomic,copy) GEOTransitOptions * transitOptions;                                                         //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                                      //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK1 coordinate;                                                                //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,retain) MKMapItem * originMapItem;                                                                //@synthesize originMapItem=_originMapItem - In the implementation block
@property (getter=isUsingCurrentLocationForOrigin,nonatomic,readonly) char usingCurrentLocationForOrigin; 
@property (assign,nonatomic) char fetchAllTransportTypes;                                                              //@synthesize fetchAllTransportTypes=_fetchAllTransportTypes - In the implementation block
@property (getter=isOnlyDriving,nonatomic,readonly) char onlyDriving; 
+(unsigned)counterpartForTransportType:(unsigned)arg1 ;
-(char)shouldUpdateEstimatedTravelTimeForNewOrigin:(SCD_Struct_MK1)arg1 transportType:(unsigned)arg2 ;
-(char)haveETAsForPreferredTransportType:(unsigned)arg1 ;
-(char)isUsingCurrentLocationForOrigin;
-(id)routeETAForTransportType:(unsigned)arg1 ;
-(SCD_Struct_MK1)originCoordinate;
-(void)expireETAsIfNoLongerValid;
-(void)invalidateETAForTransportType:(unsigned)arg1 ;
-(void)updateETA;
-(unsigned)guessTransportTypeForDistance:(double)arg1 preferredDirectionsType:(unsigned)arg2 ;
-(char)fetchAllTransportTypes;
-(char)isValidETA:(id)arg1 ;
-(void)requestNewETAForPreferredTransportType:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOriginMapItem:(MKMapItem *)arg1 ;
-(char)isOnlyDriving;
-(id)bestETAForPreferredDirectionsType:(unsigned)arg1 ;
-(void)setFetchAllTransportTypes:(char)arg1 ;
-(MKMapItem *)originMapItem;
-(void)loadETAsFromMapItemForTransportType:(unsigned)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)setCoordinate:(SCD_Struct_MK1)arg1 ;
-(SCD_Struct_MK1)coordinate;
-(void)setDelegate:(id<MKQuickRouteManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MKQuickRouteManagerDelegate>)delegate;
-(NSObject*<MKQuickRouteConfigurableView>)view;
-(void)setView:(NSObject*<MKQuickRouteConfigurableView>)arg1 ;
-(unsigned)transportType;
-(GEOTransitOptions *)transitOptions;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(void)_resetState;
@end

