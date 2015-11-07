/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class CUICatalog, CUIStyleEffectConfiguration;

@interface NSLineFragmentRenderingContext : NSObject {

	void* _runs;
	long _numRuns;
	unsigned short* _glyphs;
	CGSize* _advancements;
	float _leftSideDelta;
	float _lineWidth;
	float _leftControlWidth;
	float _rightControlWidth;
	float _elasticWidth;
	CGRect _imageBounds;
	struct {
		unsigned _isRTL : 1;
		unsigned _vAdvance : 1;
		unsigned _flipped : 1;
		unsigned _usesSimpleTextEffects : 1;
		unsigned _reserved : 28;
	}  _flags;
	CUICatalog* _catalog;
	CUIStyleEffectConfiguration* _styleEffects;

}

@property (nonatomic,retain) CUICatalog * cuiCatalog;                                                                                 //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,retain) CUIStyleEffectConfiguration * cuiStyleEffects;                                                           //@synthesize styleEffects=_styleEffects - In the implementation block
@property (assign,setter=_setUsesSimpleTextEffects:,getter=_usesSimpleTextEffects,nonatomic) char usesSimpleTextEffects; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(void)dealloc;
-(oneway void)release;
-(char)_isDeallocating;
-(void)_setUsesSimpleTextEffects:(char)arg1 ;
-(char)_usesSimpleTextEffects;
-(char)_tryRetain;
-(char)isRTL;
-(void)finalize;
-(CUICatalog *)cuiCatalog;
-(CUIStyleEffectConfiguration *)cuiStyleEffects;
-(id)initWithRuns:(CFArrayRef)arg1 glyphOrigin:(float)arg2 lineFragmentWidth:(float)arg3 elasticWidth:(float)arg4 usesScreenFonts:(char)arg5 isRTL:(char)arg6 ;
-(void)drawAtPoint:(CGPoint)arg1 inContext:(CGContextRef)arg2 ;
-(CGSize)sizeWithBehavior:(int)arg1 usesFontLeading:(char)arg2 baselineDelta:(float*)arg3 ;
-(void)getMaximumAscender:(float*)arg1 minimumDescender:(float*)arg2 ;
-(float)lineFragmentWidth;
-(float)elasticWidth;
-(CGRect)imageBounds;
-(void)setCuiCatalog:(CUICatalog *)arg1 ;
-(void)setCuiStyleEffects:(CUIStyleEffectConfiguration *)arg1 ;
@end

