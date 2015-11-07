/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIImage, UIColor;

@interface IMBookshelfImageConfiguration : NSObject {

	UIImage* _shelfBackgroundImage;
	UIImage* _topShelfShadingImage;
	UIImage* _appleLogoImage;
	UIImage* _shelfImage;
	UIImage* _landscapeShelfImage;
	UIImage* _shelfShadingImage;
	UIImage* _alternateLandscapeShelfImage;
	char _usesModernUI;
	UIColor* _shelfGradientTopColor;
	UIColor* _shelfGradientMidColor;
	float _shelfGradientMidY;
	UIColor* _shelfGradientBottomColor;
	int _numberOfShelves;
	float _topShelfHeight;
	float _shelfHeight;

}

@property (nonatomic,retain) UIImage * shelfBackgroundImage;                      //@synthesize shelfBackgroundImage=_shelfBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * topShelfShadingImage;                      //@synthesize topShelfShadingImage=_topShelfShadingImage - In the implementation block
@property (nonatomic,retain) UIImage * appleLogoImage;                            //@synthesize appleLogoImage=_appleLogoImage - In the implementation block
@property (nonatomic,retain) UIImage * shelfImage;                                //@synthesize shelfImage=_shelfImage - In the implementation block
@property (nonatomic,retain) UIImage * landscapeShelfImage;                       //@synthesize landscapeShelfImage=_landscapeShelfImage - In the implementation block
@property (nonatomic,retain) UIImage * shelfShadingImage;                         //@synthesize shelfShadingImage=_shelfShadingImage - In the implementation block
@property (nonatomic,retain) UIImage * alternateLandscapeShelfImage;              //@synthesize alternateLandscapeShelfImage=_alternateLandscapeShelfImage - In the implementation block
@property (assign,nonatomic) char usesModernUI;                                   //@synthesize usesModernUI=_usesModernUI - In the implementation block
@property (nonatomic,retain) UIColor * shelfGradientTopColor;                     //@synthesize shelfGradientTopColor=_shelfGradientTopColor - In the implementation block
@property (nonatomic,retain) UIColor * shelfGradientMidColor;                     //@synthesize shelfGradientMidColor=_shelfGradientMidColor - In the implementation block
@property (assign,nonatomic) float shelfGradientMidY;                             //@synthesize shelfGradientMidY=_shelfGradientMidY - In the implementation block
@property (nonatomic,retain) UIColor * shelfGradientBottomColor;                  //@synthesize shelfGradientBottomColor=_shelfGradientBottomColor - In the implementation block
@property (assign,nonatomic) int numberOfShelves;                                 //@synthesize numberOfShelves=_numberOfShelves - In the implementation block
@property (assign,nonatomic) float topShelfHeight;                                //@synthesize topShelfHeight=_topShelfHeight - In the implementation block
@property (assign,nonatomic) float shelfHeight;                                   //@synthesize shelfHeight=_shelfHeight - In the implementation block
-(char)usesModernUI;
-(int)numberOfShelves;
-(void)setNumberOfShelves:(int)arg1 ;
-(void)setShelfHeight:(float)arg1 ;
-(float)shelfGradientMidY;
-(UIColor *)shelfGradientTopColor;
-(UIColor *)shelfGradientMidColor;
-(UIColor *)shelfGradientBottomColor;
-(float)shelfHeight;
-(float)topShelfHeight;
-(UIImage *)shelfBackgroundImage;
-(UIImage *)topShelfShadingImage;
-(UIImage *)appleLogoImage;
-(UIImage *)shelfImage;
-(UIImage *)alternateLandscapeShelfImage;
-(UIImage *)landscapeShelfImage;
-(UIImage *)shelfShadingImage;
-(void)setShelfBackgroundImage:(UIImage *)arg1 ;
-(void)setTopShelfShadingImage:(UIImage *)arg1 ;
-(void)setAppleLogoImage:(UIImage *)arg1 ;
-(void)setShelfImage:(UIImage *)arg1 ;
-(void)setLandscapeShelfImage:(UIImage *)arg1 ;
-(void)setShelfShadingImage:(UIImage *)arg1 ;
-(void)setAlternateLandscapeShelfImage:(UIImage *)arg1 ;
-(void)setShelfGradientTopColor:(UIColor *)arg1 ;
-(void)setShelfGradientMidColor:(UIColor *)arg1 ;
-(void)setShelfGradientBottomColor:(UIColor *)arg1 ;
-(void)setUsesModernUI:(char)arg1 ;
-(void)setShelfGradientMidY:(float)arg1 ;
-(void)setTopShelfHeight:(float)arg1 ;
-(void)dealloc;
@end

