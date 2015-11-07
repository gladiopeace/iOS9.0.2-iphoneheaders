/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VoiceMemos/VoiceMemos-Structs.h>
@class NSMutableDictionary, NSMutableArray, RCComposition, RCCaptureSession, NSURL;

@interface RCCompositionController : NSObject {

	char _hasStartedRecording;
	NSMutableDictionary* _accessTokensByName;
	NSMutableArray* _undoableCompositionItemStack;
	char _hasLoggedUsageStatisticRecordingEvent;
	unsigned _usageHistoryMask;
	RCComposition* _composition;
	RCCaptureSession* _activeCaptureSession;

}

@property (nonatomic,retain) RCComposition * composition;                             //@synthesize composition=_composition - In the implementation block
@property (nonatomic,readonly) NSURL * savedRecordingURI; 
@property (nonatomic,readonly) RCCaptureSession * activeCaptureSession;               //@synthesize activeCaptureSession=_activeCaptureSession - In the implementation block
@property (nonatomic,readonly) unsigned countOfUndoableCompositions; 
@property (nonatomic,readonly) char isTopUndoableCompositionFromCapture; 
+(id)compositionControllerForComposedAVURL:(id)arg1 ;
-(id)init;
-(void)endEditing;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(RCComposition *)composition;
-(void)setComposition:(RCComposition *)arg1 ;
-(RCCaptureSession *)activeCaptureSession;
-(void)sanitizeWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSURL *)savedRecordingURI;
-(id)initWithComposition:(id)arg1 ;
-(void)beginAccessSessionToExportWithAssetReadyBlock:(/*^block*/id)arg1 ;
-(void)endTrimAccessSession;
-(void)endAccessSessions;
-(void)beginRecordingWithInputDevice:(id)arg1 captureInsertionRange:(SCD_Struct_RC4)arg2 isUndoable:(char)arg3 isOverdub:(char)arg4 sessionPreparedBlock:(/*^block*/id)arg5 sessionFinishedBlock:(/*^block*/id)arg6 ;
-(void)deleteCompositionFromFileSystem;
-(void)performCompositionUndoWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)performCompositionRedoWithRedoItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)activeRecordingSessionWillFinish;
-(void)deleteCompositionFromFileSystemAndDatabase;
-(void)beginAccessSessionToTrimAsCopy:(char)arg1 assetReadyBlock:(/*^block*/id)arg2 ;
-(char)isCaptureSessionActive;
-(void)_endAccessSessionWithToken:(id)arg1 ;
-(id)_nextCaptureWaveformDataSourceWithDestinationTimeRange:(SCD_Struct_RC4)arg1 isOverdub:(char)arg2 ;
-(id)_compositionByReplacingDecomposedFragments:(id)arg1 ;
-(void)_eaccess_saveCompositionAndRecordingDuration:(char)arg1 ;
-(void)_eaccess_saveCompositionAfterAppendingInProgressCaptureDataSource:(id)arg1 ;
-(void)_eaccess_saveCompositionAfterCommitingFinalizedCaptureDataSource:(id)arg1 ;
-(void)_reloadComposition;
-(unsigned)countOfUndoableCompositions;
-(void)_eaccess_repairDecomposedFragmentMetadataIfNecessaryAndSave:(char)arg1 ;
-(void)prepareToBeginEditingWithReadyBlock:(/*^block*/id)arg1 ;
-(void)endPreviewAccessSession;
-(void)beginAccessSessionToPlayTimeRange:(SCD_Struct_RC4)arg1 readyToPlayBlock:(/*^block*/id)arg2 ;
-(void)finalizingComposedAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)isTopUndoableCompositionFromCapture;
-(void)rcs_composeToFinalDestinationAndDeleteDecomposedFragments:(char)arg1 composeWaveform:(char)arg2 canGenerateWaveformByProcessingAVURL:(char)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)rcs_repairDecomposedFragmentMetadataIfNecessary;
-(id)_activitySourceRecording;
@end

