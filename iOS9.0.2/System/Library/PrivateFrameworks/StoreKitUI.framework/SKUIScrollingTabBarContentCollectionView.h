/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewControllerContainerCollectionView.h>

@interface SKUIScrollingTabBarContentCollectionView : SKUIViewControllerContainerCollectionView {

	char _performingLayout;

}

@property (assign,nonatomic) id<SKUIScrollingTabBarContentCollectionViewDelegate> delegate; 
@property (getter=isPerformingLayout,nonatomic,readonly) char performingLayout;                          //@synthesize performingLayout=_performingLayout - In the implementation block
-(void)layoutSubviews;
-(void)_reuseCell:(id)arg1 ;
-(char)isPerformingLayout;
@end

