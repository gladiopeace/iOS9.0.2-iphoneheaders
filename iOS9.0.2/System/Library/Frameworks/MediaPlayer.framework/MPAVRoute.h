/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface MPAVRoute : NSObject {

	NSString* _routeName;
	char _picked;
	NSDictionary* _avRouteDescription;
	MPAVRoute* _wirelessDisplayRoute;
	int _displayRouteType;
	char _requiresPassword;
	NSString* _routeUID;
	int _routeType;
	int _pickableRouteType;
	int _routeSubtype;

}

@property (nonatomic,readonly) NSString * routeName; 
@property (nonatomic,readonly) NSString * routeUID;                           //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,readonly) int routeType;                                 //@synthesize routeType=_routeType - In the implementation block
@property (nonatomic,readonly) int pickableRouteType;                         //@synthesize pickableRouteType=_pickableRouteType - In the implementation block
@property (nonatomic,readonly) int routeSubtype;                              //@synthesize routeSubtype=_routeSubtype - In the implementation block
@property (nonatomic,readonly) MPAVRoute * wirelessDisplayRoute; 
@property (getter=isPicked,nonatomic,readonly) char picked; 
@property (nonatomic,readonly) char requiresPassword;                         //@synthesize requiresPassword=_requiresPassword - In the implementation block
@property (nonatomic,readonly) int passwordType; 
@property (nonatomic,readonly) char displayIsPicked; 
@property (nonatomic,readonly) int displayRouteType; 
-(NSString *)routeName;
-(char)displayIsPicked;
-(MPAVRoute *)wirelessDisplayRoute;
-(char)isPicked;
-(int)routeSubtype;
-(id)avRouteDescription;
-(int)pickableRouteType;
-(NSString *)routeUID;
-(id)_initWithAVRouteDescription:(id)arg1 ;
-(void)setRouteName:(NSString *)arg1 ;
-(void)setWirelessDisplayRoute:(MPAVRoute *)arg1 ;
-(void)setPicked:(char)arg1 ;
-(char)requiresPassword;
-(int)passwordType;
-(void)_routingControllerPickedRouteNotification:(id)arg1 ;
-(void)setAVRouteDescription:(id)arg1 ;
-(int)displayRouteType;
-(void)setDisplayRouteType:(int)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)routeType;
@end

