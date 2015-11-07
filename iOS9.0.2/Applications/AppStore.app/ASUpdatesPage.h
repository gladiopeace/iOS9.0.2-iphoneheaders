/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface ASUpdatesPage : NSObject {

	NSArray* _pageSections;

}

@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSArray * sections;                    //@synthesize pageSections=_pageSections - In the implementation block
@property (nonatomic,readonly) NSArray * availableItems; 
-(id)initWithUpdates:(id)arg1 clientContext:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSArray *)items;
-(NSArray *)availableItems;
-(NSArray *)sections;
@end

