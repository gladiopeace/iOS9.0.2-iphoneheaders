/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUCellConfigurationContext.h>

@class SUImageCache, ISURLOperationPool, SUImageDataProvider, UIImage;

@interface SUArtworkCellContext : SUCellConfigurationContext {

	SUImageCache* _imageCache;
	ISURLOperationPool* _imagePool;
	SUImageDataProvider* _imageProvider;
	UIImage* _placeholderImage;

}

@property (nonatomic,retain) SUImageCache * imageCache;                        //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) ISURLOperationPool * imagePool;                   //@synthesize imagePool=_imagePool - In the implementation block
@property (nonatomic,retain) SUImageDataProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                       //@synthesize placeholderImage=_placeholderImage - In the implementation block
-(void)setImageCache:(SUImageCache *)arg1 ;
-(SUImageCache *)imageCache;
-(void)dealloc;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(ISURLOperationPool *)imagePool;
-(SUImageDataProvider *)imageProvider;
-(void)setImagePool:(ISURLOperationPool *)arg1 ;
-(void)setImageProvider:(SUImageDataProvider *)arg1 ;
@end

