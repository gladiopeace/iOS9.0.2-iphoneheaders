/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIView, NSArray, UIColor;

@interface UIMultiColumnsNavigationTransitionView : UIView <NSCoding> {

	int _transition;
	UIView* _firstResponderViewToRestore;
	unsigned _isTransitioning : 1;
	NSArray* _fromViews;
	NSArray* _toViews;
	NSArray* _viewsToRemove;
	NSArray* _viewsToAdd;
	NSArray* _displayedViews;
	CFDictionaryRef _dividerViews;
	CFDictionaryRef _containerViews;
	UIColor* _dividersColor;
	float _dividersWidth;
	id _delegate;
	float _columnWidth;
	int _columnCount;

}

@property (assign,nonatomic,__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float columnWidth;               //@synthesize columnWidth=_columnWidth - In the implementation block
@property (assign,nonatomic) int columnCount;                 //@synthesize columnCount=_columnCount - In the implementation block
+(double)defaultDurationForTransition:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(char)isTransitioning;
-(char)_isTransitioningFromView:(id)arg1 ;
-(void)_navigationTransitionDidStop;
-(char)transition:(int)arg1 fromViews:(id)arg2 toViews:(id)arg3 ;
-(id)_dividerViewForView:(id)arg1 ;
-(void)_removeDividerViewForView:(id)arg1 ;
-(char)transition:(int)arg1 toViews:(id)arg2 ;
-(id)_containerViewForView:(id)arg1 ;
-(void)_removeContainerViewForView:(id)arg1 ;
-(float)columnWidth;
-(void)setColumnWidth:(float)arg1 ;
-(int)columnCount;
-(void)setColumnCount:(int)arg1 ;
@end

