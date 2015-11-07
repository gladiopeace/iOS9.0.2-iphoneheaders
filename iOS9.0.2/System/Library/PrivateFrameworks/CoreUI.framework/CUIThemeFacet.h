/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/CUIThemeImageSource.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface CUIThemeFacet : NSObject <CUIThemeImageSource, NSCopying, NSCoding> {

	renditionkeytoken* _renditionKeyList;
	unsigned _themeIndex;
	int _renditionType;
	CGSize _thumbnailSize;
	CGPoint _hotSpot;
	struct {
		unsigned hasCheckedButtonGlyph : 1;
		unsigned isButtonGlyph : 1;
		unsigned reserved : 14;
	}  _fFlags;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(unsigned)themeNamed:(id)arg1 forBundleIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)_themeStoreForThemeIndex:(unsigned)arg1 ;
+(id)facetWithElement:(int)arg1 part:(int)arg2 dimension1:(int)arg3 dimension2:(int)arg4 fromTheme:(unsigned)arg5 ;
+(id)_facetWithKeyList:(const renditionkeytoken*)arg1 andRenditionKeyClass:(Class)arg2 orRenditionKey:(id)arg3 fromTheme:(unsigned)arg4 ;
+(void)_invalidateArtworkCaches;
+(unsigned)themeForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
+(unsigned)themeWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(unsigned)themeWithBytes:(const void*)arg1 length:(unsigned long)arg2 error:(id*)arg3 ;
+(void)themeUnregisterThemeRef:(unsigned)arg1 ;
+(id)debug_bundleIdentifierForThemeRef:(unsigned)arg1 ;
+(id)facetWithElement:(int)arg1 part:(int)arg2 fromTheme:(unsigned)arg3 ;
+(id)facetWithRenditionKey:(id)arg1 fromTheme:(unsigned)arg2 ;
+(id)cursorFacetWithName:(id)arg1 fromTheme:(unsigned)arg2 ;
+(char)assetExistsForRenditionKey:(id)arg1 fromTheme:(unsigned)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(float)alpha;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)image;
-(void)setControlSize:(int)arg1 ;
-(CGSize)imageSize;
-(id)imageForState:(int)arg1 ;
-(int)controlSize;
-(id)displayName;
-(id)thumbnail;
-(CGSize)thumbnailSize;
-(id)renditionKey;
-(id)_rendition;
-(id)_themeStore;
-(id)imageForSliceIndex:(int)arg1 ;
-(char)_isButtonGlyph;
-(id)_renditionForSpecificKey:(id)arg1 ;
-(void)_drawAsMaskSpecificRenditionKey:(id)arg1 inFrame:(CGRect)arg2 context:(CGContextRef)arg3 alpha:(float)arg4 operation:(int)arg5 isFocused:(int)arg6 ;
-(void)_drawSpecificRenditionKey:(id)arg1 inFrame:(CGRect)arg2 context:(CGContextRef)arg3 alpha:(float)arg4 operation:(int)arg5 isFocused:(int)arg6 isFlipped:(char)arg7 ;
-(id)initWithRenditionKey:(id)arg1 fromTheme:(unsigned)arg2 ;
-(void)_initWithRenditionKey:(id)arg1 ;
-(void)_applyFixedAttributesToKey:(id)arg1 ;
-(CGImageRef)copyLayerImageContentsAndCenter:(CGRect*)arg1 renditionKey:(id)arg2 ;
-(id)gradientWithKeyAdjustment:(id)arg1 angle:(float*)arg2 style:(unsigned*)arg3 ;
-(id)_makeLayerFromCAPackageData;
-(CGImageRef)copyLayerImageContentsAndCenter:(CGRect*)arg1 ;
-(id)blendModeAsCAFilterString;
-(void)_drawSpecificRenditionKey:(id)arg1 inFrame:(CGRect)arg2 context:(CGContextRef)arg3 isFocused:(int)arg4 isFlipped:(char)arg5 ;
-(void)drawInFrame:(CGRect)arg1 alpha:(float)arg2 operation:(int)arg3 isFocused:(int)arg4 context:(CGContextRef)arg5 ;
-(id)themeRendition;
-(void)drawInFrame:(CGRect)arg1 alpha:(float)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(CGContextRef)arg5 ;
-(void)drawHighlightInFrame:(CGRect)arg1 alpha:(float)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(CGContextRef)arg5 ;
-(void)drawMaskInFrame:(CGRect)arg1 alpha:(float)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(CGContextRef)arg5 ;
-(void)_updateSpecificRenditionKey:(id)arg1 isFocused:(char*)arg2 owner:(id)arg3 userInfo:(id)arg4 ;
-(char)_canGetRenditionForKey:(id)arg1 withDrawingLayer:(int)arg2 ;
-(id)_imageForRenditionFromKey:(id)arg1 withSize:(CGSize)arg2 isMask:(char)arg3 ;
-(void)drawInFrame:(CGRect)arg1 alpha:(float)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5 context:(CGContextRef)arg6 ;
-(void)drawHighlightInFrame:(CGRect)arg1 alpha:(float)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5 context:(CGContextRef)arg6 ;
-(void)_drawMaskFromSpecificRenditionKey:(id)arg1 inFrame:(CGRect)arg2 alpha:(float)arg3 operation:(int)arg4 isFocused:(int)arg5 context:(CGContextRef)arg6 ;
-(void)drawInFrame:(CGRect)arg1 alpha:(float)arg2 operation:(int)arg3 isFocused:(int)arg4 keyAdjustment:(id)arg5 context:(CGContextRef)arg6 ;
-(void)drawHighlightInFrame:(CGRect)arg1 alpha:(float)arg2 operation:(int)arg3 keyAdjustment:(id)arg4 context:(CGContextRef)arg5 ;
-(void)drawMaskInFrame:(CGRect)arg1 alpha:(float)arg2 operation:(int)arg3 isFocused:(int)arg4 keyAdjustment:(id)arg5 context:(CGContextRef)arg6 ;
-(id)renditionForSpecificKeyWrapper:(id)arg1 ;
-(void)_drawSpecificRenditionKey:(id)arg1 rendition:(id)arg2 inFrame:(CGRect)arg3 context:(CGContextRef)arg4 alpha:(float)arg5 operation:(int)arg6 isFocused:(int)arg7 isFlipped:(char)arg8 ;
-(void)drawGradientInFrame:(CGRect)arg1 angle:(float)arg2 alpha:(float)arg3 operation:(int)arg4 isFocused:(int)arg5 keyAdjustment:(id)arg6 context:(CGContextRef)arg7 ;
-(int)_sliceIndexForSlice:(int)arg1 ofRendition:(id)arg2 ;
-(id)_approximateRenditionForRenditionKey:(id)arg1 ;
-(id)imageForState:(int)arg1 value:(int)arg2 ;
-(char)isValidButtonImageSourceForSize:(unsigned)arg1 ;
-(id)imageForState:(int)arg1 value:(int)arg2 size:(unsigned)arg3 ;
-(float)alphaWithKeyAdjustment:(id)arg1 ;
-(int)blendModeWithKeyAdjustment:(id)arg1 ;
-(id)blendModeAsCAFilterStringWithKeyAjustment:(id)arg1 ;
-(CGSize)_thumbnailSizeForRendition:(id)arg1 ;
-(id)imageForState:(int)arg1 withValue:(int)arg2 ;
-(char)hasValueSlices;
-(CGPoint)_hotSpot;
-(void)_setHasCheckedButtonGlyph:(char)arg1 ;
-(void)_setIsButtonGlyph:(char)arg1 ;
-(id)makeLayer;
-(void)updateLayer:(id)arg1 ;
-(void)drawInFrame:(CGRect)arg1 isFocused:(int)arg2 context:(CGContextRef)arg3 ;
-(void)drawInFrame:(CGRect)arg1 alpha:(float)arg2 isFocused:(int)arg3 context:(CGContextRef)arg4 ;
-(void)drawAsOnePartWithSlice:(int)arg1 inFrame:(CGRect)arg2 isFocused:(int)arg3 context:(CGContextRef)arg4 ;
-(void)drawAbsoluteAnimationFrame:(double)arg1 destinationFrame:(CGRect)arg2 isFocused:(int)arg3 context:(CGContextRef)arg4 ;
-(void)drawAnimationFrameMappedFrom0_1RangedValue:(double)arg1 destinationFrame:(CGRect)arg2 isFocused:(int)arg3 context:(CGContextRef)arg4 ;
-(void)drawSegmentInFrame:(CGRect)arg1 isFocused:(int)arg2 segmentType:(int)arg3 context:(CGContextRef)arg4 ;
-(void)drawInFrame:(CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(CGContextRef)arg4 ;
-(void)drawHighlightInFrame:(CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(CGContextRef)arg4 ;
-(void)drawMaskInFrame:(CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(CGContextRef)arg4 ;
-(char)hitTestAtPoint:(CGPoint)arg1 inFrame:(CGRect)arg2 owner:(id)arg3 userInfo:(id)arg4 ;
-(void)drawPulseInFrame:(CGRect)arg1 pulseValue:(float)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(CGContextRef)arg5 ;
-(void)drawInFrame:(CGRect)arg1 alpha:(float)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(CGContextRef)arg5 ;
-(void)drawHighlightInFrame:(CGRect)arg1 alpha:(float)arg2 keyAdjustment:(id)arg3 context:(CGContextRef)arg4 ;
-(void)drawMaskInFrame:(CGRect)arg1 alpha:(float)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(CGContextRef)arg5 ;
-(void)drawPulseInFrame:(CGRect)arg1 pulseValue:(float)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(CGContextRef)arg5 ;
-(void)_drawSlice:(int)arg1 inFrame:(CGRect)arg2 withKeyAdjustment:(id)arg3 context:(CGContextRef)arg4 ;
-(id)renditionMetricsWithKeyAdjustment:(id)arg1 ;
-(id)renditionSliceInformationForRect:(CGRect)arg1 keyAdjustment:(id)arg2 ;
-(char)isValidButtonImageSource;
-(id)imageWithKeyAdjustment:(id)arg1 ;
-(void)_setThemeIndex:(unsigned)arg1 ;
-(int)renditionType;
-(CGSize)topLeftCapSize;
-(id)maskForSlice:(int)arg1 withKeyAdjustment:(id)arg2 ;
-(id)imageForSlice:(int)arg1 withKeyAdjustment:(id)arg2 ;
-(id)imageWithSize:(CGSize)arg1 keyAdjustment:(id)arg2 ;
-(id)highlightWithSize:(CGSize)arg1 keyAdjustment:(id)arg2 ;
-(id)maskWithSize:(CGSize)arg1 keyAdjustment:(id)arg2 ;
-(int)blendMode;
-(unsigned)themeIndex;
@end

