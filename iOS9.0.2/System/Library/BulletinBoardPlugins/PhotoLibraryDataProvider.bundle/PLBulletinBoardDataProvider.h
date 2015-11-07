/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/BulletinBoardPlugins/PhotoLibraryDataProvider.bundle/PhotoLibraryDataProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryDataProvider/PhotoLibraryDataProvider-Structs.h>
#import <libobjc.A.dylib/BBDataProvider.h>

@protocol OS_dispatch_queue;
@class NSArray, NSMutableArray, NSObject, NSString;

@interface PLBulletinBoardDataProvider : NSObject <BBDataProvider> {

	NSArray* _bulletins;
	NSMutableArray* _bulletinThumbnailData;
	NSObject*<OS_dispatch_queue> _serialQueue;
	int _lastDisplayedRecordID;
	unsigned long _defaultSoundID;

}

@property (nonatomic,retain) NSArray * bulletins;                       //@synthesize bulletins=_bulletins - In the implementation block
@property (assign,nonatomic) unsigned long defaultSoundID;              //@synthesize defaultSoundID=_defaultSoundID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGImageRef)_newImageByScalingAndCroppingImage:(CGImageRef)arg1 withConstraints:(id)arg2 ;
-(unsigned long)_createSoundForPath:(id)arg1 ;
-(id)_bulletinFromDictionary:(id)arg1 isOriginal:(char*)arg2 ;
-(id)_discardedBulletinsFromCurrentBulletins:(id)arg1 ;
-(void)_updateLastDisplayedBulletinRecordID:(int)arg1 ;
-(void)_updateImageDataCache:(id)arg1 ;
-(id)_imageDataForRecordID:(int)arg1 ;
-(void)_bulletinsChanged;
-(void)_applicationBadgeCountChanged;
-(unsigned long)defaultSoundID;
-(void)setDefaultSoundID:(unsigned long)arg1 ;
-(void)dealloc;
-(id)init;
-(id)sortDescriptors;
-(NSArray *)bulletins;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 ;
-(float)attachmentAspectRatioForRecordID:(id)arg1 ;
-(void)dataProviderDidLoad;
-(char)syncsBulletinDismissal;
-(id)universalSectionIdentifier;
-(id)defaultSectionInfo;
-(void)setBulletins:(NSArray *)arg1 ;
-(id)sectionIdentifier;
@end

