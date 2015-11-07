/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHAssetChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>

@class NSMutableArray, PHAssetResourceBag, PHAssetCreationPhotoStreamPublishingRequest, NSString, NSManagedObjectID;

@interface PHAssetCreationRequest : PHAssetChangeRequest <PHInsertChangeRequest> {

	NSMutableArray* _assetResources;
	PHAssetResourceBag* _assetResourceBag;
	PHAssetCreationPhotoStreamPublishingRequest* __photoStreamPublishingRequest;

}

@property (setter=_setPhotoStreamPublishingRequest:,nonatomic,retain) PHAssetCreationPhotoStreamPublishingRequest * _photoStreamPublishingRequest;              //@synthesize _photoStreamPublishingRequest=__photoStreamPublishingRequest - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isEntitled,nonatomic,readonly) char entitled; 
@property (nonatomic,readonly) NSString * clientName; 
@property (nonatomic,readonly) int clientProcessID; 
@property (getter=isNew,readonly) char new; 
+(id)_creationRequestForAssetUsingUUID:(id)arg1 ;
+(id)creationRequestForAssetFromImageData:(id)arg1 usingUUID:(id)arg2 ;
+(id)creationRequestForAssetFromImageData:(id)arg1 ;
+(id)creationRequestForAssetFromImage:(id)arg1 ;
+(id)creationRequestForAssetFromVideoAtFileURL:(id)arg1 ;
+(char)supportsAssetResourceTypes:(id)arg1 ;
+(char)_createAssetFromImageData:(id)arg1 imageType:(id)arg2 uuid:(id)arg3 error:(id*)arg4 ;
+(id)creationRequestForAssetFromVideoComplementBundle:(id)arg1 ;
+(id)creationRequestForAsset;
+(id)creationRequestForAssetFromImageAtFileURL:(id)arg1 ;
-(id)initWithHelper:(id)arg1 ;
-(char)isNew;
-(char)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)initWithXPCDict:(id)arg1 entitled:(char)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initForNewObject;
-(char)canGenerateUUIDLocally;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1 ;
-(id)initForNewObjectWithUUID:(id)arg1 ;
-(void)_addResourceWithType:(int)arg1 data:(id)arg2 orFileURL:(id)arg3 options:(id)arg4 ;
-(id)_secureMove:(char)arg1 fileAtURL:(id)arg2 toURL:(id)arg3 error:(id*)arg4 ;
-(id)_secureMove:(char)arg1 assetResource:(id)arg2 error:(id*)arg3 ;
-(id)_managedAssetFromData:(id)arg1 photoLibrary:(id)arg2 getImageSource:(CGImageSource*)arg3 imageData:(id*)arg4 ;
-(void)_setPhotoStreamPublishingRequest:(id)arg1 ;
-(char)_createAssetAsPhotoIris:(id)arg1 fromValidatedResources:(id)arg2 error:(id*)arg3 ;
-(char)_createAssetAsAdjusted:(id)arg1 fromValidatedResources:(id)arg2 error:(id*)arg3 ;
-(int)_mediaTypeForCreatedAsset;
-(char)_createAssetFromValidatedResources:(id)arg1 uuid:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(PHAssetCreationPhotoStreamPublishingRequest *)_photoStreamPublishingRequest;
-(void)addResourceWithType:(int)arg1 data:(id)arg2 options:(id)arg3 ;
-(void)addResourceWithType:(int)arg1 fileURL:(id)arg2 options:(id)arg3 ;
-(id)placeholderForCreatedAsset;
@end

