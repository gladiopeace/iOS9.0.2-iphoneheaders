/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SKUIURLConnectionRequest;

@interface SKUIGiftPurchaseRequest : NSObject {

	SKUIURLConnectionRequest* _request;

}
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(void)purchaseWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithDonation:(id)arg1 configuration:(id)arg2 ;
-(id)_requestWithURL:(id)arg1 bodyDictionary:(id)arg2 ;
@end

