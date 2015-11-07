/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class SKUIViewControllerContainerView, NSIndexPath, UIViewController, UIView;

@interface SKUIViewControllerContainerCollectionViewCell : UICollectionViewCell {

	SKUIViewControllerContainerView* _viewControllerContainerView;
	char _managesViewControllerContainerViewLayout;
	NSIndexPath* _indexPath;

}

@property (nonatomic,retain) UIViewController * viewController; 
@property (nonatomic,readonly) UIView * viewControllerContainerView; 
@property (assign,nonatomic) char managesViewControllerContainerViewLayout;              //@synthesize managesViewControllerContainerViewLayout=_managesViewControllerContainerViewLayout - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                  //@synthesize indexPath=_indexPath - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSIndexPath *)indexPath;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setManagesViewControllerContainerViewLayout:(char)arg1 ;
-(UIView *)viewControllerContainerView;
-(char)managesViewControllerContainerViewLayout;
@end

