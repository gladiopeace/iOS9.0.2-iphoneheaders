/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@interface SKUIStorePageItemPinningLayoutInformation : NSObject {

	float _afterPinningLocationYAdditions;
	float _beforePinningLocationYAdditions;
	CGRect _availablePinningFrame;
	CGRect _layoutAttributesFrame;

}

@property (assign,nonatomic) CGRect availablePinningFrame;                       //@synthesize availablePinningFrame=_availablePinningFrame - In the implementation block
@property (assign,nonatomic) CGRect layoutAttributesFrame;                       //@synthesize layoutAttributesFrame=_layoutAttributesFrame - In the implementation block
@property (assign,nonatomic) float afterPinningLocationYAdditions;               //@synthesize afterPinningLocationYAdditions=_afterPinningLocationYAdditions - In the implementation block
@property (assign,nonatomic) float beforePinningLocationYAdditions;              //@synthesize beforePinningLocationYAdditions=_beforePinningLocationYAdditions - In the implementation block
-(CGRect)availablePinningFrame;
-(void)setAvailablePinningFrame:(CGRect)arg1 ;
-(void)setLayoutAttributesFrame:(CGRect)arg1 ;
-(void)setAfterPinningLocationYAdditions:(float)arg1 ;
-(void)setBeforePinningLocationYAdditions:(float)arg1 ;
-(CGRect)layoutAttributesFrame;
-(float)afterPinningLocationYAdditions;
-(float)beforePinningLocationYAdditions;
@end

