/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UILayoutArrangement.h>
#import <UIKit/_UIOLAPropertySource.h>

@class NSMapTable, NSString, NSSet;

@interface _UIOrderedLayoutArrangement : _UILayoutArrangement <_UIOLAPropertySource> {

	NSMapTable* _spacingOrCenteringGuides;
	NSMapTable* _edgeToEdgeConstraints;
	NSMapTable* _relatedDimensionConstraints;
	NSMapTable* _hidingDimensionConstraints;
	float _proportionalFillDenominator;
	char _itemOrderingChanged;
	char _itemFittingSizeChanged;
	char _baselineRelativeArrangement;
	float _spacing;
	int _distribution;

}

@property (assign,nonatomic) float spacing;                                                                      //@synthesize spacing=_spacing - In the implementation block
@property (assign,getter=isBaselineRelativeArrangement,nonatomic) char baselineRelativeArrangement;              //@synthesize baselineRelativeArrangement=_baselineRelativeArrangement - In the implementation block
@property (assign,nonatomic) int distribution;                                                                   //@synthesize distribution=_distribution - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int axis; 
@property (assign,nonatomic) char layoutFillsCanvas; 
@property (assign,nonatomic) char layoutUsesCanvasMarginsWhenFilling; 
@property (nonatomic,readonly) NSSet * _newlyHiddenItems; 
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems; 
@property (assign,setter=_setItemOrderingChanged:,nonatomic) char _itemOrderingChanged;                          //@synthesize itemOrderingChanged=_itemOrderingChanged - In the implementation block
@property (assign,setter=_setItemFittingSizeChanged:,nonatomic) char _itemFittingSizeChanged;                    //@synthesize itemFittingSizeChanged=_itemFittingSizeChanged - In the implementation block
+(Class)_configurationHistoryClass;
-(void)setDistribution:(int)arg1 ;
-(void)removeItem:(id)arg1 ;
-(void)_visibilityParameterChangedForItem:(id)arg1 ;
-(unsigned)_indexOfItemForLocationAttribute:(int)arg1 ;
-(char)_canvasConnectionConstraintsNeedUpdatePass;
-(void)_trackChangesWithValue:(id)arg1 forKey:(id)arg2 ;
-(char)_hasStaleConfiguration;
-(void)_updateConfigurationHistory;
-(void)_updateArrangementConstraints;
-(void)_clearAllConstraintsArrays;
-(id)_identifierForSpanningLayoutGuide;
-(void)insertItem:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setSpacing:(float)arg1 ;
-(float)spacing;
-(int)distribution;
-(void)setBaselineRelativeArrangement:(char)arg1 ;
-(char)isBaselineRelativeArrangement;
-(void)_didEvaluateMultilineHeightForView:(id)arg1 ;
-(float)_calculatedIntrinsicHeight;
-(void)_intrinsicContentSizeInvalidatedForItem:(id)arg1 ;
-(id)_baselineViewVendTallest:(char)arg1 forFirstBaseline:(char)arg2 ;
-(char)_monitorsSystemLayoutFittingSizeForItem:(id)arg1 ;
-(void)_systemLayoutFittingSizeDidChangeForItem:(id)arg1 ;
-(char)_configurationRequiresCanvasConnectionFittingConstraint;
-(void)_setItemOrderingChanged:(char)arg1 ;
-(void)_setItemFittingSizeChanged:(char)arg1 ;
-(char)_itemOrderingChanged;
-(char)_itemFittingSizeChanged;
-(id)_firstVisibleItem;
-(id)_lastVisibleItem;
-(void)_trackChangesAffectingExternalBaselineConstraints:(/*^block*/id)arg1 ;
-(id)_orderedConfigurationHistory;
-(id)_orderedPropertySource;
-(void)_notifyCanvasesBaselineParametersDidChange;
-(char)_wantsProportionalDistribution;
-(void)_cleanUpGuides;
-(id)_dimensionRefItemFromConstraint:(id)arg1 ;
-(void)_cleanUpGuideAtGapFollowingItem:(id)arg1 ;
-(float)_expectedEdgeToEdgeSpacingForFirstItem:(id)arg1 secondItem:(id)arg2 isFirstGap:(char)arg3 isLastGap:(char)arg4 ;
-(int)_minAttributeForGapConstraint;
-(id)_edgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 andFollowingItem:(id)arg2 isFirstGap:(char)arg3 isLastGap:(char)arg4 ;
-(int)_precedingLocationAttributeForGuideConstraint;
-(void)_activateAndInsertEdgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 andFollowingItem:(id)arg2 isFirstGap:(char)arg3 isLastGap:(char)arg4 ;
-(id)_setUpSpacingOrCenteringGuideForGapIndex:(unsigned)arg1 ;
-(void)_setUpDimensionConstraintForItem:(id)arg1 referenceItem:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)_setUpHidingDimensionConstraintForItem:(id)arg1 ;
-(char)_itemCountChanged;
-(void)_cleanUpWithoutResettingKeepAliveWorkaround;
-(void)_removeGuideAndConstraintGroupsAsNecessary;
-(void)_removeIndividualGuidesAndConstraintsAsNecessary;
-(void)_adjustConstraintConstantsIfPossible;
-(void)_insertIndividualGuidesAndConstraintsAsNecessary;
-(id)_tallestItem;
-(id)_visibleItemAtEndWithEnumerationOptions:(unsigned)arg1 ;
@end

