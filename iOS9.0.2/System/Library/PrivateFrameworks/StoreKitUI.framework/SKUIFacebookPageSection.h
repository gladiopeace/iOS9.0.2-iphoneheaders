/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>

@class ACAccountStore, SKUIReviewsFacebookView, SKUIViewElementLayoutContext, SKUIFacebookLikeStatus, SKUIFacebookPageComponent;

@interface SKUIFacebookPageSection : SKUIStorePageSection {

	ACAccountStore* _accountStore;
	char _facebookAccountsExist;
	SKUIReviewsFacebookView* _facebookView;
	char _isLoadingLikeStatus;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUIFacebookLikeStatus* _likeStatus;

}

@property (nonatomic,readonly) SKUIFacebookPageComponent * pageComponent; 
-(void)dealloc;
-(id)initWithPageComponent:(id)arg1 ;
-(int)applyUpdateType:(int)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(int)numberOfCells;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)_resetState;
-(void)_changeStatusToUserLiked:(char)arg1 ;
-(id)_facebookView;
-(void)_applyColorSchemeToFacebookView:(id)arg1 ;
-(int)_facebookAccountsExist;
-(void)_reloadLikeStatus;
-(void)_reloadCollectionViewSection;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(id)_accountStore;
-(void)_toggleLikeAction:(id)arg1 ;
-(void)_finishLookupWithStatus:(id)arg1 error:(id)arg2 ;
@end

