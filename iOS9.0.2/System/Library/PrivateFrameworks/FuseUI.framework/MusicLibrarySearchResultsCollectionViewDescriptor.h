/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityCollectionViewDescriptor.h>

@interface MusicLibrarySearchResultsCollectionViewDescriptor : MusicEntityCollectionViewDescriptor {

	char _itemsFillRow;
	unsigned _numberOfItemsPerRow;

}

@property (assign,nonatomic) char itemsFillRow;                         //@synthesize itemsFillRow=_itemsFillRow - In the implementation block
@property (assign,nonatomic) unsigned numberOfItemsPerRow;              //@synthesize numberOfItemsPerRow=_numberOfItemsPerRow - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)numberOfItemsPerRow;
-(void)setItemsFillRow:(char)arg1 ;
-(void)setNumberOfItemsPerRow:(unsigned)arg1 ;
-(char)itemsFillRow;
@end

