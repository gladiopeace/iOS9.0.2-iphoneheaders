/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewLayout.h>
#import <libobjc.A.dylib/SKUIShelfCollectionViewLayout.h>
@class SKUIShelfLayoutData;


@protocol SKUIShelfCollectionViewLayout <NSObject>
@property (nonatomic,retain) SKUIShelfLayoutData * layoutData; 
@required
+(float)snapToBoundariesDecelerationRate;
+(char)collectionViewCanClipToBounds;
-(SKUIShelfLayoutData *)layoutData;
-(void)setLayoutData:(id)arg1;

@end


@class SKUIShelfLayoutData, NSString;

@interface SKUIShelfCollectionViewLayout : UICollectionViewLayout <SKUIShelfCollectionViewLayout> {

	SKUIShelfLayoutData* _layoutData;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIShelfLayoutData * layoutData;              //@synthesize layoutData=_layoutData - In the implementation block
+(Class)layoutAttributesClass;
+(float)snapToBoundariesDecelerationRate;
+(char)collectionViewCanClipToBounds;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(SKUIShelfLayoutData *)layoutData;
-(void)setLayoutData:(SKUIShelfLayoutData *)arg1 ;
@end

