/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SKUIClientContext, NSOperationQueue, SKUIReviewConfiguration, UIWindow;

@interface SKUIStarRatingQueue : NSObject {

	SKUIClientContext* _clientContext;
	NSOperationQueue* _queue;
	SKUIReviewConfiguration* _reviewConfiguration;
	UIWindow* _window;

}

@property (assign,nonatomic,__weak) UIWindow * window;              //@synthesize window=_window - In the implementation block
-(UIWindow *)window;
-(id)init;
-(void)setWindow:(UIWindow *)arg1 ;
-(id)initWithClientContext:(id)arg1 reviewConfiguration:(id)arg2 ;
-(void)setRating:(int)arg1 forItem:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_setRating:(int)arg1 forItem:(id)arg2 account:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

