/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PHImageRequestOptions : NSObject <NSCopying> {

	char _networkAccessAllowed;
	char _synchronous;
	char _memoryCachingAllowed;
	char _deliveryFirstResultAsynchronously;
	char _degradedFormatPreferJPEG;
	char _allowPlaceholder;
	int _version;
	int _deliveryMode;
	int _resizeMode;
	/*^block*/id _progressHandler;
	int _loadingMode;
	int _rank;
	/*^block*/id _cachingCompletedHandler;
	double _demoteFactor;
	double _aspectRatioHint;
	double _downloadUpdateInterval;
	CGRect _normalizedCropRect;

}

@property (assign,nonatomic) int version;                                                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) int deliveryMode;                                                     //@synthesize deliveryMode=_deliveryMode - In the implementation block
@property (assign,nonatomic) int resizeMode;                                                       //@synthesize resizeMode=_resizeMode - In the implementation block
@property (assign,nonatomic) CGRect normalizedCropRect;                                            //@synthesize normalizedCropRect=_normalizedCropRect - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) char networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (assign,getter=isSynchronous,nonatomic) char synchronous;                                //@synthesize synchronous=_synchronous - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                     //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,nonatomic) int loadingMode;                                                      //@synthesize loadingMode=_loadingMode - In the implementation block
@property (assign,getter=isMemoryCachingAllowed,nonatomic) char memoryCachingAllowed;              //@synthesize memoryCachingAllowed=_memoryCachingAllowed - In the implementation block
@property (assign,nonatomic) char deliveryFirstResultAsynchronously;                               //@synthesize deliveryFirstResultAsynchronously=_deliveryFirstResultAsynchronously - In the implementation block
@property (assign,nonatomic) char degradedFormatPreferJPEG;                                        //@synthesize degradedFormatPreferJPEG=_degradedFormatPreferJPEG - In the implementation block
@property (assign,nonatomic) char allowPlaceholder;                                                //@synthesize allowPlaceholder=_allowPlaceholder - In the implementation block
@property (assign,nonatomic) int rank;                                                             //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) double demoteFactor;                                                  //@synthesize demoteFactor=_demoteFactor - In the implementation block
@property (assign,nonatomic) double aspectRatioHint;                                               //@synthesize aspectRatioHint=_aspectRatioHint - In the implementation block
@property (assign,nonatomic) double downloadUpdateInterval;                                        //@synthesize downloadUpdateInterval=_downloadUpdateInterval - In the implementation block
@property (nonatomic,copy) id cachingCompletedHandler;                                             //@synthesize cachingCompletedHandler=_cachingCompletedHandler - In the implementation block
+(id)defaultOptionsAllowingPlaceholder;
-(void)setAllowPlaceholder:(char)arg1 ;
-(int)deliveryMode;
-(int)loadingMode;
-(int)resizeMode;
-(char)isMemoryCachingAllowed;
-(char)isSynchronous;
-(char)deliveryFirstResultAsynchronously;
-(char)degradedFormatPreferJPEG;
-(void)setDegradedFormatPreferJPEG:(char)arg1 ;
-(char)allowPlaceholder;
-(double)demoteFactor;
-(void)setDemoteFactor:(double)arg1 ;
-(double)aspectRatioHint;
-(double)downloadUpdateInterval;
-(id)cachingCompletedHandler;
-(void)setCachingCompletedHandler:(id)arg1 ;
-(void)setDeliveryMode:(int)arg1 ;
-(void)setAspectRatioHint:(double)arg1 ;
-(void)setDownloadUpdateInterval:(double)arg1 ;
-(void)setNetworkAccessAllowed:(char)arg1 ;
-(id)progressHandler;
-(void)setLoadingMode:(int)arg1 ;
-(void)setNormalizedCropRect:(CGRect)arg1 ;
-(CGRect)normalizedCropRect;
-(char)isNetworkAccessAllowed;
-(void)setMemoryCachingAllowed:(char)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(void)setProgressHandler:(id)arg1 ;
-(void)setSynchronous:(char)arg1 ;
-(void)setResizeMode:(int)arg1 ;
-(int)rank;
-(void)setRank:(int)arg1 ;
-(void)setDeliveryFirstResultAsynchronously:(char)arg1 ;
@end

