/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UICollectionView.h>

@protocol MPUExtrasCarouselCollectionViewDelegate;
@interface MPUExtrasCarouselCollectionView : UICollectionView {

	id<MPUExtrasCarouselCollectionViewDelegate> _carouselCollectionViewDelegate;

}

@property (assign,nonatomic,__weak) id<MPUExtrasCarouselCollectionViewDelegate> carouselCollectionViewDelegate;              //@synthesize carouselCollectionViewDelegate=_carouselCollectionViewDelegate - In the implementation block
-(void)didAddSubview:(id)arg1 ;
-(void)setCarouselCollectionViewDelegate:(id<MPUExtrasCarouselCollectionViewDelegate>)arg1 ;
-(id<MPUExtrasCarouselCollectionViewDelegate>)carouselCollectionViewDelegate;
@end
