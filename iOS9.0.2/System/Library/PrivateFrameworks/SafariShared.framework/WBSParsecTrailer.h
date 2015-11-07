/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/WBSParsecModel.h>

@class WBSParsecImageRepresentation, NSURL, NSString;

@interface WBSParsecTrailer : WBSParsecModel {

	WBSParsecImageRepresentation* _image;
	WBSParsecImageRepresentation* _overlayImage;
	NSURL* _url;
	NSString* _caption;

}

@property (nonatomic,readonly) WBSParsecImageRepresentation * image;                     //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * overlayImage;              //@synthesize overlayImage=_overlayImage - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * caption;                                  //@synthesize caption=_caption - In the implementation block
+(id)schema;
-(WBSParsecImageRepresentation *)overlayImage;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(WBSParsecImageRepresentation *)image;
-(NSString *)caption;
@end

