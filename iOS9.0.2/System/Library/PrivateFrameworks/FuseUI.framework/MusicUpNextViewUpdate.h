/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface MusicUpNextViewUpdate : NSObject {

	unsigned _type;
	NSArray* _indexPaths;

}

@property (assign,nonatomic) unsigned type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * indexPaths;              //@synthesize indexPaths=_indexPaths - In the implementation block
-(id)debugDescription;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)_stringForUpdateType:(unsigned)arg1 ;
-(void)setIndexPaths:(NSArray *)arg1 ;
-(NSArray *)indexPaths;
@end

