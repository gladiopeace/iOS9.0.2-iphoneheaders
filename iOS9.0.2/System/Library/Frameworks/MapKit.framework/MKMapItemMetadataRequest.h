/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MKMapItem, NSURL, NSURLRequest;

@interface MKMapItemMetadataRequest : NSObject {

	MKMapItem* _mapItem;

}

@property (nonatomic,retain) MKMapItem * mapItem;                      //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSURLRequest * urlRequest; 
-(void)handleData:(id)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(NSURL *)url;
-(void)handleError:(id)arg1 ;
-(NSURLRequest *)urlRequest;
@end

