/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class NSMutableDictionary, NSMutableArray, FCRFaceDetector;

@interface CIBurstImageFaceAnalysisContext : NSObject {

	NSMutableDictionary* curConfig;
	NSMutableDictionary* faceIdMapping;
	NSMutableDictionary* renameMapping;
	int faceIdCounter;
	NSMutableArray* faceInfoArray;
	int numFramesSinceFullFaceCore;
	int numFramesNoFaces;
	FCRFaceDetector* faceDetector;
	NSMutableArray* faceTimestampArray;
	double latestImageTimestamp;
	int lastFaceIndex;
	char forceFaceDetectionEnable;
	int _version;
	double timeBlinkDetectionDone;
	double timeFaceDetectionDone;
	double latestFaceTimestamp;

}

@property (assign) double timeFaceDetectionDone; 
@property (assign) double timeBlinkDetectionDone; 
@property (assign) char forceFaceDetectionEnable; 
@property (assign) double latestFaceTimestamp; 
@property (assign) int version;                                //@synthesize version=_version - In the implementation block
-(void)setForceFaceDetectionEnable:(char)arg1 ;
-(double)latestFaceTimestamp;
-(void)addFacesToImageStat:(id)arg1 imageSize:(CGSize)arg2 ;
-(int)findFacesInImage:(id)arg1 imageStat:(id)arg2 ;
-(void)setTimeFaceDetectionDone:(double)arg1 ;
-(void)setTimeBlinkDetectionDone:(double)arg1 ;
-(double)timeFaceDetectionDone;
-(double)timeBlinkDetectionDone;
-(void)calculateFaceFocusInImage:(id)arg1 imageStat:(id)arg2 ;
-(void)adjustFaceIdsForImageStat:(id)arg1 ;
-(void)dumpFaceInfoArray;
-(void)extractFacesFromMetadata:(id)arg1 ;
-(void)calcFaceScores:(id)arg1 ;
-(char)forceFaceDetectionEnable;
-(CGRect)padRoiRect:(CGRect)arg1 paddingX:(float)arg2 paddingY:(float)arg3 ;
-(void)setupFaceDetector;
-(CGRect)calculateFaceCoreROI:(id)arg1 imageStat:(id)arg2 needFaceCore:(char*)arg3 ;
-(id)findOverlappingFaceStat:(CGRect)arg1 imageStat:(id)arg2 ;
-(char)isSmallFace:(CGRect)arg1 ;
-(id)processSmallFaces:(id)arg1 imageStat:(id)arg2 faces:(id)arg3 extractOptions:(id)arg4 ;
-(void)addFaceToArray:(id)arg1 ;
-(void)setLatestFaceTimestamp:(double)arg1 ;
-(void)dealloc;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(id)initWithVersion:(id)arg1 ;
@end

