/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSMutableArray, SKUIViewElement, NSArray, SKUIIndexBarViewElement, SKUINavigationBarViewElement, SKUIToolbarViewElement;

@interface SKUIStackTemplateElement : SKUIViewElement {

	NSMutableArray* _collectionElements;
	SKUIViewElement* _collectionHeaderViewElement;
	char _needsStateReset;

}

@property (nonatomic,readonly) NSArray * collectionElements; 
@property (nonatomic,readonly) SKUIViewElement * collectionHeaderViewElement; 
@property (nonatomic,readonly) SKUIIndexBarViewElement * indexBarViewElement; 
@property (nonatomic,readonly) SKUINavigationBarViewElement * navigationBarElement; 
@property (nonatomic,readonly) SKUIToolbarViewElement * toolbarElement; 
@property (nonatomic,readonly) int numberOfSplits; 
@property (nonatomic,readonly) char needsStateReset;                                             //@synthesize needsStateReset=_needsStateReset - In the implementation block
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(SKUINavigationBarViewElement *)navigationBarElement;
-(int)numberOfSplits;
-(char)needsStateReset;
-(SKUIIndexBarViewElement *)indexBarViewElement;
-(SKUIViewElement *)collectionHeaderViewElement;
-(NSArray *)collectionElements;
-(SKUIToolbarViewElement *)toolbarElement;
@end

