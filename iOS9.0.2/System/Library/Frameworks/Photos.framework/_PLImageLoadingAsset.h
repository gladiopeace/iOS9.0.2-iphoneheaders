/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _PLImageLoadingAsset <NSObject>
@required
-(char)isCloudSharedAsset;
-(char)isRAW;
-(char)isCloudPlaceholder;
-(char)hasAdjustments;
-(double)aspectRatio;
-(id)objectID;
-(short)kindSubtype;
-(char)isTimelapsePlaceholder;
-(char)isJPEG;
-(id)uniformTypeIdentifier;
-(char)duration;
-(int)orientation;
-(CGSize*)imageSize;
-(short)kind;
-(id)uuid;
-(char)isVideo;
-(char)complete;
-(short)savedAssetType;
-(id)pathForOriginalFile;
-(unsigned)effectiveThumbnailIndex;
-(char)isInFlight;
-(id)pl_photoLibrary;
-(char)hasLegacyAdjustments;
-(id)pathForPenultimateFullsizeRenderImageFile;
-(id)reservedPathForLargeDisplayableImageFileForceLarge:(char)arg1 forceUpgradeFromSubstandardIfNecessary:(char)arg2 outImageType:(int*)arg3;
-(id)thumbnailIdentifier;
-(id)pathForAdjustmentFile;
-(id)pathForSubstandardFullsizeRenderImageFile;
-(id)fileURLForFullsizeRenderVideo;
-(id)assetsLibraryURL;
-(int)originalImageOrientation;
-(id)debugFilename;
-(char)isPartOfBurst;
-(id)pathForAdjustmentDataFile;
-(id)fileURLForFullsizeRenderImage;
-(int)cloudSharedAssetPlaceholderKind;
-(char)isCloudPhotoLibraryAsset;
-(id)managedAssetForPhotoLibrary:(id)arg1;

@end

