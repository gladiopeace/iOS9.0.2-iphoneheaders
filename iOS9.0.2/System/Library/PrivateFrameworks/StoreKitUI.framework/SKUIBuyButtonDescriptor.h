/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, SKUIStoreIdentifier;

@interface SKUIBuyButtonDescriptor : NSObject <NSCopying, NSMutableCopying> {

	NSString* _buttonText;
	int _buttonType;
	NSString* _confirmationText;
	unsigned _elementType;
	long long _itemIdentifier;
	SKUIStoreIdentifier* _storeIdentifier;
	NSString* _variantIdentifier;

}

@property (nonatomic,readonly) int buttonType;                                     //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonText;                         //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,copy,readonly) NSString * confirmationText;                   //@synthesize confirmationText=_confirmationText - In the implementation block
@property (nonatomic,readonly) unsigned elementType;                               //@synthesize elementType=_elementType - In the implementation block
@property (nonatomic,readonly) SKUIStoreIdentifier * storeIdentifier;              //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) long long itemIdentifier;                           //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * variantIdentifier;                       //@synthesize variantIdentifier=_variantIdentifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)buttonType;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned)elementType;
-(long long)itemIdentifier;
-(NSString *)buttonText;
-(SKUIStoreIdentifier *)storeIdentifier;
-(NSString *)variantIdentifier;
-(NSString *)confirmationText;
-(char)canPerformLocalActionWithItemState:(id)arg1 ;
-(char)canPersonalizeUsingItemState:(id)arg1 ;
@end

