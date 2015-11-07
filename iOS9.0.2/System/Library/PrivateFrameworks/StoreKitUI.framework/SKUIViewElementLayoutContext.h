/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUIArtworkRequestDelegate;
#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableDictionary, SKUIBadgeTextAttachmentLoader, MPUBorderDrawingCache, SKUIClientContext, NSMapTable, NSHashTable, SKUIItemOfferButton, SKUIViewElementTextLayoutCache, NSMutableSet, UIViewController, UIColor, SKUIResourceLoader, NSString;

@interface SKUIViewElementLayoutContext : NSObject {

	float _activePageWidth;
	NSMutableDictionary* _aggregateValues;
	id<SKUIArtworkRequestDelegate> _artworkRequestDelegate;
	SKUIBadgeTextAttachmentLoader* _badgeImageLoader;
	MPUBorderDrawingCache* _borderDrawingCache;
	SKUIClientContext* _clientContext;
	unsigned _containerViewElementType;
	NSMapTable* _editorialLayouts;
	NSHashTable* _expandedEditorialLayouts;
	SKUIItemOfferButton* _itemOfferButton;
	NSMutableDictionary* _itemOfferButtonSizes;
	SKUIViewElementTextLayoutCache* _labelLayoutCache;
	NSMutableSet* _observedArtworkRequestIDs;
	UIViewController* _parentViewController;
	UIColor* _placeholderColor;
	NSMapTable* _placeholderImages;
	NSMapTable* _blurColors;
	SKUIResourceLoader* _resourceLoader;
	UIColor* _tintColor;
	NSString* _backdropGroupName;
	float _displayScale;

}

@property (assign,nonatomic) float activePageWidth;                                                     //@synthesize activePageWidth=_activePageWidth - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIArtworkRequestDelegate> artworkRequestDelegate;              //@synthesize artworkRequestDelegate=_artworkRequestDelegate - In the implementation block
@property (nonatomic,readonly) SKUIBadgeTextAttachmentLoader * badgeImageLoader; 
@property (nonatomic,readonly) MPUBorderDrawingCache * borderDrawingCache; 
@property (nonatomic,retain) SKUIClientContext * clientContext;                                         //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) unsigned containerViewElementType;                                         //@synthesize containerViewElementType=_containerViewElementType - In the implementation block
@property (nonatomic,retain) SKUIViewElementTextLayoutCache * labelLayoutCache;                         //@synthesize labelLayoutCache=_labelLayoutCache - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;                            //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) SKUIResourceLoader * resourceLoader;                                       //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (nonatomic,retain) UIColor * placeholderColor;                                                //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                       //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName;                                                //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) float displayScale;                                                        //@synthesize displayScale=_displayScale - In the implementation block
+(float)itemWidthForElement:(id)arg1 withDefaultWidth:(float)arg2 fitWidth:(float)arg3 ;
+(float)_calculateValueFromString:(id)arg1 withDefault:(float)arg2 coefficent:(float)arg3 ;
-(UIColor *)placeholderColor;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(void)dealloc;
-(id)init;
-(UIViewController *)parentViewController;
-(float)displayScale;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)aggregateValueForKey:(id)arg1 ;
-(id)imageResourceCacheKeyForArtwork:(id)arg1 ;
-(id)requestIdentifierForArtwork:(id)arg1 ;
-(SKUIResourceLoader *)resourceLoader;
-(char)loadImageForArtwork:(id)arg1 dataConsumer:(id)arg2 reason:(int)arg3 ;
-(id)placeholderImageForSize:(CGSize)arg1 ;
-(id)requestIdentifierForViewElement:(id)arg1 ;
-(char)loadImageForImageElement:(id)arg1 reason:(int)arg2 ;
-(CGSize)sizeForViewElement:(id)arg1 width:(float)arg2 ;
-(id)imageResourceCacheKeyForViewElement:(id)arg1 ;
-(id)requestIdentifierForResourceCacheKey:(id)arg1 ;
-(void)setArtworkRequestDelegate:(id<SKUIArtworkRequestDelegate>)arg1 ;
-(void)setAggregateValue:(id)arg1 forKey:(id)arg2 ;
-(void)setContainerViewElementType:(unsigned)arg1 ;
-(void)setLabelLayoutCache:(SKUIViewElementTextLayoutCache *)arg1 ;
-(void)setResourceLoader:(SKUIResourceLoader *)arg1 ;
-(char)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 ;
-(float)defaultItemWidthForViewElement:(id)arg1 ;
-(SKUIViewElementTextLayoutCache *)labelLayoutCache;
-(CGSize)sizeForImageElement:(id)arg1 ;
-(float)activePageWidth;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(id)initWithStorePageSectionContext:(id)arg1 previousLayoutContext:(id)arg2 ;
-(NSString *)backdropGroupName;
-(char)loadImageForArtwork:(id)arg1 reason:(int)arg2 ;
-(id)textPropertiesForViewElement:(id)arg1 width:(float)arg2 ;
-(MPUBorderDrawingCache *)borderDrawingCache;
-(void)_artworkRequestDidLoadImageNotification:(id)arg1 ;
-(void)invalidateAllEditorialLayouts;
-(void)setActivePageWidth:(float)arg1 ;
-(int)maxWidthForElement:(id)arg1 withDefaultWidth:(int)arg2 ;
-(unsigned)containerViewElementType;
-(id)editorialLayoutForLabelElement:(id)arg1 width:(float)arg2 ;
-(id)initWithStorePageSectionContext:(id)arg1 ;
-(char)isEditorialLayoutExpanded:(id)arg1 ;
-(char)loadTemplatedImageForBadgeElement:(id)arg1 reason:(int)arg2 ;
-(SKUIBadgeTextAttachmentLoader *)badgeImageLoader;
-(id)transientRequestIdentifierForViewElement:(id)arg1 ;
-(id)placeholderImageForImageElement:(id)arg1 ;
-(id)blurColorForCacheKey:(id)arg1 ;
-(void)setBlurColor:(id)arg1 cacheKey:(id)arg2 ;
-(char)loadImageForBadgeElement:(id)arg1 reason:(int)arg2 ;
-(id)_initSKUIViewElementLayoutContext;
-(void)setDisplayScale:(float)arg1 ;
-(char)_loadImageForURL:(id)arg1 cacheKey:(id)arg2 dataConsumer:(id)arg3 reason:(int)arg4 ;
-(CGSize)_sizeForImageElement:(id)arg1 applyTransform:(char)arg2 ;
-(CGSize)sizeForBadgeElement:(id)arg1 ;
-(CGSize)sizeForItemOfferButton:(id)arg1 ;
-(void)expandEditorialForLabelElement:(id)arg1 ;
-(id<SKUIArtworkRequestDelegate>)artworkRequestDelegate;
@end

