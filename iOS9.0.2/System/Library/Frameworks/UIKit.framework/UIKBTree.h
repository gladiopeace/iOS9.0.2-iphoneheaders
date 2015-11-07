/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableDictionary, NSMutableArray;

@interface UIKBTree : NSObject <NSCopying> {

	int type;
	NSString* name;
	NSMutableDictionary* properties;
	NSMutableArray* subtrees;
	NSMutableDictionary* cache;
	NSString* layoutTag;

}

@property (assign,nonatomic) int type; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSMutableDictionary * properties; 
@property (nonatomic,retain) NSMutableArray * subtrees; 
@property (nonatomic,retain) NSMutableDictionary * cache; 
@property (nonatomic,retain) NSString * layoutTag; 
+(id)treeOfType:(int)arg1 ;
+(id)key;
+(id)keyboard;
+(int)extraIPhoneIdiom:(int)arg1 width:(float)arg2 landscape:(char)arg3 ;
+(id)uniqueName;
+(id)stringForType:(int)arg1 ;
+(id)shapesForControlKeyShapes:(id)arg1 options:(int)arg2 ;
+(char)typeIsPersistent:(int)arg1 ;
+(char)shouldSkipCacheString:(id)arg1 ;
+(id)mergeStringForKeyName:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(id)description;
-(int)state;
-(char)isSplit;
-(void)setState:(int)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setDisplayString:(id)arg1 ;
-(void)setRepresentedString:(id)arg1 ;
-(void)setDisplayType:(int)arg1 ;
-(void)setInteractionType:(int)arg1 ;
-(id)representedString;
-(NSString *)name;
-(void)setOverrideDisplayString:(id)arg1 ;
-(void)setSelectedVariantIndex:(int)arg1 ;
-(void)setVariantPopupBias:(id)arg1 ;
-(void)setSubtrees:(NSMutableArray *)arg1 ;
-(void)setVariantType:(int)arg1 ;
-(void)setShape:(id)arg1 ;
-(void)setParentKey:(id)arg1 ;
-(char)setObject:(id)arg1 forProperty:(id)arg2 ;
-(int)selectedVariantIndex;
-(NSMutableArray *)subtrees;
-(id)displayString;
-(id)objectForProperty:(id)arg1 ;
-(void)setTextAlignment:(int)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)visible;
-(id)initWithType:(int)arg1 ;
-(id)recursiveDescription;
-(void)setVisible:(char)arg1 ;
-(int)textAlignment;
-(int)visualStyle;
-(void)setVisualStyle:(int)arg1 ;
-(void)setVisualStyling:(SCD_Struct_UI37)arg1 ;
-(SCD_Struct_UI37)visualStyling;
-(int)interactionType;
-(char)disabled;
-(void)setDisabled:(char)arg1 ;
-(char)isAlphabeticPlane;
-(NSString *)layoutTag;
-(void)setLayoutTag:(NSString *)arg1 ;
-(CGRect)frameForKeylayoutName:(id)arg1 ;
-(char)usesAutoShift;
-(char)shouldSkipCandidateSelection;
-(char)isShiftKeyPlaneChooser;
-(id)keyplaneForKey:(id)arg1 ;
-(int)displayType;
-(id)geometry;
-(CGRect)paddedFrame;
-(void)setPaddedFrame:(CGRect)arg1 ;
-(int)clipCorners;
-(id)shape;
-(int)intForProperty:(id)arg1 ;
-(int)rendering;
-(int)displayTypeHint;
-(void)setClipCorners:(int)arg1 ;
-(void)setGeometry:(id)arg1 ;
-(id)cachedKeysByKeyName:(id)arg1 ;
-(id)layoutName;
-(id)stringForProperty:(id)arg1 ;
-(id)subtreeWithName:(id)arg1 ;
-(id)keysWithString:(id)arg1 ;
-(id)keys;
-(id)fullRepresentedString;
-(id)firstCachedKeyWithName:(id)arg1 ;
-(void)setRendering:(int)arg1 ;
-(void)setDisplayTypeHint:(int)arg1 ;
-(id)autolocalizedKeyCacheIterator;
-(id)localizationKey;
-(char)isShiftKeyplane;
-(char)looksLikeShiftAlternate;
-(id)shiftAlternateKeyplaneName;
-(id)keysByKeyName:(id)arg1 ;
-(char)isRightToLeftSensitive;
-(void)zipGeometrySet;
-(void)setIsGenerated:(char)arg1 ;
-(void)precacheLayoutName:(id)arg1 ;
-(char)behavesAsShiftKey;
-(void)elaborateLayoutWithSize:(CGSize)arg1 scale:(float)arg2 ;
-(id)keySet;
-(id)numberForProperty:(id)arg1 ;
-(void)setDisplayRowHint:(int)arg1 ;
-(void)setFlickDirection:(int)arg1 ;
-(char)notUseCandidateSelection;
-(int)displayRowHint;
-(void)setSecondaryDisplayStrings:(id)arg1 ;
-(void)setSecondaryRepresentedStrings:(id)arg1 ;
-(NSMutableDictionary *)cache;
-(int)variantType;
-(void)setHighlightedVariantsList:(id)arg1 ;
-(id)keysForMergeConditions;
-(id)mergeKeyNames:(id)arg1 ;
-(void)updateMoreAndInternationalKeysWithOptions:(int)arg1 ;
-(void)mergeReturnKey:(id)arg1 withReturnKey:(id)arg2 ;
-(int)handBias;
-(char)supportsType:(int)arg1 ;
-(char)ghost;
-(char)isExemptFromInputManagerHitTesting;
-(char)isExemptFromInputManagerLayout;
-(char)usesKeyCharging;
-(char)shouldSkipCandidateSelectionForVariants;
-(id)secondaryRepresentedStrings;
-(char)forceMultitap;
-(char)hasLayoutTag:(id)arg1 ;
-(id)overrideDisplayString;
-(id)componentName;
-(void)updateVariantTypeForActions:(unsigned)arg1 ;
-(char)noLanguageIndicator;
-(id)keysOrderedByPositionWithoutZip;
-(char)avoidsLanguageIndicator;
-(float)primaryKeylayoutWidthRatio;
-(float)primaryKeylayoutOffset;
-(id)parentKey;
-(id)alternateKeyplaneName;
-(char)modifiesKeyplane;
-(int)dragThreshold;
-(id)secondaryDisplayStrings;
-(int)flickDirection;
-(char)boolForProperty:(id)arg1 ;
-(char)allowRetestAfterCommittingDownActions;
-(char)dynamicDisplayTypeHint;
-(NSMutableDictionary *)properties;
-(char)isLeafType;
-(void)setProperties:(NSMutableDictionary *)arg1 ;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(char)isSameAsTree:(id)arg1 ;
-(char)isGenerated;
-(char)_needsScaling;
-(id)geometrySet:(char)arg1 ;
-(id)attributeSet:(char)arg1 ;
-(void)zipGeometries:(char)arg1 attributes:(char)arg2 ;
-(id)listShapes;
-(id)geometriesList;
-(int)_keyCountOnNamedRow:(id)arg1 ;
-(id)activeShapesFromOutputShapes:(id)arg1 inputShapes:(id)arg2 ;
-(CGRect)_keyplaneFrame;
-(SCD_Struct_UI37)stylingFromVisualStyle;
-(id)unhashedName;
-(id)_cacheRootNameForKey:(id)arg1 ;
-(char)shouldCacheKey;
-(void)cacheKey:(id)arg1 ;
-(void)_addKeylayoutKeys:(id)arg1 ;
-(id)geometries;
-(id)subtreeWithType:(int)arg1 ;
-(void)subsumeDisappearingKeyName:(id)arg1 intoKeyName:(id)arg2 factors:(id)arg3 ;
-(id)findLeftMoreKey;
-(void)updateDictationKeyOnNumberPads:(char)arg1 ;
-(id)activeGeometriesList;
-(int)_variantType;
-(char)_renderAsStringKey;
-(id)nameFromAttributes;
-(char)isHashed;
-(id)initWithType:(int)arg1 withName:(id)arg2 withProperties:(id)arg3 withSubtrees:(id)arg4 withCache:(id)arg5 ;
-(char)isEqualToTree:(id)arg1 ;
-(char)isDuplicateOfTree:(id)arg1 ;
-(id)subtreeWithName:(id)arg1 rows:(id)arg2 ;
-(id)subtreesWithProperty:(id)arg1 value:(id)arg2 ;
-(int)indexOfSubtree:(id)arg1 ;
-(void)zipAttributes;
-(char)subtreesAreOrdered;
-(id)keyForString:(id)arg1 ;
-(void)setAttributes:(id)arg1 ;
-(id)keyAttributes;
-(void)clearTransientCaches;
-(id)keysOrderedByPosition;
-(id)geometriesOrderedByPosition;
-(char)usesAdaptiveKeys;
-(char)isLetters;
-(char)looksLike:(id)arg1 ;
-(void)setGeometriesList:(id)arg1 ;
-(void)setActiveGeometriesList:(id)arg1 ;
-(id)highlightedVariantsList;
-(int)highlightedVariantIndex;
-(void)setGhost:(char)arg1 ;
-(id)variantPopupBias;
-(int)splitMode;
-(void)setSplitMode:(int)arg1 ;
-(void)setForceMultitap:(char)arg1 ;
-(char)avoidAutoDeactivation;
-(char)disablesEdgeSwipe;
-(char)containsDividerVariant;
-(void)orderVariantKeys:(char)arg1 ;
-(id)variantDisplayString;
-(id)cacheDisplayString;
-(char)renderKeyInKeyplane:(id)arg1 ;
@end
