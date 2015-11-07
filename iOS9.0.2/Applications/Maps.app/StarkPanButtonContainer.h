/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIBarButtonItem;

@interface StarkPanButtonContainer : UIView {

	NSArray* _buttonCycle;
	NSMutableArray* _doneButtonFocusGuides;
	UIBarButtonItem* _doneButton;

}

@property (nonatomic,retain) NSArray * buttonCycle;                               //@synthesize buttonCycle=_buttonCycle - In the implementation block
@property (nonatomic,retain) NSMutableArray * doneButtonFocusGuides;              //@synthesize doneButtonFocusGuides=_doneButtonFocusGuides - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                        //@synthesize doneButton=_doneButton - In the implementation block
-(void)activateFocusGuides;
-(void)deactivateFocusGuides;
-(void)setFirstButtonPatternLeft:(char)arg1 ;
-(NSArray *)buttonCycle;
-(void)activateFocusGuidesForDoneButton;
-(void)setButtonCycle:(NSArray *)arg1 ;
-(NSMutableArray *)doneButtonFocusGuides;
-(void)setDoneButtonFocusGuides:(NSMutableArray *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(char)shouldUpdateFocusInContext:(id)arg1 ;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
@end

