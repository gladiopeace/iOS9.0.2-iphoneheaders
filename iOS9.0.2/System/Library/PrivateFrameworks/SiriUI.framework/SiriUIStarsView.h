/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImage;

@interface SiriUIStarsView : UIView {

	double _rating;
	double _maxRating;
	UIImage* _starsImage;
	char _snapsToHalfStar;
	int _style;
	int _maxNumberOfStars;

}

@property (assign,nonatomic) int style;                         //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) char snapsToHalfStar;              //@synthesize snapsToHalfStar=_snapsToHalfStar - In the implementation block
@property (assign,nonatomic) int maxNumberOfStars;              //@synthesize maxNumberOfStars=_maxNumberOfStars - In the implementation block
+(id)_starsImageCache;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(id)_starMaskSmall;
-(id)_starMaskMedium;
-(id)_starMaskLarge;
-(void)_updateStarsForStyleAndTotalNumber;
-(id)_cacheKeyForStyle:(int)arg1 numberOfStars:(int)arg2 ;
-(id)_starMaskForStyle:(int)arg1 ;
-(float)_starSpacingForStyle:(int)arg1 ;
-(CGSize)_sizeForStar:(id)arg1 spacing:(float)arg2 ;
-(float)_xForFractionalPartOfStars:(float)arg1 inWidth:(float)arg2 ;
-(void)setRating:(double)arg1 maxRating:(double)arg2 ;
-(char)snapsToHalfStar;
-(void)setSnapsToHalfStar:(char)arg1 ;
-(int)maxNumberOfStars;
-(void)setMaxNumberOfStars:(int)arg1 ;
@end

