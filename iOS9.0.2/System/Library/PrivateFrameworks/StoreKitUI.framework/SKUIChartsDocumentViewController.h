/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class SKUIChartColumnsView, NSMutableArray, SKUIChartsTemplateViewElement, NSString;

@interface SKUIChartsDocumentViewController : SKUIViewController <SKUIDocumentViewController> {

	SKUIChartColumnsView* _chartsView;
	NSMutableArray* _columnViewControllers;
	SKUIChartsTemplateViewElement* _templateElement;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)contentScrollView;
-(void)documentDidUpdate:(id)arg1 ;
-(void)documentMediaQueriesDidUpdate:(id)arg1 ;
-(void)skui_viewWillAppear:(char)arg1 ;
-(id)initWithTemplateElement:(id)arg1 ;
-(id)_newColumnViewControllersWithReusableViewControllers:(id)arg1 ;
-(int)_visibleColumnCountForWidth:(float)arg1 ;
-(UIEdgeInsets)_chartInsets;
-(id)_columnViewControllers;
@end

