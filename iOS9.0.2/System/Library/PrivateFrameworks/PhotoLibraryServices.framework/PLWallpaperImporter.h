/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSArray, PLPhotoLibrary, PLManagedObjectContext;

@interface PLWallpaperImporter : NSObject {

	NSData* _wallpaperFileHash;
	NSArray* _allWallpaperURLs;
	PLPhotoLibrary* photoLibrary;

}

@property (nonatomic,retain,readonly) NSArray * allWallpaperURLs; 
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,retain,readonly) PLManagedObjectContext * managedObjectContext; 
+(id)posterImageURL;
+(void)importWallpaperAssetsIntoPhotoLibrary:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(void)dealloc;
-(id)init;
-(PLManagedObjectContext *)managedObjectContext;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)updateAsNeeded;
-(NSArray *)allWallpaperURLs;
-(id)wallpaperFileHash;
-(void)deleteAll;
-(void)importAll;
-(id)allExistingWallpaperAssets;
-(void)addWallpaperURLsForModel:(id)arg1 toURLs:(id)arg2 ;
@end
