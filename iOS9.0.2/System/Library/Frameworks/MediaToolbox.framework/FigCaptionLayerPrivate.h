/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSMutableArray;

@interface FigCaptionLayerPrivate : NSObject {

	OpaqueFigCFCaptionRendererRef renderer;
	NSMutableArray* captionElementLayers;
	OpaqueFigSimpleMutexRef renderMutex;
	OpaqueFigReentrantMutexRef layoutSublayersMutex;

}
@end

