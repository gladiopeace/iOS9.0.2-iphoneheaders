/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UICollectionView.h>

@class UITraitCollection;

@interface MusicCollectionView : UICollectionView {

	UITraitCollection* _cachedTraitCollection;
	char _shouldTreatContentOffsetChangesAsDeltas;

}

@property (assign,nonatomic) id<MusicCollectionViewDelegate> delegate; 
@property (assign,nonatomic) char shouldTreatContentOffsetChangesAsDeltas;              //@synthesize shouldTreatContentOffsetChangesAsDeltas=_shouldTreatContentOffsetChangesAsDeltas - In the implementation block
-(id)traitCollection;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)tintColorDidChange;
-(char)shouldTreatContentOffsetChangesAsDeltas;
-(void)setShouldTreatContentOffsetChangesAsDeltas:(char)arg1 ;
@end

