/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Maps/StarkRoutePreviewSign.h>

@protocol StarkRoutePreviewOverlayDataSource, StarkRoutePreviewPlacePickingOverlayDelegate;
@class NSArray, StarkFocusRingButton, UILabel, UIView, StarkFocusableButton, StarkRouteInfoView, MapsAutoLayoutContext, NSTimer, NSString;

@interface StarkRoutePreviewPlacePickingOverlaySign : UIView <StarkRoutePreviewSign> {

	NSArray* _searchResults;
	StarkFocusRingButton* _backButton;
	StarkFocusRingButton* _forwardButton;
	UILabel* _countLabel;
	UIView* _textContainer;
	UILabel* _titleLabel;
	UILabel* _addressLabel;
	UIView* _keyline;
	StarkFocusableButton* _routesButton;
	StarkRouteInfoView* _routeInfo;
	MapsAutoLayoutContext* _layoutContext;
	char _showsRouteInfo;
	NSTimer* _etaUpdateTimer;
	char _showsPicker;
	id<StarkRoutePreviewOverlayDataSource> _dataSource;
	id<StarkRoutePreviewPlacePickingOverlayDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<StarkRoutePreviewPlacePickingOverlayDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<StarkRoutePreviewOverlayDataSource> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) char showsPicker;                                                              //@synthesize showsPicker=_showsPicker - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)requiresConstraintBasedLayout;
-(void)setInitialSelection;
-(id)_currentRoute;
-(void)_scheduleETAUpdate;
-(char)showsPicker;
-(void)_cancelScheduleETAUpdate;
-(unsigned)_routeCount;
-(void)_forward;
-(void)_showRoutes;
-(void)_back;
-(void)setShowsPicker:(char)arg1 ;
-(void)_updateContents;
-(void)_updateStyling;
-(void)setDataSource:(id<StarkRoutePreviewOverlayDataSource>)arg1 ;
-(void)setDelegate:(id<StarkRoutePreviewPlacePickingOverlayDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)layoutSubviews;
-(id<StarkRoutePreviewOverlayDataSource>)dataSource;
-(id<StarkRoutePreviewPlacePickingOverlayDelegate>)delegate;
-(void)updateConstraints;
-(void)_updateETA;
-(id)initWithDataSource:(id)arg1 delegate:(id)arg2 ;
@end

