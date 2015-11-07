/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitArtworkDataSource.h>

@protocol GEOTransitShieldDataSource, GEOTransitIconDataSource;
@class NSString;

@interface MKTransitArtwork : NSObject <GEOTransitArtworkDataSource> {

	NSString* _accessibilityText;
	char _hasRoutingIncidentBadge;
	int _artworkSourceType;
	id<GEOTransitShieldDataSource> _shieldDataSource;
	id<GEOTransitIconDataSource> _iconDataSource;
	int _artworkUseType;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int artworkSourceType;                                        //@synthesize artworkSourceType=_artworkSourceType - In the implementation block
@property (nonatomic,readonly) int artworkUseType;                                           //@synthesize artworkUseType=_artworkUseType - In the implementation block
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> shieldDataSource;              //@synthesize shieldDataSource=_shieldDataSource - In the implementation block
@property (nonatomic,readonly) id<GEOTransitIconDataSource> iconDataSource;                  //@synthesize iconDataSource=_iconDataSource - In the implementation block
@property (nonatomic,readonly) char hasRoutingIncidentBadge;                                 //@synthesize hasRoutingIncidentBadge=_hasRoutingIncidentBadge - In the implementation block
@property (nonatomic,readonly) NSString * accessibilityText; 
+(id)artworkWithIcon:(id)arg1 accessibilityText:(id)arg2 ;
+(id)artworkWithShield:(id)arg1 accessibilityText:(id)arg2 ;
-(id)initWithShield:(id)arg1 accessibilityText:(id)arg2 ;
-(id)initWithIcon:(id)arg1 accessibilityText:(id)arg2 ;
-(NSString *)accessibilityText;
-(char)hasRoutingIncidentBadge;
-(id<GEOTransitIconDataSource>)iconDataSource;
-(id<GEOTransitShieldDataSource>)shieldDataSource;
-(int)artworkUseType;
-(int)artworkSourceType;
@end

