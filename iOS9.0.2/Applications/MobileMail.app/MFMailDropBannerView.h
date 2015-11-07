/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@protocol MFMailDropBannerDelegate;
@class UILabel, UIButton, MFProgressView, SeparatorLayer, NSArray, MFMailDropMetadata;

@interface MFMailDropBannerView : UIView {

	char _hasLoaded;
	UILabel* _expirationLabel;
	UILabel* _downloadLabel;
	UIButton* _downloadIcon;
	MFProgressView* _progressView;
	unsigned _bytesSeenSoFar;
	SeparatorLayer* _bottomSeparatorBar;
	NSArray* _constraintsWithInset;
	NSArray* _constraintsWithNegativeInset;
	NSArray* _constraintsWithBodyLeading;
	char _hasDataLocally;
	MFMailDropMetadata* _metaData;
	unsigned _bannerState;
	float _horizontalInset;
	unsigned _totalAttachmentSize;
	id<MFMailDropBannerDelegate> _delegate;

}

@property (nonatomic,retain) MFMailDropMetadata * metaData;                      //@synthesize metaData=_metaData - In the implementation block
@property (assign,nonatomic) unsigned bannerState;                               //@synthesize bannerState=_bannerState - In the implementation block
@property (assign,nonatomic) char hasDataLocally;                                //@synthesize hasDataLocally=_hasDataLocally - In the implementation block
@property (assign,nonatomic) float horizontalInset;                              //@synthesize horizontalInset=_horizontalInset - In the implementation block
@property (assign,nonatomic) unsigned totalAttachmentSize;                       //@synthesize totalAttachmentSize=_totalAttachmentSize - In the implementation block
@property (assign,nonatomic) id<MFMailDropBannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setMetaData:(MFMailDropMetadata *)arg1 ;
-(void)setHasDataLocally:(char)arg1 ;
-(void)setTotalAttachmentSize:(unsigned)arg1 ;
-(char)shouldPresent;
-(void)finishDownload;
-(void)addBytesToProgress:(unsigned)arg1 ;
-(void)dismissBanner;
-(void)setHorizontalInset:(float)arg1 ;
-(CGSize)presentBannerInView:(id)arg1 withSize:(CGSize)arg2 ;
-(void)_setupDownloadLabel;
-(void)_setupExpirationLabel;
-(void)_setupDownloadIcon;
-(void)_updateBannerToState:(unsigned)arg1 ;
-(unsigned)totalAttachmentSize;
-(CGSize)bannerSizeForHeaderViewSize:(CGSize)arg1 ;
-(unsigned)bannerState;
-(void)setBannerState:(unsigned)arg1 ;
-(char)hasDataLocally;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MFMailDropBannerDelegate>)arg1 ;
-(void)dealloc;
-(id<MFMailDropBannerDelegate>)delegate;
-(void)reset;
-(float)horizontalInset;
-(void)startDownload:(id)arg1 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)cancelDownload;
-(MFMailDropMetadata *)metaData;
@end

