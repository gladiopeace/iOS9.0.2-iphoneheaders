/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <MobileNotes/ICAudioCaptureSessionSampleObserver.h>

@class UICollectionView, UICollectionViewFlowLayout, UIView, NSArray, NSMutableArray, NSString;

@interface ICAudioWaveformView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, ICAudioCaptureSessionSampleObserver> {

	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _collectionViewLayout;
	UIView* _positionMarker;
	UIView* _middleLine;
	NSArray* _sampleGroups;
	NSMutableArray* _samplesToProcess;
	double _durationPerSegment;

}

@property (retain) UICollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (retain) UICollectionViewFlowLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (retain) UIView * positionMarker;                                        //@synthesize positionMarker=_positionMarker - In the implementation block
@property (retain) UIView * middleLine;                                            //@synthesize middleLine=_middleLine - In the implementation block
@property (retain) NSArray * sampleGroups;                                         //@synthesize sampleGroups=_sampleGroups - In the implementation block
@property (retain) NSMutableArray * samplesToProcess;                              //@synthesize samplesToProcess=_samplesToProcess - In the implementation block
@property (assign) double durationPerSegment;                                      //@synthesize durationPerSegment=_durationPerSegment - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)captureSession:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)setSampleGroups:(NSArray *)arg1 ;
-(void)setSamplesToProcess:(NSMutableArray *)arg1 ;
-(void)setDurationPerSegment:(double)arg1 ;
-(void)setMiddleLine:(UIView *)arg1 ;
-(UIView *)middleLine;
-(void)setPositionMarker:(UIView *)arg1 ;
-(UIView *)positionMarker;
-(void)updateContentOffsetToBeAtEnd;
-(void)updatePositionMarkerAndMiddleLine;
-(NSArray *)sampleGroups;
-(double)durationPerSegment;
-(id)sampleFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(NSMutableArray *)samplesToProcess;
-(void)processSamples;
-(float)powerLevelFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)loadWaveformFromAudioFileAtURL:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(UICollectionViewFlowLayout *)collectionViewLayout;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)commonInit;
-(void)setCollectionViewLayout:(UICollectionViewFlowLayout *)arg1 ;
@end
