/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class UIImage;

@interface ICThumbnailData : NSObject {

	char _showAsFileIcon;
	char _isMovie;
	UIImage* _image;
	unsigned _imageScaling;

}

@property (nonatomic,retain) UIImage * image;                    //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned imageScaling;              //@synthesize imageScaling=_imageScaling - In the implementation block
@property (assign,nonatomic) char showAsFileIcon;                //@synthesize showAsFileIcon=_showAsFileIcon - In the implementation block
@property (assign,nonatomic) char isMovie;                       //@synthesize isMovie=_isMovie - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(id)initWithImage:(UIImage*)arg1 imageScaling:(unsigned)arg2 showAsFileIcon:(char)arg3 isMovie:(char)arg4 ;
-(unsigned)imageScaling;
-(void)setImageScaling:(unsigned)arg1 ;
-(char)showAsFileIcon;
-(void)setShowAsFileIcon:(char)arg1 ;
-(char)isMovie;
-(void)setIsMovie:(char)arg1 ;
@end

