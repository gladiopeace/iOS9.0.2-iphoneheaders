/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UITraitCollection;

@interface BKBookLayoutGeometry : NSObject <NSCopying> {

	unsigned _layout;
	int _orientation;
	UITraitCollection* _traitCollection;
	CGSize _windowSize;

}

@property (nonatomic,readonly) float gutterWidth; 
@property (nonatomic,readonly) int orientation;                                //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) CGSize windowSize;                              //@synthesize windowSize=_windowSize - In the implementation block
@property (nonatomic,readonly) char hasSpreadPages; 
@property (assign,nonatomic) unsigned layout;                                  //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) char compactWidth; 
@property (nonatomic,readonly) char compactHeight; 
@property (assign,nonatomic) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) CGSize portraitSize; 
@property (nonatomic,readonly) CGSize landscapeSize; 
-(char)isScroll;
-(CGSize)initialSize;
-(CGRect)webViewRect;
-(char)p_isMegaPadSize;
-(char)hasSpreadPages;
-(id)initWithLayout:(unsigned)arg1 orientation:(int)arg2 traitCollection:(id)arg3 windowSize:(CGSize)arg4 ;
-(CGSize)webViewSize;
-(CGSize)p_layoutSizeForOrientation:(int)arg1 ;
-(char)compactWidth;
-(CGSize)p_webViewSizeForOrientation:(int)arg1 ;
-(CGRect)p_webViewRectForOrientation:(int)arg1 ;
-(CGSize)p_initialSizeForOrientation:(int)arg1 ;
-(char)p_isPadTwoThirdsSize;
-(char)p_isMegaPadPortraitTwoFifthsSize;
-(char)p_isMegaPadPortraitThreeFifthsSize;
-(char)p_isMegaPadPortraitOneThirdSize;
-(char)p_isMegaPadPortraitOneHalfSize;
-(char)p_isMegaPadPortraitTwoThirdsSize;
-(float)p_statusBarHeight;
-(char)isPortrait;
-(UITraitCollection *)traitCollection;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(int)orientation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(unsigned)layout;
-(void)setLayout:(unsigned)arg1 ;
-(CGSize)layoutSize;
-(float)gutterWidth;
-(char)isLandscape;
-(char)compactHeight;
-(CGSize)windowSize;
-(CGSize)landscapeSize;
-(CGSize)portraitSize;
@end
