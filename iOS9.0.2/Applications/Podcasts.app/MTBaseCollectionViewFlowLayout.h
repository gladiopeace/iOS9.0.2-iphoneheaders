/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath;

@interface MTBaseCollectionViewFlowLayout : UICollectionViewFlowLayout {

	unsigned _numberOfColumns;
	NSIndexPath* _expandedIndexPath;
	float _appliedYOffset;

}

@property (assign,nonatomic) unsigned numberOfColumns;                     //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (nonatomic,retain) NSIndexPath * expandedIndexPath;              //@synthesize expandedIndexPath=_expandedIndexPath - In the implementation block
@property (assign,nonatomic) float appliedYOffset;                         //@synthesize appliedYOffset=_appliedYOffset - In the implementation block
-(NSIndexPath *)expandedIndexPath;
-(float)appliedYOffset;
-(void)setExpandedIndexPath:(NSIndexPath *)arg1 ;
-(void)setAppliedYOffset:(float)arg1 ;
-(unsigned)numberOfColumns;
-(void)setNumberOfColumns:(unsigned)arg1 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
@end

