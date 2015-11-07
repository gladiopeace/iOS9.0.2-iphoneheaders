/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AssetsLibrary/AssetsLibrary-Structs.h>
@class ALAssetsLibrary, PLPhotoLibrary, NSHashTable, NSMutableDictionary;

@interface ALAssetsLibraryPrivate : NSObject {

	ALAssetsLibrary* _assetsLibrary;
	PLPhotoLibrary* _photoLibrary;
	NSHashTable* _assetGroupInternals;
	NSMutableDictionary* _groupURLSByAlbumOID;
	char _isValid;

}

@property (assign,nonatomic) ALAssetsLibrary * assetsLibrary;                     //@synthesize assetsLibrary=_assetsLibrary - In the implementation block
@property (nonatomic,retain,readonly) PLPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) char isValid;                                        //@synthesize isValid=_isValid - In the implementation block
-(void)registerAlbum:(NSObject*)arg1 assetGroupPrivate:(id)arg2 ;
-(void)setAssetsLibrary:(ALAssetsLibrary *)arg1 ;
-(id)initWithAssetsLibrary:(id)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(ALAssetsLibrary *)assetsLibrary;
-(void)dealloc;
-(char)isValid;
-(void)setIsValid:(char)arg1 ;
@end

