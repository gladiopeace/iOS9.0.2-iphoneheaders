/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTiledLayoutGenerator.h>

@interface CKVerticalTiledLayoutGenerator : CKTiledLayoutGenerator {

	CGPoint _origin;
	SCD_Struct_CK9 _enqueuedCaptionTileInfo;
	char _shouldDisplayCaptionsBelowBatches;
	float _referenceWidth;

}

@property (assign,nonatomic) float referenceWidth;                                //@synthesize referenceWidth=_referenceWidth - In the implementation block
@property (assign,nonatomic) char shouldDisplayCaptionsBelowBatches;              //@synthesize shouldDisplayCaptionsBelowBatches=_shouldDisplayCaptionsBelowBatches - In the implementation block
-(void)setShouldDisplayCaptionsBelowBatches:(char)arg1 ;
-(char)shouldDisplayCaptionsBelowBatches;
-(void)setReferenceWidth:(float)arg1 ;
-(void)willParseTiles;
-(void)didParseTiles;
-(char)parseNextTiles;
-(float)referenceDistanceForMagneticGuidelines;
-(char)_parseTileRequiringFullWidth;
-(char)_parseSpecialSequence;
-(char)_parseSpecialTileTriplet;
-(char)_parseTileTriplet;
-(char)_parseTilePair;
-(char)_parseSingleTile;
-(char)_dequeueCaption;
-(float)referenceWidth;
-(char)_addRowWithContiguousTiles:(SCD_Struct_CK10*)arg1 count:(int)arg2 ;
-(char)_scanTilePair:(SCD_Struct_CK10*)arg1 ;
-(char)_scanTileTriplet:(SCD_Struct_CK10*)arg1 ;
-(char)_scanTileRequiringFullWidth:(SCD_Struct_CK10*)arg1 ;
-(char)_scanTileRequiringNewRow:(SCD_Struct_CK10*)arg1 ;
-(char)_hasLeftSuboptimalRow;
-(char)_addRowWithTiles:(SCD_Struct_CK10*)arg1 imageFrames:(CGRect*)arg2 count:(int)arg3 ;
-(char)_scanTripletWithLargeLead:(SCD_Struct_CK10*)arg1 ;
-(char)_scanTripletWithRearrangment:(SCD_Struct_CK10*)arg1 ;
-(char)_parseSpecialSubsequenceWithRowRequired:(char)arg1 rowParsed:(char*)arg2 ;
-(char)_scanSpecialSequenceBlock:(SCD_Struct_CK10*)arg1 ;
-(char)_scanSpecialSequenceRow:(SCD_Struct_CK10*)arg1 count:(int*)arg2 ;
-(char)_addSpecialSequenceBlock:(SCD_Struct_CK10*)arg1 ;
-(char)_scanNonPanoramaSequence:(SCD_Struct_CK10*)arg1 count:(int)arg2 ;
-(char)_isAtEndOfRow;
-(char)_hasEnqueuedCaption;
-(void)_enumerateRowFramesWithContiguousTiles:(SCD_Struct_CK10*)arg1 count:(int)arg2 useMagneticGuidelines:(char)arg3 block:(/*^block*/id)arg4 ;
-(void)_willAddRowWithFirstTileInfo:(SCD_Struct_CK10)arg1 ;
-(void)_enqueueCaptionWithTileInfo:(SCD_Struct_CK10)arg1 ;
@end

