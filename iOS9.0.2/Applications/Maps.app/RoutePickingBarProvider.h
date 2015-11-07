/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/MainChromeTopBarContentProvider.h>

@protocol RoutePickingBarDelegate;
@class RoutePickingBarCompact, RoutePickingBarRegular, MainChromeViewController, NSSet, NSString;

@interface RoutePickingBarProvider : NSObject <MainChromeTopBarContentProvider> {

	RoutePickingBarCompact* _compact;
	RoutePickingBarRegular* _regular;
	MainChromeViewController* _chromeViewController;
	id<RoutePickingBarDelegate> _delegate;
	int _selectedVariant;
	NSSet* _selectableVariants;
	float _maxSelectorWidth;

}

@property (assign,nonatomic,__weak) id<RoutePickingBarDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int selectedVariant;                                          //@synthesize selectedVariant=_selectedVariant - In the implementation block
@property (nonatomic,retain) NSSet * selectableVariants;                                   //@synthesize selectableVariants=_selectableVariants - In the implementation block
@property (assign,nonatomic) float maxSelectorWidth;                                       //@synthesize maxSelectorWidth=_maxSelectorWidth - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) MainChromeViewController * chromeViewController;              //@synthesize chromeViewController=_chromeViewController - In the implementation block
-(void)setSelectableVariants:(NSSet *)arg1 ;
-(void)setSelectedVariant:(int)arg1 ;
-(NSSet *)selectableVariants;
-(int)selectedVariant;
-(MainChromeViewController *)chromeViewController;
-(void)setChromeViewController:(MainChromeViewController *)arg1 ;
-(id)topBarContentForVariant:(int)arg1 ;
-(id)sharePresentationSource;
-(id)directionsSearchPresentationSource;
-(id)_fieldView;
-(id)_newRoutePickingBarOfClass:(Class)arg1 ;
-(void)_share;
-(void)_chosenVariantDidChange:(id)arg1 ;
-(void)setMaxSelectorWidth:(float)arg1 ;
-(float)maxSelectorWidth;
-(void)updateArrivalDestinationText;
-(void)setDelegate:(id<RoutePickingBarDelegate>)arg1 ;
-(id<RoutePickingBarDelegate>)delegate;
-(void)beginEditing;
-(void)_clear;
@end

