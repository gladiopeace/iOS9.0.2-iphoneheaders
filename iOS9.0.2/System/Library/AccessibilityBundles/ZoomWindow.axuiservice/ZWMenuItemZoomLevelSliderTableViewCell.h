/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UISlider, UIImageView;

@interface ZWMenuItemZoomLevelSliderTableViewCell : UITableViewCell {

	UISlider* _zoomLevelSlider;
	UIImageView* _zoomOutImageView;
	UIImageView* _zoomInImageView;

}

@property (nonatomic,retain) UISlider * zoomLevelSlider;                  //@synthesize zoomLevelSlider=_zoomLevelSlider - In the implementation block
@property (nonatomic,retain) UIImageView * zoomOutImageView;              //@synthesize zoomOutImageView=_zoomOutImageView - In the implementation block
@property (nonatomic,retain) UIImageView * zoomInImageView;               //@synthesize zoomInImageView=_zoomInImageView - In the implementation block
-(UISlider *)zoomLevelSlider;
-(UIImageView *)zoomInImageView;
-(void)setZoomOutImageView:(UIImageView *)arg1 ;
-(void)setZoomInImageView:(UIImageView *)arg1 ;
-(void)setZoomLevelSlider:(UISlider *)arg1 ;
-(UIImageView *)zoomOutImageView;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
@end

