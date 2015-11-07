/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSNumber, NSString, NSDate, PLAdditionalAssetAttributes;

@interface PLUnmanagedAdjustment : PLManagedObject

@property (nonatomic,retain) NSNumber * adjustmentBaseImageFormat; 
@property (nonatomic,retain) NSString * adjustmentFormatIdentifier; 
@property (nonatomic,retain) NSString * adjustmentFormatVersion; 
@property (nonatomic,retain) NSDate * adjustmentTimestamp; 
@property (nonatomic,retain) NSString * editorLocalizedName; 
@property (nonatomic,retain) NSString * otherAdjustmentsFingerprint; 
@property (nonatomic,retain) NSString * similarToOriginalAdjustmentsFingerprint; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) PLAdditionalAssetAttributes * assetAttributes; 
+(id)addUnmanagedAdjustmentFromXMPDataIfNeededForAsset:(id)arg1 ;
+(id)addUnmanagedAdjustmentFromAdjustmentFileAtPath:(id)arg1 withAsset:(id)arg2 ;
+(id)_convertRedEyeCorrections:(id)arg1 withOrientation:(int)arg2 ;
+(id)_convertRedEyeCorrection:(id)arg1 withOrientation:(int)arg2 ;
-(void)willSave;
@end

