/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityAbstractLockupView.h>
#import <libobjc.A.dylib/MPUTextDrawingCacheInvalidationObserver.h>
#import <libobjc.A.dylib/MusicEntityContentDescriptorViewConfiguring.h>

@protocol MusicEntityTracklistItemViewDelegate;
@class UIButton, MusicDownloadStatusSashView, MPUNowPlayingIndicatorView, UIImageView, NSMapTable, NSMutableArray, NSString, MusicEntityViewContentDescriptor;

@interface MusicEntityTracklistItemView : MusicEntityAbstractLockupView <MPUTextDrawingCacheInvalidationObserver, MusicEntityContentDescriptorViewConfiguring> {

	UIButton* _contextualActionsButton;
	MusicDownloadStatusSashView* _downloadStatusSashView;
	MPUNowPlayingIndicatorView* _indicatorView;
	UIImageView* _mediaTypeImageView;
	UIImageView* _explicitBadgeImageView;
	NSMapTable* _textDescriptorToTextDrawingView;
	NSMutableArray* _textDrawingViewReusePool;
	UIImageView* _trailingAccessoryImageView;
	SCD_Struct_Mu15 _delegateRespondsToSelector;
	id<MusicEntityTracklistItemViewDelegate> _delegate;
	float _leadingTextColumnWidth;
	float _trailingTextColumnWidth;

}

@property (assign,nonatomic,__weak) id<MusicEntityTracklistItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float leadingTextColumnWidth;                                          //@synthesize leadingTextColumnWidth=_leadingTextColumnWidth - In the implementation block
@property (assign,nonatomic) float trailingTextColumnWidth;                                         //@synthesize trailingTextColumnWidth=_trailingTextColumnWidth - In the implementation block
@property (nonatomic,readonly) UIButton * contextualActionsButton;                                  //@synthesize contextualActionsButton=_contextualActionsButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MusicEntityViewContentDescriptor * contentDescriptor; 
@property (nonatomic,retain) id<MusicEntityValueProviding> entityValueProvider; 
+(float)maximumHeightForContentDescriptor:(id)arg1 width:(float)arg2 traitCollection:(id)arg3 ;
-(char)_shouldShowPlayButton;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<MusicEntityTracklistItemViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MusicEntityTracklistItemViewDelegate>)delegate;
-(void)layoutMarginsDidChange;
-(id)_viewForTextDescriptor:(id)arg1 ;
-(void)_contentDescriptorDidChange:(id)arg1 ;
-(void)_recycleTextViewsForTextDescriptors:(id)arg1 ;
-(void)_handlePlayButtonTappedWithAction:(unsigned)arg1 ;
-(MusicEntityViewContentDescriptor *)contentDescriptor;
-(void)setContentDescriptor:(MusicEntityViewContentDescriptor *)arg1 ;
-(char)_shouldEnableArtworkViewUserInteraction;
-(UIButton *)contextualActionsButton;
-(void)_handleArtworkViewTapped;
-(void)_playbackStatusDidChange:(id)arg1 ;
-(void)_entityDisabledDidChange;
-(void)textDrawingCacheWasInvalidated:(id)arg1 ;
-(char)_shouldLayoutAsEditing;
-(void)_contextualActionsButtonTapped:(id)arg1 ;
-(void)setLeadingTextColumnWidth:(float)arg1 ;
-(float)leadingTextColumnWidth;
-(void)_contentDescriptorDidInvalidateNotification:(id)arg1 ;
-(void)_recycleTextDrawingViewForTextDescriptor:(id)arg1 ;
-(id)_allTextDescriptorsInTracklistItemContentDescriptor:(id)arg1 ;
-(void)_updatePlaybackIndicator;
-(void)setTrailingTextColumnWidth:(float)arg1 ;
-(float)trailingTextColumnWidth;
@end
