/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPDCNFDOverfeatNetwork;

@interface VCPDCNEspressoOverfeatDetector : NSObject {

	int tileSizeScaleFactor;
	int tileDimension;
	int localFaceMerging;
	FaceList* face_list;
	VCPDCNFDOverfeatNetwork* _enet;
	double _confidenceThreshold;
	double _minBoundingBoxThreshold;

}

@property (nonatomic,retain) VCPDCNFDOverfeatNetwork * enet;              //@synthesize enet=_enet - In the implementation block
@property (assign,nonatomic) double confidenceThreshold;                  //@synthesize confidenceThreshold=_confidenceThreshold - In the implementation block
@property (assign,nonatomic) double minBoundingBoxThreshold;              //@synthesize minBoundingBoxThreshold=_minBoundingBoxThreshold - In the implementation block
-(id)initWithOptions:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)commonInit;
-(id)getFacesFromNetworkResultOriginalWidth:(float)arg1 originalHeight:(float)arg2 ;
-(id)detectObjectsOnImagesBatch:(/*^block*/id)arg1 detectionOptions:(id)arg2 error:(id*)arg3 ;
-(double)compareObject:(id)arg1 withObject:(id)arg2 error:(id*)arg3 ;
-(id)getDescription;
-(void)mergeFaceList;
-(void)runNetwork:(CGImageRef)arg1 ;
-(void)computeBBoxUsingProb:(shared_ptr<Espresso::blob<float, 3> >*)arg1 box:(shared_ptr<Espresso::blob<float, 3> >*)arg2 andScalefactor:(float)arg3 padX:(float)arg4 padY:(float)arg5 ;
-(void)fillFaceList;
-(VCPDCNFDOverfeatNetwork *)enet;
-(void)setEnet:(VCPDCNFDOverfeatNetwork *)arg1 ;
-(void)setMinBoundingBoxThreshold:(double)arg1 ;
-(id)detectObjectsOnImage:(CGImageRef)arg1 detectionOptions:(id)arg2 error:(id*)arg3 ;
-(double)minBoundingBoxThreshold;
-(void)setConfidenceThreshold:(double)arg1 ;
-(double)confidenceThreshold;
-(id)initWithNetwork:(id)arg1 ;
@end

