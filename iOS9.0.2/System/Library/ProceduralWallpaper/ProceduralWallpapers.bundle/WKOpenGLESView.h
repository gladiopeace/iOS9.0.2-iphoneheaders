/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_queue;
@class EAGLContext, NSObject, CADisplayLink;

@interface WKOpenGLESView : UIView {

	char _initialized;
	EAGLContext* _context;
	unsigned _framebuffer;
	unsigned _renderbuffer;
	NSObject*<OS_dispatch_queue> displayQueue;
	CADisplayLink* displayLink;
	int frameInterval;

}

@property (assign) int frameInterval; 
+(Class)layerClass;
-(void)prepare;
-(void)setDrawableSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)_init;
-(void)setFrameInterval:(int)arg1 ;
-(int)frameInterval;
-(void)setAnimating:(char)arg1 ;
-(void)drawGL:(id)arg1 ;
-(char)drawAtTime:(double)arg1 ;
@end

