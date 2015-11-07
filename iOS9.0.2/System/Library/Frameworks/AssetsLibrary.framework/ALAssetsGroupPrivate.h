/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssetsLibrary/AssetsLibrary-Structs.h>
#import <libobjc.A.dylib/ALAssetsLibraryAsset.h>

@class ALAssetsLibrary, ALAssetsFilter, NSMutableDictionary, PLPhotoLibrary, NSString;

@interface ALAssetsGroupPrivate : NSObject <ALAssetsLibraryAsset> {

	char _loadedAssets;
	ALAssetsLibrary* _library;
	char _isValid;
	char _isCloudSharedGroup;
	char _applyHyperionFilter;
	NSObject* _album;
	ALAssetsFilter* _assetsFilter;
	unsigned _groupType;
	NSMutableDictionary* _propertyValues;
	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,retain) ALAssetsFilter * assetsFilter;                     //@synthesize assetsFilter=_assetsFilter - In the implementation block
@property (assign,nonatomic) unsigned groupType;                                //@synthesize groupType=_groupType - In the implementation block
@property (assign,nonatomic) char isValid;                                      //@synthesize isValid=_isValid - In the implementation block
@property (assign,nonatomic) ALAssetsLibrary * library; 
@property (nonatomic,retain) NSMutableDictionary * propertyValues;              //@synthesize propertyValues=_propertyValues - In the implementation block
@property (nonatomic,retain) NSObject*<PLAlbumProtocol> album;                  //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * _photoLibrary;                    //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) char isCloudSharedGroup;                           //@synthesize isCloudSharedGroup=_isCloudSharedGroup - In the implementation block
@property (assign,nonatomic) char applyHyperionFilter;                          //@synthesize applyHyperionFilter=_applyHyperionFilter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAlbum:(NSObject*)arg1 library:(id)arg2 ;
-(void)populateAssets;
-(void)setAssetsFilter:(ALAssetsFilter *)arg1 ;
-(void)libraryDidChange;
-(PLPhotoLibrary *)_photoLibrary;
-(void)set_photoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)updateAlbumFiltering;
-(char)isCloudSharedGroup;
-(int)albumFilter;
-(void)resetAssets;
-(ALAssetsFilter *)assetsFilter;
-(void)setIsCloudSharedGroup:(char)arg1 ;
-(char)applyHyperionFilter;
-(void)setApplyHyperionFilter:(char)arg1 ;
-(ALAssetsLibrary *)library;
-(void)setLibrary:(ALAssetsLibrary *)arg1 ;
-(void)setGroupType:(unsigned)arg1 ;
-(unsigned)groupType;
-(NSObject*<PLAlbumProtocol>)album;
-(void)setAlbum:(NSObject*<PLAlbumProtocol>)arg1 ;
-(void)dealloc;
-(char)isValid;
-(id)valueForProperty:(id)arg1 ;
-(void)setIsValid:(char)arg1 ;
-(NSMutableDictionary *)propertyValues;
-(void)setPropertyValues:(NSMutableDictionary *)arg1 ;
-(void)_performBlockAndWait:(/*^block*/id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
@end

