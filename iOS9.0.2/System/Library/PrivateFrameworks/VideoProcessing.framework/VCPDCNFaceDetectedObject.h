/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPDCNExternalDetectedObject.h>

@class NSString;

@interface VCPDCNFaceDetectedObject : NSObject <VCPDCNExternalDetectedObject> {

	int objectType;
	CGPoint center;
	CGRect bounds;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) int objectType; 
@property (assign) CGRect bounds; 
@property (assign) CGPoint center; 
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setObjectType:(int)arg1 ;
-(int)objectType;
-(id)initWithOptionsXloc:(float)arg1 yloc:(float)arg2 size:(float)arg3 ;
@end

