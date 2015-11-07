/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIFont;

@interface TopoNumberBadge : CALayer {

	id _owningView;
	int _count;
	CGSize _imageSize;
	CGSize _textSize;
	UIFont* _font;

}

@property (assign,nonatomic) id owningView; 
@property (assign,nonatomic) int count;                  //@synthesize count=_count - In the implementation block
+(long)initImageCache;
+(void)deallocImageCache;
+(id)imageBadgeForCount:(int)arg1 ;
-(void)dealloc;
-(int)count;
-(id)owningView;
-(void)setOwningView:(id)arg1 ;
-(void)setCount:(int)arg1 ;
-(void)layoutSublayers;
-(CGSize)preferredFrameSize;
-(id)initWithOwningView:(id)arg1 ;
-(void)calculateBadgeMetrics;
-(CGImageRef)newNumberBadge;
@end

