/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUFlushableObject.h>

@interface TSUFlushableCachedImage : TSUFlushableObject {

	CGImageRef _image;
	id _delegate;
	SEL _delegateCreateImageSelector;

}
-(void)dealloc;
-(void)unload;
-(id)initWithDelegate:(id)arg1 createImageSelector:(SEL)arg2 ;
-(char)hasFlushableContent;
-(CGImageRef)newImage;
@end

