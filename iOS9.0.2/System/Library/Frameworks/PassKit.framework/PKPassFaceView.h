/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/WLEasyToHitCustomView.h>

@protocol PKPassFaceDelegate;
@class PKPass, PKPassColorProfile, NSMutableSet, UIView, UIImageView, UIImage, CAFilter, NSMutableArray, NSArray, PKPassFaceTemplate;

@interface PKPassFaceView : WLEasyToHitCustomView {

	PKPass* _pass;
	PKPassColorProfile* _colorProfile;
	NSMutableSet* _headerInvariantViews;
	NSMutableSet* _bodyInvariantViews;
	NSMutableSet* _headerContentViews;
	NSMutableSet* _bodyContentViews;
	char _showingHeader;
	char _showingBody;
	UIView* _contentView;
	UIImageView* _backgroundView;
	UIImage* _faceImage;
	UIImage* _partialFaceImage;
	CAFilter* _dimmingFilter;
	NSMutableArray* _headerBucketViews;
	NSMutableArray* _bodyBucketViews;
	unsigned _contentViewCreatedRegions;
	unsigned _invariantViewCreatedRegions;
	char _allowBackgroundPlaceHolders;
	char _clipsContent;
	NSArray* _buckets;
	int _style;
	id<PKPassFaceDelegate> _delegate;
	int _backgroundMode;
	unsigned _visibleRegions;
	float _clippedContentHeight;
	PKPassFaceTemplate* _faceTemplate;

}

@property (assign,nonatomic) id<PKPassFaceDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int backgroundMode;                               //@synthesize backgroundMode=_backgroundMode - In the implementation block
@property (assign,nonatomic) unsigned visibleRegions;                          //@synthesize visibleRegions=_visibleRegions - In the implementation block
@property (assign,nonatomic) char clipsContent;                                //@synthesize clipsContent=_clipsContent - In the implementation block
@property (assign,nonatomic) char allowBackgroundPlaceHolders;                 //@synthesize allowBackgroundPlaceHolders=_allowBackgroundPlaceHolders - In the implementation block
@property (assign,nonatomic) float clippedContentHeight;                       //@synthesize clippedContentHeight=_clippedContentHeight - In the implementation block
@property (nonatomic,readonly) char bodyContentCreated; 
@property (nonatomic,readonly) UIEdgeInsets shadowInsets; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) CGRect contentBounds; 
@property (nonatomic,readonly) PKPass * pass;                                  //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) PKPassColorProfile * colorProfile;              //@synthesize colorProfile=_colorProfile - In the implementation block
@property (nonatomic,retain,readonly) NSArray * buckets;                       //@synthesize buckets=_buckets - In the implementation block
@property (nonatomic,readonly) char isFrontFace; 
@property (assign,nonatomic) int style;                                        //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSMutableArray * headerBucketViews;               //@synthesize headerBucketViews=_headerBucketViews - In the implementation block
@property (nonatomic,readonly) PKPassFaceTemplate * faceTemplate;              //@synthesize faceTemplate=_faceTemplate - In the implementation block
+(Class)_faceClassForStyle:(int)arg1 front:(char)arg2 ;
+(id)newFrontFaceViewForStyle:(int)arg1 ;
+(id)newBackFaceViewForStyle:(int)arg1 tall:(char)arg2 ;
-(void)createBodyContentViews;
-(PKPassColorProfile *)colorProfile;
-(void)insertContentView:(id)arg1 ofType:(int)arg2 ;
-(void)removeContentView:(id)arg1 ofType:(int)arg2 ;
-(id)passFaceTemplate;
-(void)_handleTimeOrLocaleChange:(id)arg1 ;
-(UIEdgeInsets)shadowInsets;
-(id)_viewSetForContentViewType:(int)arg1 ;
-(void)_createInvariantViewsForRegions:(unsigned)arg1 ;
-(void)_createContentViewsForRegions:(unsigned)arg1 ;
-(void)_setShowsHeaderViews:(char)arg1 ;
-(void)_setShowsBodyViews:(char)arg1 ;
-(void)_setShowsBackgroundView:(char)arg1 ;
-(void)_setContentViewsAlpha:(float)arg1 ;
-(char)isFrontFace;
-(id)_relevantBuckets;
-(void)createHeaderInvariantViews;
-(void)createBodyInvariantViews;
-(void)createHeaderContentViews;
-(int)backgroundMode;
-(void)_flushContentViewsForRegions:(unsigned)arg1 ;
-(void)setPass:(id)arg1 colorProfile:(id)arg2 ;
-(void)setVisibleRegions:(unsigned)arg1 ;
-(void)setClipsContent:(char)arg1 ;
-(char)bodyContentCreated;
-(void)setDimmer:(float)arg1 animated:(char)arg2 ;
-(void)createContentViewsWithFade:(char)arg1 ;
-(void)presentDiff:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)_validityStateForPass:(id)arg1 ;
-(void)prepareForFlip;
-(NSArray *)buckets;
-(char)allowBackgroundPlaceHolders;
-(void)setAllowBackgroundPlaceHolders:(char)arg1 ;
-(void)setBackgroundMode:(int)arg1 ;
-(unsigned)visibleRegions;
-(char)clipsContent;
-(float)clippedContentHeight;
-(void)setClippedContentHeight:(float)arg1 ;
-(NSMutableArray *)headerBucketViews;
-(void)setHeaderBucketViews:(NSMutableArray *)arg1 ;
-(PKPassFaceTemplate *)faceTemplate;
-(CGRect)contentBounds;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PKPassFaceDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<PKPassFaceDelegate>)delegate;
-(CGSize)contentSize;
-(UIEdgeInsets)alignmentRectInsets;
-(int)style;
-(UIView *)contentView;
-(void)setStyle:(int)arg1 ;
-(PKPass *)pass;
@end

