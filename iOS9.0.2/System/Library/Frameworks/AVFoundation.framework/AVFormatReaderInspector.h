/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspector.h>

@interface AVFormatReaderInspector : AVAssetInspector {

	OpaqueFigFormatReaderRef _formatReader;
	char didCheckForSaveRestriction;
	char hasSaveRestriction;

}

@property (setter=_setFormatReader:,getter=_formatReader,nonatomic,retain) OpaqueFigFormatReaderRef formatReader; 
-(float)preferredRate;
-(float)preferredVolume;
-(float)preferredSoundCheckVolumeNormalization;
-(int)naturalTimeScale;
-(char)providesPreciseDurationAndTiming;
-(id)alternateTrackGroups;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(char)isExportable;
-(char)isComposable;
-(char)canContainFragments;
-(char)containsFragments;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)initWithFormatReader:(OpaqueFigFormatReaderRef)arg1 ;
-(void)_setFormatReader:(OpaqueFigFormatReaderRef)arg1 ;
-(char)_hasQTSaveRestriction;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(id)lyrics;
-(id)trackReferences;
-(long)trackCount;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(SCD_Struct_CM5)duration;
-(CGSize)naturalSize;
-(char)isReadable;
-(void)finalize;
-(CGAffineTransform)preferredTransform;
-(id)commonMetadata;
@end

