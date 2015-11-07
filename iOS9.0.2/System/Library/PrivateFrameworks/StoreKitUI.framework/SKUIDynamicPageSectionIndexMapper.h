/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUIEntityProviding;
#import <StoreKitUI/StoreKitUI-Structs.h>
@interface SKUIDynamicPageSectionIndexMapper : NSObject {

	NSRange* _sectionIndexToEntityRange;
	int _numberOfSections;
	struct {
		unsigned respondsToNumberOfSections : 1;
	}  _entityProviderFlags;
	id<SKUIEntityProviding> _entityProvider;

}

@property (nonatomic,retain) id<SKUIEntityProviding> entityProvider;              //@synthesize entityProvider=_entityProvider - In the implementation block
@property (nonatomic,readonly) int numberOfSections; 
@property (nonatomic,readonly) int totalNumberOfEntities; 
-(void)dealloc;
-(void)reloadData;
-(int)numberOfSections;
-(int)totalNumberOfEntities;
-(id<SKUIEntityProviding>)entityProvider;
-(void)setEntityProvider:(id<SKUIEntityProviding>)arg1 ;
-(id)entityIndexPathForGlobalIndex:(int)arg1 ;
-(void)_loadDataIfNeeded;
-(char)getItem:(unsigned*)arg1 section:(unsigned*)arg2 forGlobalIndex:(int)arg3 ;
-(int)globalIndexForEntityIndexPath:(id)arg1 ;
-(NSRange)rangeForSectionAtIndex:(int)arg1 ;
@end

