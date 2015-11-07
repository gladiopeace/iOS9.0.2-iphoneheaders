/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKBookPresenting.h>

@protocol BKPresenting, BKBookCollectiblePresenting, BKStorePresenting;
@class NSManagedObjectContext, NSString;

@interface BKBookFlowController : NSObject <BKBookPresenting> {

	id<BKPresenting> _delegate;
	id<BKBookCollectiblePresenting> _bookCollectiblePresenter;
	id<BKStorePresenting> _storePresenter;
	NSManagedObjectContext* _moc;

}

@property (assign,nonatomic,__weak) id<BKPresenting> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<BKBookCollectiblePresenting> bookCollectiblePresenter;              //@synthesize bookCollectiblePresenter=_bookCollectiblePresenter - In the implementation block
@property (nonatomic,retain) id<BKStorePresenting> storePresenter;                                  //@synthesize storePresenter=_storePresenter - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * moc;                                        //@synthesize moc=_moc - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bookPresenterCurrentlyOpenBook;
-(void)showBook:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)showAssetWithURL:(id)arg1 location:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)showCacheErrorForAssetUrl:(id)arg1 ;
-(void)requestOpenLastKnownBook;
-(void)handleFamilyChangeError:(id)arg1 assetID:(id)arg2 ;
-(id)optionsForPresentingBook:(id)arg1 ;
-(void)bookPresenterDismissBookViewController:(id)arg1 withInteractiveTransition:(id)arg2 ;
-(id)initWithMoc:(id)arg1 ;
-(void)setBookCollectiblePresenter:(id<BKBookCollectiblePresenting>)arg1 ;
-(id<BKStorePresenting>)storePresenter;
-(void)setStorePresenter:(id<BKStorePresenting>)arg1 ;
-(id)_bookWithAssetURL:(id)arg1 ;
-(id<BKBookCollectiblePresenting>)bookCollectiblePresenter;
-(id)_optionsForBook:(id)arg1 ;
-(id)_pushLargeCoverAndOpenBook:(id)arg1 options:(id)arg2 ;
-(void)_updateBookAfterOpen:(id)arg1 ;
-(void)handleBookOpenError:(id)arg1 url:(id)arg2 assetID:(id)arg3 ;
-(id)_currentPresenterForAssetURL:(id)arg1 ;
-(char)_shouldOpenBookUsingLargeCover;
-(void)showNotEnoughMemAlert:(id)arg1 ;
-(void)showInstallationErrorForAssetUrl:(id)arg1 ;
-(id)_storeController;
-(void)setDelegate:(id<BKPresenting>)arg1 ;
-(id<BKPresenting>)delegate;
-(NSManagedObjectContext *)moc;
@end
