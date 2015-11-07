/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, MTItemOfferButton;

@interface MTEpisodeListCellAccessoryView : UIView {

	char _showsDownload;
	UIButton* _info;
	MTItemOfferButton* _download;

}

@property (nonatomic,retain) UIButton * info;                           //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) MTItemOfferButton * download;              //@synthesize download=_download - In the implementation block
@property (assign,nonatomic) char showsDownload;                        //@synthesize showsDownload=_showsDownload - In the implementation block
-(void)setShowsDownload:(char)arg1 ;
-(char)showsDownload;
-(MTItemOfferButton *)download;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)info;
-(void)setInfo:(UIButton *)arg1 ;
-(void)setDownload:(MTItemOfferButton *)arg1 ;
@end

