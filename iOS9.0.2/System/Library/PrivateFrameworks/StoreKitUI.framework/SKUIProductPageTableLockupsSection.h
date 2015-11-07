/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUIMissingItemDelegate.h>

@class NSMapTable, SKUIProductPageTableSeparatorView, SKUIProductPageTableHeaderView, NSArray, SKUIMissingItemLoader, UIImage, SKUIStyledImageDataConsumer, SKUIResourceLoader, NSString;

@interface SKUIProductPageTableLockupsSection : SKUIProductPageTableSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate> {

	NSMapTable* _artworkRequests;
	SKUIProductPageTableSeparatorView* _footerView;
	SKUIProductPageTableHeaderView* _headerView;
	NSArray* _lockups;
	SKUIMissingItemLoader* _missingItemLoader;
	UIImage* _placeholderImage;
	SKUIStyledImageDataConsumer* _productImageDataConsumer;
	SKUIResourceLoader* _resourceLoader;

}

@property (nonatomic,retain) SKUIResourceLoader * resourceLoader;              //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(SKUIResourceLoader *)resourceLoader;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(int)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)setResourceLoader:(SKUIResourceLoader *)arg1 ;
-(id)headerViewForTableView:(id)arg1 ;
-(id)footerViewForTableView:(id)arg1 ;
-(id)_missingItemLoader;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(id)initWithLockups:(id)arg1 title:(id)arg2 ;
-(id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)_productImageForItem:(id)arg1 ;
@end

