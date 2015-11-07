/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKMapItemMetadataRequest.h>

@class GEOPhotoInfo;

@interface MKMapItemMetadataImageRequest : MKMapItemMetadataRequest {

	GEOPhotoInfo* _info;
	/*^block*/id _imageHandler;

}

@property (nonatomic,copy) id imageHandler;              //@synthesize imageHandler=_imageHandler - In the implementation block
@property (retain) GEOPhotoInfo * info;                  //@synthesize info=_info - In the implementation block
+(id)requestWithMapItem:(id)arg1 info:(id)arg2 ;
-(void)handleData:(id)arg1 ;
-(id)imageHandler;
-(void)setImageHandler:(id)arg1 ;
-(id)url;
-(GEOPhotoInfo *)info;
-(void)setInfo:(GEOPhotoInfo *)arg1 ;
-(void)handleError:(id)arg1 ;
@end

