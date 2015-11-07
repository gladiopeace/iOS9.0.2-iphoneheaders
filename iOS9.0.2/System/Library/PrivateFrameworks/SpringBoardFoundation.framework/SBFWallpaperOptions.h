/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@class NSString;

@interface SBFWallpaperOptions : NSObject {

	char _supportsCropping;
	char _isPortrait;
	char _hasVideo;
	NSString* _name;
	float _parallaxFactor;
	float _zoomScale;
	double _stillTimeInVideo;
	CGRect _cropRect;

}

@property (nonatomic,copy,readonly) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char parallaxEnabled; 
@property (nonatomic,readonly) float parallaxFactor;                 //@synthesize parallaxFactor=_parallaxFactor - In the implementation block
@property (nonatomic,readonly) float zoomScale;                      //@synthesize zoomScale=_zoomScale - In the implementation block
@property (nonatomic,readonly) char supportsCropping;                //@synthesize supportsCropping=_supportsCropping - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;                      //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,readonly) char isPortrait;                      //@synthesize isPortrait=_isPortrait - In the implementation block
@property (nonatomic,readonly) char hasVideo;                        //@synthesize hasVideo=_hasVideo - In the implementation block
@property (nonatomic,readonly) double stillTimeInVideo;              //@synthesize stillTimeInVideo=_stillTimeInVideo - In the implementation block
+(id)optionsWithName:(id)arg1 parallaxFactor:(float)arg2 zoomScale:(float)arg3 supportsCropping:(char)arg4 cropRect:(CGRect)arg5 portrait:(char)arg6 ;
+(id)optionsWithName:(id)arg1 parallaxFactor:(float)arg2 zoomScale:(float)arg3 supportsCropping:(char)arg4 cropRect:(CGRect)arg5 portrait:(char)arg6 hasVideo:(char)arg7 stillTimeInVideo:(double)arg8 ;
-(char)isPortrait;
-(CGRect)cropRect;
-(float)parallaxFactor;
-(char)parallaxEnabled;
-(void)dealloc;
-(NSString *)name;
-(float)zoomScale;
-(char)hasVideo;
-(id)initWithName:(id)arg1 parallaxFactor:(float)arg2 zoomScale:(float)arg3 supportsCropping:(char)arg4 cropRect:(CGRect)arg5 portrait:(char)arg6 hasVideo:(char)arg7 stillTimeInVideo:(double)arg8 ;
-(char)supportsCropping;
-(double)stillTimeInVideo;
@end
