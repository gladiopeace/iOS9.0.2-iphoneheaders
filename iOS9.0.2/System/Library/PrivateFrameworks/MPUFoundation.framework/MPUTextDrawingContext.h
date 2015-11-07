/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MPUFoundation/MPUFoundation-Structs.h>
@class NSString, NSAttributedString, NSStringDrawingContext, NSDictionary, UIImage;

@interface MPUTextDrawingContext : NSObject {

	NSString* _text;
	NSAttributedString* _attributedText;
	NSStringDrawingContext* _stringDrawingContext;
	int _stringDrawingOptions;
	NSDictionary* _uniformTextAttributes;
	float _firstBaselineOffsetFromTop;
	float _lastBaselineOffsetFromBottom;
	UIImage* _image;
	CGSize _boundingSize;

}

@property (nonatomic,copy) NSString * text;                                                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                            //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) NSStringDrawingContext * stringDrawingContext;                //@synthesize stringDrawingContext=_stringDrawingContext - In the implementation block
@property (assign,nonatomic) int stringDrawingOptions;                                     //@synthesize stringDrawingOptions=_stringDrawingOptions - In the implementation block
@property (nonatomic,copy) NSDictionary * uniformTextAttributes;                           //@synthesize uniformTextAttributes=_uniformTextAttributes - In the implementation block
@property (assign,nonatomic) CGSize boundingSize;                                          //@synthesize boundingSize=_boundingSize - In the implementation block
@property (assign,nonatomic) float firstBaselineOffsetFromTop;                             //@synthesize firstBaselineOffsetFromTop=_firstBaselineOffsetFromTop - In the implementation block
@property (assign,nonatomic) float lastBaselineOffsetFromBottom;                           //@synthesize lastBaselineOffsetFromBottom=_lastBaselineOffsetFromBottom - In the implementation block
@property (setter=_setImage:,getter=_image,nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
-(void)_setImage:(id)arg1 ;
-(id)_image;
-(NSString *)text;
-(NSAttributedString *)attributedText;
-(void)_setText:(id)arg1 ;
-(float)lastBaselineOffsetFromBottom;
-(float)firstBaselineOffsetFromTop;
-(void)_setAttributedText:(id)arg1 ;
-(void)_setBoundingSize:(CGSize)arg1 ;
-(void)_setFirstBaselineOffsetFromTop:(float)arg1 ;
-(void)_setLastBaselineOffsetFromBottom:(float)arg1 ;
-(void)_setUniformTextAttributes:(id)arg1 ;
-(void)_setStringDrawingContext:(id)arg1 ;
-(void)_setStringDrawingOptions:(int)arg1 ;
-(int)stringDrawingOptions;
-(NSDictionary *)uniformTextAttributes;
-(CGSize)boundingSize;
-(NSStringDrawingContext *)stringDrawingContext;
@end

