/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSArray;

@interface SKUIIndexBarEntryListViewElement : SKUIViewElement {

	char _indexBarHiddenWhenEmpty;
	int _entryListElementType;
	int _minimumEntityCount;
	NSString* _targetIndexBarEntryID;

}

@property (nonatomic,copy,readonly) NSArray * childIndexBarEntryElements; 
@property (nonatomic,readonly) int entryListElementType;                                                   //@synthesize entryListElementType=_entryListElementType - In the implementation block
@property (getter=isIndexBarHiddenWhenEmpty,nonatomic,readonly) char indexBarHiddenWhenEmpty;              //@synthesize indexBarHiddenWhenEmpty=_indexBarHiddenWhenEmpty - In the implementation block
@property (nonatomic,readonly) int minimumEntityCount;                                                     //@synthesize minimumEntityCount=_minimumEntityCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetIndexBarEntryID;                                      //@synthesize targetIndexBarEntryID=_targetIndexBarEntryID - In the implementation block
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(char)isIndexBarHiddenWhenEmpty;
-(int)minimumEntityCount;
-(NSArray *)childIndexBarEntryElements;
-(NSString *)targetIndexBarEntryID;
-(int)entryListElementType;
@end

