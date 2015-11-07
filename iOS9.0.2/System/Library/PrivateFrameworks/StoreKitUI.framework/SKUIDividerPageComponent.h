/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class NSString, SKUIDividerViewElement;

@interface SKUIDividerPageComponent : SKUIPageComponent {

	NSString* _title;

}

@property (nonatomic,readonly) SKUIDividerViewElement * viewElement; 
@property (nonatomic,readonly) NSString * dividerTitle;                           //@synthesize title=_title - In the implementation block
-(int)componentType;
-(NSString *)dividerTitle;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(id)initWithDividerTitle:(id)arg1 ;
@end

