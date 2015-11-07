/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface CLPrefetchFloorRequest : NSObject <NSSecureCoding> {

	NSString* _floorUuid;
	NSString* _venueUuid;
	NSDate* _relevancy;

}

@property (nonatomic,retain) NSString * floorUuid;              //@synthesize floorUuid=_floorUuid - In the implementation block
@property (nonatomic,retain) NSString * venueUuid;              //@synthesize venueUuid=_venueUuid - In the implementation block
@property (nonatomic,retain) NSDate * relevancy;                //@synthesize relevancy=_relevancy - In the implementation block
+(char)supportsSecureCoding;
+(id)prefetchRequestForFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithFloor:(id)arg1 inVenue:(id)arg2 lastRelevant:(id)arg3 ;
-(char)isEqualToRequest:(id)arg1 ;
-(NSString *)floorUuid;
-(id)initWithFloor:(id)arg1 lastRelevant:(id)arg2 ;
-(id)floorUid;
-(void)setFloorUid:(id)arg1 ;
-(void)setFloorUuid:(NSString *)arg1 ;
-(NSString *)venueUuid;
-(void)setVenueUuid:(NSString *)arg1 ;
-(NSDate *)relevancy;
-(void)setRelevancy:(NSDate *)arg1 ;
@end

