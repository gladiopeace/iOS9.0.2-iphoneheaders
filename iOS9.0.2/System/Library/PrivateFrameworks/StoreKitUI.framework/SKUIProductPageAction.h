/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SKUIItem, NSString, NSURL, UIViewController;

@interface SKUIProductPageAction : NSObject {

	int _actionType;
	SKUIItem* _item;
	NSString* _urlTitle;
	/*^block*/id _viewControllerBlock;
	NSURL* _url;

}

@property (assign,nonatomic) int actionType;                                   //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) SKUIItem * item;                                  //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                        //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) id viewControllerBlock;                             //@synthesize viewControllerBlock=_viewControllerBlock - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController; 
+(id)actionWithType:(int)arg1 ;
-(int)actionType;
-(SKUIItem *)item;
-(UIViewController *)viewController;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setItem:(SKUIItem *)arg1 ;
-(void)setActionType:(int)arg1 ;
-(id)viewControllerBlock;
-(void)setViewControllerBlock:(id)arg1 ;
@end

