/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKFeatureAccessibilityElement, VKPointFeatureAccessibilityElement;

@interface VKMapViewTourStatus : NSObject {

	char _isStationary;
	VKFeatureAccessibilityElement* _currentLocation;
	VKFeatureAccessibilityElement* _lastCurrentLocation;
	VKFeatureAccessibilityElement* _futureLocation;
	VKFeatureAccessibilityElement* _lastFutureLocation;
	VKPointFeatureAccessibilityElement* _futurePOI;
	VKPointFeatureAccessibilityElement* _lastFuturePOI;
	float _lastFutureDistance;
	float _lastPOIDistance;
	unsigned _futurePOISide;
	unsigned _lastFuturePOISide;
	CGPoint _currentPoint;
	CGPoint _futurePoint;

}

@property (nonatomic,retain) VKFeatureAccessibilityElement * currentLocation;                  //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,retain) VKFeatureAccessibilityElement * lastCurrentLocation;              //@synthesize lastCurrentLocation=_lastCurrentLocation - In the implementation block
@property (nonatomic,retain) VKFeatureAccessibilityElement * futureLocation;                   //@synthesize futureLocation=_futureLocation - In the implementation block
@property (nonatomic,retain) VKFeatureAccessibilityElement * lastFutureLocation;               //@synthesize lastFutureLocation=_lastFutureLocation - In the implementation block
@property (nonatomic,retain) VKPointFeatureAccessibilityElement * futurePOI;                   //@synthesize futurePOI=_futurePOI - In the implementation block
@property (nonatomic,retain) VKPointFeatureAccessibilityElement * lastFuturePOI;               //@synthesize lastFuturePOI=_lastFuturePOI - In the implementation block
@property (assign,nonatomic) CGPoint currentPoint;                                             //@synthesize currentPoint=_currentPoint - In the implementation block
@property (assign,nonatomic) CGPoint futurePoint;                                              //@synthesize futurePoint=_futurePoint - In the implementation block
@property (assign,nonatomic) float lastFutureDistance;                                         //@synthesize lastFutureDistance=_lastFutureDistance - In the implementation block
@property (assign,nonatomic) float lastPOIDistance;                                            //@synthesize lastPOIDistance=_lastPOIDistance - In the implementation block
@property (assign,nonatomic) unsigned futurePOISide;                                           //@synthesize futurePOISide=_futurePOISide - In the implementation block
@property (assign,nonatomic) unsigned lastFuturePOISide;                                       //@synthesize lastFuturePOISide=_lastFuturePOISide - In the implementation block
@property (assign,nonatomic) char isStationary;                                                //@synthesize isStationary=_isStationary - In the implementation block
-(unsigned)futurePOISide;
-(void)setFuturePOI:(VKPointFeatureAccessibilityElement *)arg1 ;
-(id)_stringForSide:(unsigned)arg1 ;
-(void)setFuturePoint:(CGPoint)arg1 ;
-(float)lastPOIDistance;
-(VKPointFeatureAccessibilityElement *)lastFuturePOI;
-(VKPointFeatureAccessibilityElement *)futurePOI;
-(CGPoint)futurePoint;
-(VKFeatureAccessibilityElement *)futureLocation;
-(void)updateTourStatusWithCurrentLocation:(id)arg1 currentPoint:(CGPoint)arg2 futureLocation:(id)arg3 futurePoint:(CGPoint)arg4 tourPOI:(id)arg5 tourPOISide:(unsigned)arg6 isStationary:(char)arg7 ;
-(id)shortTourStatusAnnouncement;
-(id)longTourStatusAnnouncement;
-(VKFeatureAccessibilityElement *)lastCurrentLocation;
-(VKFeatureAccessibilityElement *)lastFutureLocation;
-(float)lastFutureDistance;
-(void)setLastFutureDistance:(float)arg1 ;
-(unsigned)lastFuturePOISide;
-(void)setLastPOIDistance:(float)arg1 ;
-(id)_tourStatusAnnouncementWithLength:(unsigned)arg1 ;
-(void)setIsStationary:(char)arg1 ;
-(void)setLastCurrentLocation:(VKFeatureAccessibilityElement *)arg1 ;
-(void)setLastFutureLocation:(VKFeatureAccessibilityElement *)arg1 ;
-(void)setFutureLocation:(VKFeatureAccessibilityElement *)arg1 ;
-(void)setLastFuturePOI:(VKPointFeatureAccessibilityElement *)arg1 ;
-(void)setLastFuturePOISide:(unsigned)arg1 ;
-(void)setFuturePOISide:(unsigned)arg1 ;
-(void)setCurrentPoint:(CGPoint)arg1 ;
-(void)dealloc;
-(CGPoint)currentPoint;
-(char)isStationary;
-(VKFeatureAccessibilityElement *)currentLocation;
-(void)setCurrentLocation:(VKFeatureAccessibilityElement *)arg1 ;
@end

