/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/PDAnimateScaleBehavior.h>

@class NSString;

@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior {

	NSString* mPath;
	char mHasAngle;
	double mAngle;
	NSString* mPointsTypes;
	char mHasOriginType;
	int mOriginType;
	char mHasRotationCenter;
	CGPoint mRotationCenter;
	char mHasPathEditMode;
	int mPathEditMode;

}
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)path;
-(void)setPath:(id)arg1 ;
-(void)setAngle:(double)arg1 ;
-(double)angle;
-(char)hasPath;
-(char)hasAngle;
-(id)pointsTypes;
-(char)hasOriginType;
-(int)originType;
-(char)hasRotationCenter;
-(CGPoint)rotationCenter;
-(char)hasPathEditMode;
-(int)pathEditMode;
-(void)setPointsTypes:(id)arg1 ;
-(void)setOriginType:(int)arg1 ;
-(void)setRotationCenter:(CGPoint)arg1 ;
-(void)setPathEditMode:(int)arg1 ;
@end

