/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKPlaceActivityProvider.h>

@class MKMapItem;

@interface MKRouteActivityProvider : MKPlaceActivityProvider {

	MKMapItem* _sourceMapItem;
	unsigned _transportType;

}

@property (nonatomic,retain) MKMapItem * destinationMapItem; 
@property (nonatomic,retain) MKMapItem * sourceMapItem;                   //@synthesize sourceMapItem=_sourceMapItem - In the implementation block
@property (assign,nonatomic) unsigned transportType;                      //@synthesize transportType=_transportType - In the implementation block
-(void)setSourceMapItem:(MKMapItem *)arg1 ;
-(void)setDestinationMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)destinationMapItem;
-(MKMapItem *)sourceMapItem;
-(id)activityURL;
-(id)activitySourceTitle;
-(id)initWithSource:(id)arg1 destination:(id)arg2 ;
-(void)setTransportType:(unsigned)arg1 ;
-(unsigned)transportType;
@end

