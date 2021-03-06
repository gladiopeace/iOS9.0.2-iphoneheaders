/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FaceCore/FaceCore-Structs.h>
@class NSString;

@interface FCRLandmark : NSObject {

	NSString* type;
	unsigned pointCount;
	CGPoint* points;

}

@property (readonly) NSString * type; 
@property (readonly) unsigned pointCount; 
@property (readonly) CGPoint* points; 
+(id)landmarkWithType:(id)arg1 pointCount:(unsigned)arg2 points:(CGPoint*)arg3 ;
-(void)dealloc;
-(NSString *)type;
-(id)initWithType:(id)arg1 pointCount:(unsigned)arg2 points:(CGPoint*)arg3 ;
-(unsigned)pointCount;
-(CGPoint*)points;
@end

