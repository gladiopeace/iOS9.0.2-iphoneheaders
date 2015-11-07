/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class BlurDarkeningBackgroundView, UILabel, UIButton, NSString;

@interface RoutePickingFieldView : UIView <UIGestureRecognizerDelegate> {

	BlurDarkeningBackgroundView* _background;
	UILabel* _firstLineLabel;
	UILabel* _secondLineLabel;
	char _showsSecondLine;
	char _secondLineIsPossible;
	UIButton* _clearButton;
	id _tapTarget;
	/*^block*/id _tapHandler;
	id _clearTarget;
	/*^block*/id _clearHandler;
	char _highlightingForPress;
	char _isHighlighted;
	unsigned _highlightsForPresenterUse;
	char _allowsMultipleLines;
	char _dimmed;
	NSString* _departureLocationText;
	int _departureLocationAppearance;
	NSString* _arrivalLocationText;
	int _arrivalLocationAppearance;

}

@property (nonatomic,copy) NSString * departureLocationText;               //@synthesize departureLocationText=_departureLocationText - In the implementation block
@property (assign,nonatomic) int departureLocationAppearance;              //@synthesize departureLocationAppearance=_departureLocationAppearance - In the implementation block
@property (nonatomic,copy) NSString * arrivalLocationText;                 //@synthesize arrivalLocationText=_arrivalLocationText - In the implementation block
@property (assign,nonatomic) int arrivalLocationAppearance;                //@synthesize arrivalLocationAppearance=_arrivalLocationAppearance - In the implementation block
@property (assign,nonatomic) char allowsMultipleLines;                     //@synthesize allowsMultipleLines=_allowsMultipleLines - In the implementation block
@property (assign,getter=isDimmed,nonatomic) char dimmed;                  //@synthesize dimmed=_dimmed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_textColorForDimmedValue:(char)arg1 withBaseColor:(id)arg2 ;
-(NSString *)departureLocationText;
-(void)setTapTarget:(id)arg1 handler:(/*^block*/id)arg2 ;
-(char)allowsMultipleLines;
-(NSString *)arrivalLocationText;
-(int)arrivalLocationAppearance;
-(id)_attributedStringForText:(id)arg1 appearance:(int)arg2 isBold:(char)arg3 ;
-(void)setArrivalLocationText:(NSString *)arg1 ;
-(int)departureLocationAppearance;
-(void)setAllowsMultipleLines:(char)arg1 ;
-(void)setArrivalLocationAppearance:(int)arg1 ;
-(void)_updateFromToLabelIfNeeded;
-(void)setDepartureLocationText:(NSString *)arg1 ;
-(void)_updateFromToLabelText;
-(void)willBeginUsingForPresenter:(id)arg1 ;
-(void)setClearTarget:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)didEndUsingForPresenter:(id)arg1 ;
-(void)setDepartureLocationAppearance:(int)arg1 ;
-(id)_attributesForTextWithAppearance:(int)arg1 isBold:(char)arg2 ;
-(void)_handleTap:(id)arg1 ;
-(void)_handlePress:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)_updateHighlight;
-(void)_updateBackdrop;
-(void)_clear;
-(void)setDimmed:(char)arg1 ;
-(char)isDimmed;
@end

