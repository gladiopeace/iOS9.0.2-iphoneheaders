/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@protocol UIAccessibilityElementMockViewDelegateProtocol;
@class UIView;

@interface UIAccessibilityElementMockView : UIAccessibilityElement {

	UIView* _view;
	id<UIAccessibilityElementMockViewDelegateProtocol> _delegate;
	int _subviewIndex;

}

@property (nonatomic,retain) UIView * view;                                                            //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) id<UIAccessibilityElementMockViewDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int subviewIndex;                                                         //@synthesize subviewIndex=_subviewIndex - In the implementation block
-(id)accessibilityIdentification;
-(int)accessibilityCompareGeometry:(id)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)_accessibilityHitTestShouldFallbackToNearestChild;
-(id)_accessibilityUserTestingChildren;
-(int)_accessibilityScannerGroupTraits;
-(char)_accessibilityIsScannerGroup;
-(char)_accessibilityIsScannerElement;
-(char)_accessibilityIsSpeakThisElement;
-(CGPoint)_accessibilityMinScrubberPosition;
-(CGPoint)_accessibilityMaxScrubberPosition;
-(char)_accessibilitySupportsActivateAction;
-(id)accessibilityContainerElements;
-(id)_accessibilityScannerGroupElements;
-(int)subviewIndex;
-(void)setSubviewIndex:(int)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(id)accessibilityCustomRotorTitles;
-(id)accessibilityCustomRotorItemsAtIndex:(int)arg1 ;
-(id)_accessibilityLineNumberAndColumnForPoint:(CGPoint)arg1 ;
-(NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1 ;
-(id)_accessibilityTextViewTextOperationResponder;
-(int)_accessibilityPageCount;
-(int)_accessibilityPageIndex;
-(id)_accessibilityScrollAncestor;
-(void)revalidate;
-(id)_accessibilityUserTestingParent;
-(NSRange)_accessibilityLineRangeForPosition:(unsigned)arg1 ;
-(id)_accessibilityUserTestingElementType;
-(void)setDelegate:(id<UIAccessibilityElementMockViewDelegateProtocol>)arg1 ;
-(void)dealloc;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(id)description;
-(id<UIAccessibilityElementMockViewDelegateProtocol>)delegate;
-(UIView *)view;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(char)becomeFirstResponder;
-(void)setView:(UIView *)arg1 ;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(char)isAccessibilityElement;
-(id)accessibilityLanguage;
-(void)setAccessibilityContainer:(id)arg1 ;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(char)accessibilityScroll:(int)arg1 ;
-(char)accessibilityPerformEscape;
-(char)accessibilityPerformMagicTap;
-(char)accessibilityActivate;
-(id)accessibilityCustomActions;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(NSRange)accessibilityRowRange;
-(char)_accessibilityScrollToVisible;
-(void)_accessibilitySetValue:(id)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
@end

