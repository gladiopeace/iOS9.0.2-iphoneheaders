/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Fitness/PaletteScrollViewDelegate.h>

@class _UINavigationControllerPalette, FitnessModel, PaletteWeekdayHeaderView, PaletteScrollViewController, NSString;

@interface PaletteViewController : UIViewController <UIScrollViewDelegate, PaletteScrollViewDelegate> {

	_UINavigationControllerPalette* _containingPalette;
	FitnessModel* _model;
	PaletteWeekdayHeaderView* _paletteView;
	PaletteScrollViewController* _paletteScrollVC;
	char _monthNeedsToBeUpdatedInSplitState;

}

@property (assign,nonatomic) char monthNeedsToBeUpdatedInSplitState;                     //@synthesize monthNeedsToBeUpdatedInSplitState=_monthNeedsToBeUpdatedInSplitState - In the implementation block
@property (nonatomic,retain) PaletteScrollViewController * paletteScrollVC;              //@synthesize paletteScrollVC=_paletteScrollVC - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)currentDateChanged:(id)arg1 ;
-(PaletteScrollViewController *)paletteScrollVC;
-(void)transitionPercent:(float)arg1 final:(char)arg2 ;
-(char)monthNeedsToBeUpdatedInSplitState;
-(void)todayChanged:(id)arg1 ;
-(id)initWithNavigationPalette:(id)arg1 model:(id)arg2 ;
-(void)paletteScrolledInDirection:(char)arg1 ;
-(void)paletteDateSelected:(id)arg1 ;
-(void)setMonthNeedsToBeUpdatedInSplitState:(char)arg1 ;
-(void)setPaletteScrollVC:(PaletteScrollViewController *)arg1 ;
-(void)_registerForNotifications;
-(void)dealloc;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)setIsExpanded:(char)arg1 ;
@end

