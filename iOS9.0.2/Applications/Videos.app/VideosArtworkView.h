/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Videos/Videos-Structs.h>
#import <MediaPlayerUI/MPUArtworkView.h>

@class UIImage, UIColor, UIView, NSString, UILabel, UIImageView;

@interface VideosArtworkView : MPUArtworkView {

	UIImage* _effectiveImage;
	UIImage* _externalImage;
	UIColor* _originalBackgroundColor;
	UIView* _placeholderTopLayoutGuide;
	UIView* _placeholderBottomLayoutGuide;
	char _hasAddedPlaceHolderConstraints;
	char _hasAddedTitlePlaceHolderConstraints;
	float _placeholderAspectRatio;
	NSString* _placeholderTitle;
	unsigned _placeholderMediaType;
	UILabel* _placeholderTitleLabel;
	UIImageView* _placeholderIconView;

}

@property (assign,nonatomic) float placeholderAspectRatio;                   //@synthesize placeholderAspectRatio=_placeholderAspectRatio - In the implementation block
@property (nonatomic,copy) NSString * placeholderTitle;                      //@synthesize placeholderTitle=_placeholderTitle - In the implementation block
@property (assign,nonatomic) unsigned placeholderMediaType;                  //@synthesize placeholderMediaType=_placeholderMediaType - In the implementation block
@property (nonatomic,retain) UILabel * placeholderTitleLabel;                //@synthesize placeholderTitleLabel=_placeholderTitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * placeholderIconView;              //@synthesize placeholderIconView=_placeholderIconView - In the implementation block
-(void)setPlaceholderAspectRatio:(float)arg1 ;
-(void)setPlaceholderMediaType:(unsigned)arg1 ;
-(void)setPlaceholderTitle:(NSString *)arg1 ;
-(void)_updateEffectiveImage;
-(float)placeholderAspectRatio;
-(unsigned)placeholderMediaType;
-(NSString *)placeholderTitle;
-(void)_updatePlaceholderIconView;
-(UILabel *)placeholderTitleLabel;
-(void)_removePlaceholder;
-(UIImageView *)placeholderIconView;
-(void)setPlaceholderTitleLabel:(UILabel *)arg1 ;
-(void)setPlaceholderIconView:(UIImageView *)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(void)_showPlaceholder;
-(void)_setPlaceholderHidden:(char)arg1 ;
-(char)shouldDisplayPlaceholder;
@end

