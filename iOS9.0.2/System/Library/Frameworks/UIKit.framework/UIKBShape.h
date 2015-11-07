/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIKBGeometry;

@interface UIKBShape : NSObject <NSCoding, NSCopying> {

	UIKBGeometry* m_geometry;
	CGRect m_frame;
	CGRect m_paddedFrame;
	int m_concaveCorner;
	CGSize m_concaveCornerOffset;
	unsigned m_uid;
	char m_scaled;
	UIKBShape* m_originalShape;

}

@property (nonatomic,retain) UIKBGeometry * geometry; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) CGRect paddedFrame; 
@property (assign,nonatomic) int concaveCorner; 
@property (assign,nonatomic) CGSize concaveCornerOffset; 
@property (nonatomic,readonly) unsigned uid; 
@property (nonatomic,retain) UIKBShape * originalShape; 
@property (assign,nonatomic) char scaled; 
+(id)shape;
+(id)shapeByCombining:(id)arg1 withShape:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithGeometry:(id)arg1 frame:(CGRect)arg2 paddedFrame:(CGRect)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEmpty;
-(UIKBGeometry *)geometry;
-(CGRect)paddedFrame;
-(void)setPaddedFrame:(CGRect)arg1 ;
-(void)setGeometry:(UIKBGeometry *)arg1 ;
-(UIKBShape *)originalShape;
-(void)setOriginalShape:(UIKBShape *)arg1 ;
-(unsigned)uid;
-(int)concaveCorner;
-(CGSize)concaveCornerOffset;
-(void)setConcaveCorner:(int)arg1 ;
-(void)setConcaveCornerOffset:(CGSize)arg1 ;
-(void)addRectFrom:(id)arg1 widthFraction:(float)arg2 heightFraction:(float)arg3 adjustOriginXFactor:(float)arg4 adjustOriginYFactor:(float)arg5 absoluteOriginFactors:(char)arg6 ;
-(CGRect)_scaleRect:(CGRect)arg1 inYAxis:(char)arg2 ;
-(id)initWithGeometry:(id)arg1 frame:(CGRect)arg2 paddedFrame:(CGRect)arg3 concaveCorner:(int)arg4 concaveCornerOffset:(CGSize)arg5 ;
-(void)makeLikeOther:(id)arg1 ;
-(void)setConcaveCornerSize:(CGSize)arg1 ;
-(char)shouldUseGeometry;
-(void)addRectFrom:(id)arg1 ;
-(void)addRectFrom:(id)arg1 widthFraction:(float)arg2 heightFraction:(float)arg3 adjustOriginXFactor:(float)arg4 adjustOriginYFactor:(float)arg5 ;
-(void)addRectFrom:(id)arg1 mergeActionFactors:(id)arg2 ;
-(void)scaleWidth:(float)arg1 ;
-(void)scaleIfNeeded:(float)arg1 onlyYAxis:(char)arg2 ;
-(char)scaled;
-(void)setScaled:(char)arg1 ;
@end

