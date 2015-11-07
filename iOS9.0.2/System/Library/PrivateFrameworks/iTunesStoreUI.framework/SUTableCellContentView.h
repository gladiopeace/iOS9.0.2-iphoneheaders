/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SUCellConfigurationView.h>

@class UIBezierPath, SUCellConfiguration, UIView, NSMutableArray, NSString;

@interface SUTableCellContentView : UIView <SUCellConfigurationView> {

	int _clipCorners;
	UIBezierPath* _clipPath;
	SUCellConfiguration* _configuration;
	unsigned _drawAsDisabled : 1;
	unsigned _highlighted : 1;
	unsigned _highlightsOnlyContentView : 1;
	UIView* _overlayView;
	NSMutableArray* _subviews;
	unsigned _useSubviewLayout : 1;

}

@property (assign,nonatomic) char usesSubviews; 
@property (assign,nonatomic) int clipCorners;                                                                 //@synthesize clipCorners=_clipCorners - In the implementation block
@property (nonatomic,retain) SUCellConfiguration * configuration;                                             //@synthesize configuration=_configuration - In the implementation block
@property (assign,getter=isDeleteConfirmationVisible,nonatomic) char deleteConfirmationVisisble; 
@property (assign,nonatomic) char drawAsDisabled; 
@property (assign,nonatomic) char highlightsOnlyContentView; 
@property (assign,getter=isHighlighted,nonatomic) char highlighted; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadView;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_scriptingInfo;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(void)setConfiguration:(SUCellConfiguration *)arg1 ;
-(SUCellConfiguration *)configuration;
-(int)clipCorners;
-(void)setClipCorners:(int)arg1 ;
-(void)setDeleteConfirmationVisisble:(char)arg1 ;
-(void)setUsesSubviews:(char)arg1 animated:(char)arg2 ;
-(char)highlightsOnlyContentView;
-(id)_clipPath;
-(char)drawAsDisabled;
-(void)setDrawAsDisabled:(char)arg1 ;
-(void)setHighlightsOnlyContentView:(char)arg1 ;
-(char)usesSubviews;
-(void)setUsesSubviews:(char)arg1 ;
-(void)_reloadSubviewsForConfiguration;
-(char)isDeleteConfirmationVisible;
-(void)_reloadSubviewAlphasAnimated:(char)arg1 ;
-(void)_updateDisabledStyleForSubviews;
-(void)_stopUsingSubviewLayout;
-(void)_startUsingSubviewLayout;
-(id)_clippedImageForImage:(id)arg1 ;
-(void)_removeSubviewsForConfiguration;
@end

