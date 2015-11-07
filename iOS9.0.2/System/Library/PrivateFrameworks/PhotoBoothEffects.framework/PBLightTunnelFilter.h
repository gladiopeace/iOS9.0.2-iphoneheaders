/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoBoothEffects/PhotoBoothEffects-Structs.h>
#import <PhotoBoothEffects/PBFilter.h>

@interface PBLightTunnelFilter : PBFilter {

	BOOL firstTime;
	float _inputAmount;
	float lastInputX;
	float lastInputY;
	float lastInputRadius;
	float lastInputRotation;
	float inputRotation;
	CGPoint inputPoint;

}

@property (assign) CGPoint inputPoint; 
@property (assign) float inputAmount; 
@property (assign) float inputRotation; 
-(void)setInputAmount:(float)arg1 ;
-(float)inputAmount;
-(float)inputRotation;
-(CGPoint)inputPoint;
-(void)setInputRotation:(float)arg1 ;
-(void)setDefaults;
-(void)setInputPoint:(CGPoint)arg1 ;
-(id)ciFilterName;
-(char)needsWrapMirror;
-(void)applyParametersToCIFilter:(char)arg1 extent:(CGRect)arg2 ;
@end
