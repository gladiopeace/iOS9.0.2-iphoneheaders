/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Videos/Videos-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class NSNumber, NSArray, NSMutableDictionary, UICollectionView, SKUICircleProgressIndicator, UILabel, UIButton, SKStoreProductViewController, NSString;

@interface VideosRelatedStoreItemsCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	float _collectionViewAvailableWidth;
	int _numberOfItemsPerRow;
	char _attemptingReload;
	char _canRetryLoading;
	NSNumber* _adamIdentifier;
	float _aspectRatioForCollectionViewItems;
	int _numberOfItemsPerRowOverride;
	unsigned _loadingState;
	NSArray* _relatedItems;
	NSMutableDictionary* _relatedItemArtworks;
	UICollectionView* _collectionView;
	SKUICircleProgressIndicator* _progressIndicator;
	UILabel* _statusLabel;
	UIButton* _retryButton;
	SKStoreProductViewController* _productViewController;

}

@property (nonatomic,copy) NSNumber * adamIdentifier;                                           //@synthesize adamIdentifier=_adamIdentifier - In the implementation block
@property (assign,nonatomic) float aspectRatioForCollectionViewItems;                           //@synthesize aspectRatioForCollectionViewItems=_aspectRatioForCollectionViewItems - In the implementation block
@property (assign,nonatomic) int numberOfItemsPerRowOverride;                                   //@synthesize numberOfItemsPerRowOverride=_numberOfItemsPerRowOverride - In the implementation block
@property (assign,nonatomic) unsigned loadingState;                                             //@synthesize loadingState=_loadingState - In the implementation block
@property (assign,getter=isAttemptingReload,nonatomic) char attemptingReload;                   //@synthesize attemptingReload=_attemptingReload - In the implementation block
@property (assign,nonatomic) char canRetryLoading;                                              //@synthesize canRetryLoading=_canRetryLoading - In the implementation block
@property (nonatomic,retain) NSArray * relatedItems;                                            //@synthesize relatedItems=_relatedItems - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * relatedItemArtworks;                         //@synthesize relatedItemArtworks=_relatedItemArtworks - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                 //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) SKUICircleProgressIndicator * progressIndicator;                   //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                                             //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) UIButton * retryButton;                                            //@synthesize retryButton=_retryButton - In the implementation block
@property (nonatomic,retain) SKStoreProductViewController * productViewController;              //@synthesize productViewController=_productViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)aspectRatioForCollectionViewItems;
-(unsigned)numberOfItemsPerRowForCollectionViewBounds:(CGRect)arg1 ;
-(void)setNumberOfItemsPerRowOverride:(int)arg1 ;
-(void)setAspectRatioForCollectionViewItems:(float)arg1 ;
-(void)setAdamIdentifier:(NSNumber *)arg1 ;
-(void)_updateCollectionViewLayoutProperties;
-(CGSize)collectionViewItemExpansionSize;
-(void)_textSizeDidChange;
-(void)_loadRelatedItems;
-(void)_displayLoading;
-(void)setAttemptingReload:(char)arg1 ;
-(NSArray *)relatedItems;
-(void)_createStatusLabelIfNeeded;
-(char)isAttemptingReload;
-(void)_retryLoadingItems:(id)arg1 ;
-(NSMutableDictionary *)relatedItemArtworks;
-(void)setRelatedItems:(NSArray *)arg1 ;
-(void)setRelatedItemArtworks:(NSMutableDictionary *)arg1 ;
-(NSNumber *)adamIdentifier;
-(void)setCanRetryLoading:(char)arg1 ;
-(int)numberOfItemsPerRowOverride;
-(char)canRetryLoading;
-(void)setProgressIndicator:(SKUICircleProgressIndicator *)arg1 ;
-(UIButton *)retryButton;
-(void)setRetryButton:(UIButton *)arg1 ;
-(void)setProductViewController:(SKStoreProductViewController *)arg1 ;
-(SKStoreProductViewController *)productViewController;
-(void)dealloc;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(unsigned)loadingState;
-(void)setLoadingState:(unsigned)arg1 ;
-(id)collectionViewFlowLayout;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(SKUICircleProgressIndicator *)progressIndicator;
-(id)_createCollectionView;
-(id)_createCollectionViewLayout;
@end

