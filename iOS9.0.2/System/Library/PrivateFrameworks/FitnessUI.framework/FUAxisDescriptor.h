/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIFont, UIColor;


@protocol FUAxisDescriptor <NSObject>
@property (nonatomic,retain) id minValue; 
@property (nonatomic,retain) id maxValue; 
@property (assign,nonatomic) unsigned labelAlignment; 
@property (nonatomic,retain) UIFont * labelFont; 
@property (nonatomic,retain) UIFont * subLabelFont; 
@property (nonatomic,retain) UIColor * highlightedLabelColor; 
@property (nonatomic,retain) UIColor * unhighlightedLabelColor; 
@property (nonatomic,retain) UIColor * selectedLabelColor; 
@property (nonatomic,retain) UIColor * highlightedSubLabelColor; 
@property (nonatomic,retain) UIColor * unhighlightedSubLabelColor; 
@property (assign,nonatomic) float axisDescriptorPadding; 
@property (assign,nonatomic) float subAxisDescriptorPadding; 
@property (assign,nonatomic) char hideClippedLabels; 
@optional
-(void)selectLabel:(char)arg1 atIndex:(unsigned)arg2;
-(id)axisSubLabels;
-(unsigned)numLabels;
-(id)positionForLabelAtIndex:(unsigned)arg1;
-(id)textForLabelAtIndex:(unsigned)arg1;
-(id)xAxisLabelStringArray;
-(unsigned)numSubLabels;
-(id)positionForSubLabelAtIndex:(unsigned)arg1;
-(id)textForSubLabelAtIndex:(unsigned)arg1;

@required
-(void)setLabelFont:(id)arg1;
-(UIFont *)labelFont;
-(id)maxValue;
-(id)minValue;
-(void)setMaxValue:(id)arg1;
-(void)setMinValue:(id)arg1;
-(id)axisLabels;
-(float)axisDescriptorPadding;
-(char)hideClippedLabels;
-(UIFont *)subLabelFont;
-(float)subAxisDescriptorPadding;
-(Class)expectedDataType;
-(void)setSubLabelFont:(id)arg1;
-(UIColor *)highlightedLabelColor;
-(void)setHighlightedLabelColor:(id)arg1;
-(UIColor *)unhighlightedLabelColor;
-(void)setUnhighlightedLabelColor:(id)arg1;
-(UIColor *)selectedLabelColor;
-(void)setSelectedLabelColor:(id)arg1;
-(UIColor *)highlightedSubLabelColor;
-(void)setHighlightedSubLabelColor:(id)arg1;
-(UIColor *)unhighlightedSubLabelColor;
-(void)setUnhighlightedSubLabelColor:(id)arg1;
-(void)setAxisDescriptorPadding:(float)arg1;
-(void)setSubAxisDescriptorPadding:(float)arg1;
-(void)setHideClippedLabels:(char)arg1;
-(unsigned)labelAlignment;
-(void)setLabelAlignment:(unsigned)arg1;

@end

