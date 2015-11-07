/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <Foundation/NSBlockOperation.h>

@class NSString, NSCache, NSMutableArray, ICAttachmentPreviewImageLoader, NSURL;

@interface ICAttachmentThumbnailOperation : NSBlockOperation {

	char _showAsFileIcon;
	char _isMovie;
	NSString* _cacheKey;
	NSCache* _cache;
	/*^block*/id _fallbackBlock;
	/*^block*/id _processingBlock;
	NSMutableArray* _completionBlocks;
	ICAttachmentPreviewImageLoader* _attachmentPreviewImageLoader;
	NSURL* _mediaURL;
	unsigned _imageScaling;
	CGSize _minSize;

}

@property (nonatomic,retain) NSString * cacheKey;                                                        //@synthesize cacheKey=_cacheKey - In the implementation block
@property (assign,nonatomic) CGSize minSize;                                                             //@synthesize minSize=_minSize - In the implementation block
@property (nonatomic,retain) NSCache * cache;                                                            //@synthesize cache=_cache - In the implementation block
@property (nonatomic,copy) id fallbackBlock;                                                             //@synthesize fallbackBlock=_fallbackBlock - In the implementation block
@property (nonatomic,copy) id processingBlock;                                                           //@synthesize processingBlock=_processingBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionBlocks;                                          //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,retain) ICAttachmentPreviewImageLoader * attachmentPreviewImageLoader;              //@synthesize attachmentPreviewImageLoader=_attachmentPreviewImageLoader - In the implementation block
@property (nonatomic,retain) NSURL * mediaURL;                                                           //@synthesize mediaURL=_mediaURL - In the implementation block
@property (assign,nonatomic) unsigned imageScaling;                                                      //@synthesize imageScaling=_imageScaling - In the implementation block
@property (assign,nonatomic) char showAsFileIcon;                                                        //@synthesize showAsFileIcon=_showAsFileIcon - In the implementation block
@property (assign,nonatomic) char isMovie;                                                               //@synthesize isMovie=_isMovie - In the implementation block
-(NSURL *)mediaURL;
-(CGSize)minSize;
-(NSString *)cacheKey;
-(NSCache *)cache;
-(void)main;
-(void)setCacheKey:(NSString *)arg1 ;
-(void)setCache:(NSCache *)arg1 ;
-(void)setMinSize:(CGSize)arg1 ;
-(unsigned)imageScaling;
-(void)setImageScaling:(unsigned)arg1 ;
-(char)showAsFileIcon;
-(void)setShowAsFileIcon:(char)arg1 ;
-(void)setFallbackBlock:(id)arg1 ;
-(void)setProcessingBlock:(id)arg1 ;
-(void)setCompletionBlocks:(NSMutableArray *)arg1 ;
-(void)setAttachmentPreviewImageLoader:(ICAttachmentPreviewImageLoader *)arg1 ;
-(ICAttachmentPreviewImageLoader *)attachmentPreviewImageLoader;
-(id)fallbackBlock;
-(id)processingBlock;
-(id)initWithAttachment:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 cache:(id)arg4 cacheKey:(id)arg5 processingBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 fallbackBlock:(/*^block*/id)arg8 ;
-(char)isMovie;
-(void)setIsMovie:(char)arg1 ;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)completionBlocks;
-(void)setMediaURL:(NSURL *)arg1 ;
@end

