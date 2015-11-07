/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/AEHelper.h>

@protocol AEAsset;
@class BKLocation, NSString, AEAnnotationProvider;

@interface AEExampleImageHelper : NSObject <AEHelper> {

	id<AEAsset> _asset;
	BKLocation* _currentLocation;

}

@property (nonatomic,retain) BKLocation * currentLocation;                             //@synthesize currentLocation=_currentLocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AEAnnotationProvider * annotationProvider; 
-(id)helperMetadataForKey:(id)arg1 ;
-(void)helperDeletePersistentCache;
-(id)helperCoverImage;
-(void)helperViewControllerWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)initWithAsset:(id)arg1 ;
-(BKLocation *)currentLocation;
-(void)setCurrentLocation:(BKLocation *)arg1 ;
@end

