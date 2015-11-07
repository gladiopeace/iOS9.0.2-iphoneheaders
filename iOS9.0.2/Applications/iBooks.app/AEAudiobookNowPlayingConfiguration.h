/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/IMConfiguration.h>

@protocol UITraitEnvironmentIMLayoutEnvironment;
@interface AEAudiobookNowPlayingConfiguration : IMConfiguration {

	id<UITraitEnvironment><IMLayoutEnvironment> _context;
	float _sliderWidth;

}

@property (nonatomic,readonly) id<UITraitEnvironment><IMLayoutEnvironment> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) float bookTitleFontSize; 
@property (nonatomic,readonly) float bottomToolbarBottomPadding; 
@property (nonatomic,readonly) float bottomToolbarFontSize; 
@property (nonatomic,readonly) float bottomToolbarLeftPadding; 
@property (nonatomic,readonly) float bottomToolbarRightPadding; 
@property (nonatomic,readonly) float chapterTitleFontSize; 
@property (nonatomic,readonly) float coverImageOverlayFontSize; 
@property (nonatomic,readonly) float coverWidth; 
@property (nonatomic,readonly) float coverHeight; 
@property (nonatomic,readonly) float coverTopPadding; 
@property (nonatomic,readonly) float coverLeftPadding; 
@property (nonatomic,readonly) float fineScrubbingVerticalRange; 
@property (nonatomic,readonly) float innerShadowWidth; 
@property (nonatomic,readonly) float innerShadowHeight; 
@property (nonatomic,readonly) float markerTouchDimension; 
@property (nonatomic,readonly) float markerRadius; 
@property (nonatomic,readonly) char mergeBookTitleAndAuthor; 
@property (nonatomic,readonly) float playTimeHorizontalPadding; 
@property (nonatomic,readonly) float playTimesBaselineTopPadding; 
@property (nonatomic,readonly) float playTimesFontSize; 
@property (nonatomic,readonly) float shareButtonBottomPadding; 
@property (nonatomic,readonly) float shareButtonCenteringPriority; 
@property (nonatomic,readonly) float skipFontSize; 
@property (nonatomic,readonly) float scrubberTrackHorizontalInset; 
@property (nonatomic,readonly) float scrubberTrackWidth; 
@property (nonatomic,readonly) float scrubberTrackHeight; 
@property (nonatomic,readonly) float scrubberThumbWidth; 
@property (nonatomic,readonly) float scrubberThumbHeight; 
@property (nonatomic,readonly) float sliderWidth;                                                //@synthesize sliderWidth=_sliderWidth - In the implementation block
@property (nonatomic,readonly) float titlesContainerHeight; 
@property (nonatomic,readonly) float titlesContainerLeftPadding; 
@property (nonatomic,readonly) float titlesContainerRightPadding; 
@property (nonatomic,readonly) float titlesContainerTopPadding; 
@property (nonatomic,readonly) float topToolbarLeftPadding; 
@property (nonatomic,readonly) char topToolbarOverlaysCover; 
@property (nonatomic,readonly) float topToolbarRightPadding; 
@property (nonatomic,readonly) float topToolbarTopPadding; 
@property (nonatomic,readonly) float transportLeftPadding; 
@property (nonatomic,readonly) float transportRightPadding; 
@property (nonatomic,readonly) float transportSubInnerPadding; 
@property (nonatomic,readonly) float transportSubTopPadding; 
@property (nonatomic,readonly) float transportTopPadding; 
@property (nonatomic,readonly) float transportBottomPadding; 
@property (nonatomic,readonly) float volumeHorizontalInset; 
+(id)megaPhonePortraitSizePredicate;
+(id)megaPhoneLandscapeSizePredicate;
+(id)largePhonePortraitSizePredicate;
+(id)largePhoneLandscapeSizePredicate;
+(id)tallPhonePortraitSizePredicate;
+(id)tallPhoneLandscapeSizePredicate;
+(id)phonePortraitSizePredicate;
+(id)phoneLandscapeSizePredicate;
+(id)iPadSizePortraitPredicate;
+(id)iPadSizeLandscapePredicate;
+(id)iPadOneThirdSizePredicate;
+(id)iPadOneHalfSizePredicate;
+(id)iPadTwoThirdsSizePredicate;
+(id)iPadPortraitTwoFifthsSizePredicate;
+(id)iPadPortraitThreeFifthsSizePredicate;
-(float)fineScrubbingVerticalRange;
-(char)topToolbarOverlaysCover;
-(float)bottomToolbarBottomPadding;
-(float)bottomToolbarLeftPadding;
-(float)bottomToolbarRightPadding;
-(float)coverWidth;
-(float)coverHeight;
-(float)coverTopPadding;
-(float)coverLeftPadding;
-(float)innerShadowHeight;
-(float)innerShadowWidth;
-(float)scrubberTrackHorizontalInset;
-(float)playTimeHorizontalPadding;
-(float)playTimesBaselineTopPadding;
-(float)sliderWidth;
-(float)titlesContainerHeight;
-(float)titlesContainerLeftPadding;
-(float)titlesContainerRightPadding;
-(float)titlesContainerTopPadding;
-(float)topToolbarLeftPadding;
-(float)topToolbarRightPadding;
-(float)topToolbarTopPadding;
-(float)transportBottomPadding;
-(float)transportLeftPadding;
-(float)transportRightPadding;
-(float)transportSubInnerPadding;
-(float)transportSubTopPadding;
-(float)transportTopPadding;
-(float)volumeHorizontalInset;
-(float)bookTitleFontSize;
-(float)chapterTitleFontSize;
-(float)playTimesFontSize;
-(float)bottomToolbarFontSize;
-(float)skipFontSize;
-(float)shareButtonCenteringPriority;
-(float)shareButtonBottomPadding;
-(char)mergeBookTitleAndAuthor;
-(float)scrubberTrackWidth;
-(float)scrubberTrackHeight;
-(float)scrubberThumbWidth;
-(float)scrubberThumbHeight;
-(float)coverImageOverlayFontSize;
-(float)markerRadius;
-(float)markerTouchDimension;
-(void)_setupCover;
-(void)_configureShortPhone;
-(void)_configureTallPhone;
-(void)_configureLargePhone;
-(void)_configureMegaPhone;
-(void)_configurePad;
-(void)_configurePadOneThird;
-(void)_configurePadOneHalf;
-(void)_configurePadTwoThirds;
-(void)_configurePadPortraitTwoFifths;
-(void)_configurePadPortraitThreeFifths;
-(void)_configureMegaPadPortrait;
-(void)_configureMegaPadLandscape;
-(void)_configureMegaPadOneThird;
-(void)_configureMegaPadOneHalf;
-(void)_configureMegaPadTwoThirds;
-(void)_configureMegaPadPortraitTwoFifths;
-(void)_configureMegaPadPortraitThreeFifths;
-(id<UITraitEnvironment><IMLayoutEnvironment>)context;
-(id)initWithContext:(id)arg1 ;
@end

