/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIFont, UIColor, CAFilter;


@protocol WDAxisDescriptor <NSObject>
@property (nonatomic,retain) id minValue; 
@property (nonatomic,retain) id maxValue; 
@property (assign,nonatomic) unsigned labelAlignment; 
@property (nonatomic,retain) UIFont * highlightedLabelFont; 
@property (nonatomic,retain) UIFont * unhighlightedLabelFont; 
@property (nonatomic,retain) UIColor * highlightedLabelColor; 
@property (nonatomic,retain) UIColor * unhighlightedLabelColor; 
@property (nonatomic,retain) CAFilter * highlightedLabelFilter; 
@property (nonatomic,retain) CAFilter * unhighlightedLabelFilter; 
@optional
-(unsigned)numLabels;
-(id)positionForLabelAtIndex:(unsigned)arg1;
-(id)textForLabelAtIndex:(unsigned)arg1;
-(void)invalidateCache;

@required
-(CAFilter *)unhighlightedLabelFilter;
-(UIFont *)unhighlightedLabelFont;
-(CAFilter *)highlightedLabelFilter;
-(UIFont *)highlightedLabelFont;
-(void)setUnhighlightedLabelFilter:(id)arg1;
-(void)setHighlightedLabelFont:(id)arg1;
-(void)setUnhighlightedLabelFont:(id)arg1;
-(void)setHighlightedLabelFilter:(id)arg1;
-(id)maxValue;
-(id)minValue;
-(void)setMaxValue:(id)arg1;
-(void)setMinValue:(id)arg1;
-(id)axisLabels;
-(Class)expectedDataType;
-(UIColor *)highlightedLabelColor;
-(void)setHighlightedLabelColor:(id)arg1;
-(UIColor *)unhighlightedLabelColor;
-(void)setUnhighlightedLabelColor:(id)arg1;
-(unsigned)labelAlignment;
-(void)setLabelAlignment:(unsigned)arg1;

@end

