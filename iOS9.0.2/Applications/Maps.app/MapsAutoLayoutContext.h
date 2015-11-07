/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSMutableArray, NSArray;

@interface MapsAutoLayoutContext : NSObject <NSCopying> {

	NSMutableDictionary* _metrics;
	NSMutableDictionary* _views;
	NSMutableArray* _constraints;
	NSMutableArray* _mutableConstraints;
	NSArray* _oldMutableConstraints;

}
-(id)constrainView:(id)arg1 attribute:(int)arg2 equalToView:(id)arg3 ;
-(void)removeMutableConstraintsFromView:(id)arg1 ;
-(id)addConstraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 ;
-(id)addVisualFormat:(id)arg1 ;
-(void)addMetricsFromDictionary:(id)arg1 ;
-(void)removeImmutableConstraintsFromView:(id)arg1 ;
-(id)addConstraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 constant:(float)arg7 ;
-(id)addConstantConstraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toValue:(float)arg4 ;
-(id)constrainView:(id)arg1 attribute:(int)arg2 lessThanView:(id)arg3 ;
-(void)addImmutableConstraintsToView:(id)arg1 ;
-(void)beginUpdateConstraints;
-(void)addMutableConstraints:(id)arg1 ;
-(id)heightOfView:(id)arg1 isProportionalToHeightOfView:(id)arg2 withRatio:(float)arg3 ;
-(id)mutableConstraints;
-(void)removeConstraintsFromView:(id)arg1 ;
-(void)addMutableConstraint:(id)arg1 ;
-(void)setTranslatesAutoResizingMaskIntoConstraints:(id)arg1 value:(char)arg2 ;
-(id)addVisualFormat:(id)arg1 withOptions:(unsigned)arg2 ;
-(id)attribute:(int)arg1 isEqualToAttribute:(int)arg2 ofView:(id)arg3 ;
-(id)widthOfView:(id)arg1 isProportionalToWidthOfView:(id)arg2 withRatio:(float)arg3 ;
-(void)endUpdateConstraintsOnView:(id)arg1 ;
-(id)_defaultMetrics;
-(void)designateConstraintsMutable:(id)arg1 ;
-(void)addConstraintsToView:(id)arg1 previousContext:(id)arg2 ;
-(void)addViewsFromDictionary:(id)arg1 ;
-(id)init;
-(void)addConstraints:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)constraints;
-(void)removeConstraints:(id)arg1 ;
-(void)addConstraint:(id)arg1 ;
-(void)removeConstraint:(id)arg1 ;
@end

