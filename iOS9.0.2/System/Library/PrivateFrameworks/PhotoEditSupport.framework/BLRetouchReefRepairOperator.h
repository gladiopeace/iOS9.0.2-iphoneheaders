/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@interface BLRetouchReefRepairOperator : NSObject {

	void* _buffer;
	int _rowBytes;
	int _width;
	int _height;
	void* _maskBuffer;
	int _maskRowBytes;
	int _maskWidth;
	int _maskHeight;
	int _brushSize;
	CGRect _maskRect;

}
+(int)borderWithBrushSize:(int)arg1 ;
-(id)initWithRepairSourceData:(void*)arg1 rowBytes:(int)arg2 width:(int)arg3 height:(int)arg4 ;
-(void)setMaskRect:(CGRect)arg1 ;
-(void)setMaskData:(void*)arg1 rowBytes:(int)arg2 width:(int)arg3 height:(int)arg4 ;
-(void)setBrushSize:(int)arg1 ;
-(void)repair;
-(CGPoint)analyzeOffset;
-(void)repairWithOffset:(CGPoint)arg1 ;
@end

