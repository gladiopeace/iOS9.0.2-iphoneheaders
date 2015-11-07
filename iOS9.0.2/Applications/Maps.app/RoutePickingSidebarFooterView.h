/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, MNRoute;

@interface RoutePickingSidebarFooterView : UIView {

	UILabel* _label;
	char _isLightContent;
	MNRoute* _route;

}

@property (nonatomic,retain) MNRoute * route;                  //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) char isLightContent;              //@synthesize isLightContent=_isLightContent - In the implementation block
-(char)isLightContent;
-(void)setIsLightContent:(char)arg1 ;
-(void)_updateLabelText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MNRoute *)route;
-(void)setRoute:(MNRoute *)arg1 ;
@end

