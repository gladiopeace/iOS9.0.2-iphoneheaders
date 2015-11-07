/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface CUIPSDGradientEvaluator : NSObject <NSCoding, NSCopying> {

	NSArray* colorStops;
	NSArray* colorMidpointLocations;
	NSArray* opacityStops;
	NSArray* opacityMidpointLocations;
	float smoothingCoefficient;
	psdGradientColor fillColor;
	int blendMode;
	float singlePixelDistance;
	struct {
		unsigned colorEdgePixel : 2;
		unsigned opacityEdgePixel : 2;
		unsigned isDithered : 1;
		unsigned reserved : 3;
	}  pgeFlags;

}

@property (assign,nonatomic) int blendMode; 
+(void)initialize;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(psdGradientColor)fillColor;
-(id)colorStops;
-(id)colorMidpointLocations;
-(id)opacityStops;
-(id)opacityMidpointLocations;
-(float)smoothingCoefficient;
-(char)isDithered;
-(id)initWithColorStops:(id)arg1 colorMidpoints:(id)arg2 opacityStops:(id)arg3 opacityMidpoints:(id)arg4 smoothingCoefficient:(float)arg5 fillColor:(psdGradientColor)arg6 dither:(char)arg7 ;
-(id)_cleanedUpMidpointLocationsFromLocations:(id)arg1 ;
-(void)_createOrderedStops:(id*)arg1 midpoints:(id*)arg2 fromStops:(id)arg3 midpoints:(id)arg4 edgePixel:(int*)arg5 ;
-(float)_smoothedInterpolationOfLocation:(float)arg1 betweenLower:(float)arg2 upper:(float)arg3 scaledMidpoint:(float)arg4 ;
-(id)initWithColorStops:(id)arg1 colorMidpoints:(id)arg2 opacityStops:(id)arg3 opacityMidpoints:(id)arg4 smoothingCoefficient:(float)arg5 fillCoefficient:(float)arg6 ;
-(psdGradientColor)_smoothedGradientColorAtLocation:(float)arg1 ;
-(float)fillCoefficient;
-(char)hasEdgePixel;
-(char)hasDoubleColorStops;
-(char)hasDoubleOpacityStops;
-(void)setColorStops:(id)arg1 midpoints:(id)arg2 ;
-(void)setOpacityStops:(id)arg1 midpoints:(id)arg2 ;
-(void)setSmoothingCoefficient:(float)arg1 ;
-(void)setFillCoefficient:(float)arg1 ;
-(void)customizeForDistance:(float)arg1 ;
-(void)setBlendMode:(int)arg1 ;
-(int)blendMode;
@end
