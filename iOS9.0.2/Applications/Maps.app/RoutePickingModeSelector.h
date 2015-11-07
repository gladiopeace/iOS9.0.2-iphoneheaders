/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UISegmentedControl.h>

@class NSSet, NSArray;

@interface RoutePickingModeSelector : UISegmentedControl {

	char _useImageInSegments;
	/*^block*/id _blockOnSelectedVariantChanged;
	NSSet* _selectableVariants;
	int _selectedVariant;
	NSArray* _orderedVariants;
	NSArray* _orderedItems;
	float _lastLayoutWidth;

}

@property (nonatomic,copy) NSSet * selectableVariants;                    //@synthesize selectableVariants=_selectableVariants - In the implementation block
@property (assign,nonatomic) int selectedVariant;                         //@synthesize selectedVariant=_selectedVariant - In the implementation block
@property (nonatomic,copy) id blockOnSelectedVariantChanged;              //@synthesize blockOnSelectedVariantChanged=_blockOnSelectedVariantChanged - In the implementation block
@property (nonatomic,retain) NSArray * orderedVariants;                   //@synthesize orderedVariants=_orderedVariants - In the implementation block
@property (nonatomic,retain) NSArray * orderedItems;                      //@synthesize orderedItems=_orderedItems - In the implementation block
@property (assign,nonatomic) char useImageInSegments;                     //@synthesize useImageInSegments=_useImageInSegments - In the implementation block
@property (assign,nonatomic) float lastLayoutWidth;                       //@synthesize lastLayoutWidth=_lastLayoutWidth - In the implementation block
-(void)setOrderedVariants:(NSArray *)arg1 ;
-(id)blockOnSelectedVariantChanged;
-(void)_modeSelectorValueChanged;
-(void)reselectSegmentForSelectedVariant;
-(void)setSelectableVariants:(NSSet *)arg1 ;
-(NSArray *)orderedVariants;
-(void)setBlockOnSelectedVariantChanged:(id)arg1 ;
-(NSArray *)orderedItems;
-(void)setSelectedVariant:(int)arg1 ;
-(void)setUseImageInSegments:(char)arg1 ;
-(void)resetItems;
-(char)useImageInSegments;
-(void)updateSegmentsIfNeededToFitWidth:(float)arg1 ;
-(char)_shouldShowVariant:(int)arg1 ;
-(NSSet *)selectableVariants;
-(float)lastLayoutWidth;
-(void)setOrderedItems:(NSArray *)arg1 ;
-(void)setLastLayoutWidth:(float)arg1 ;
-(int)selectedVariant;
-(id)init;
@end
