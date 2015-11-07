/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKLibraryPreviewPresenting.h>

@class UIPreviewPresentationController, UIViewController, SKStoreProductViewController, NSString;

@interface BKLibraryPreviewStorePresenter : NSObject <BKLibraryPreviewPresenting> {

	UIPreviewPresentationController* _previewPresentationController;
	UIViewController* _originatingViewController;
	SKStoreProductViewController* _productViewController;
	NSString* _storeId;

}

@property (assign,nonatomic,__weak) UIViewController * originatingViewController;                                 //@synthesize originatingViewController=_originatingViewController - In the implementation block
@property (nonatomic,retain) SKStoreProductViewController * productViewController;                                //@synthesize productViewController=_productViewController - In the implementation block
@property (nonatomic,copy) NSString * storeId;                                                                    //@synthesize storeId=_storeId - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIPreviewPresentationController * previewPresentationController;              //@synthesize previewPresentationController=_previewPresentationController - In the implementation block
+(id)previewPresenterForBook:(id)arg1 originatingViewController:(id)arg2 ;
-(void)setPreviewPresentationController:(UIPreviewPresentationController *)arg1 ;
-(UIViewController *)originatingViewController;
-(void)setOriginatingViewController:(UIViewController *)arg1 ;
-(id)initWithBook:(id)arg1 originatingViewController:(id)arg2 ;
-(UIPreviewPresentationController *)previewPresentationController;
-(void)setProductViewController:(SKStoreProductViewController *)arg1 ;
-(SKStoreProductViewController *)productViewController;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)setStoreId:(NSString *)arg1 ;
-(NSString *)storeId;
@end

