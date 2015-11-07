/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicMediaQueryDataSource.h>

@class NSArray;

@interface MusicProfileAlbumsDataSource : MusicMediaQueryDataSource {

	NSArray* _sectionEntities;
	vector<_NSRange, std::__1::allocator<_NSRange> >* _sectionRanges;

}
-(unsigned)numberOfSections;
-(char)showsIndexBar;
-(char)usesSections;
-(id)sectionEntities;
-(void)_invalidateCalculatedEntities;
-(id)localizedSectionTitleAtIndex:(unsigned)arg1 ;
-(NSRange)rangeOfSectionAtIndex:(unsigned)arg1 ;
-(id)entities;
@end

