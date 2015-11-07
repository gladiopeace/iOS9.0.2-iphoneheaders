/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@protocol WAWeatherCollectionFooterViewCellDelegate;
@class WATouchButton, WAUnitSelectionControl, UIButton;

@interface WAWeatherCollectionFooterViewCell : UICollectionReusableView {

	id<WAWeatherCollectionFooterViewCellDelegate> _delegate;
	WATouchButton* _addButton;
	WAUnitSelectionControl* _unitControl;
	UIButton* _theWeatherChannelButton;

}

@property (assign,nonatomic,__weak) id<WAWeatherCollectionFooterViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WATouchButton * addButton;                                                  //@synthesize addButton=_addButton - In the implementation block
@property (nonatomic,retain) WAUnitSelectionControl * unitControl;                                       //@synthesize unitControl=_unitControl - In the implementation block
@property (nonatomic,retain) UIButton * theWeatherChannelButton;                                         //@synthesize theWeatherChannelButton=_theWeatherChannelButton - In the implementation block
-(void)_showAddSheet:(id)arg1 ;
-(void)_selectedSegmentChanged:(id)arg1 ;
-(void)_updateUnitControl;
-(void)_twcLogoTapped:(id)arg1 ;
-(WAUnitSelectionControl *)unitControl;
-(void)setUnitControl:(WAUnitSelectionControl *)arg1 ;
-(UIButton *)theWeatherChannelButton;
-(void)setTheWeatherChannelButton:(UIButton *)arg1 ;
-(WATouchButton *)addButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<WAWeatherCollectionFooterViewCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<WAWeatherCollectionFooterViewCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)setAddButton:(WATouchButton *)arg1 ;
@end

