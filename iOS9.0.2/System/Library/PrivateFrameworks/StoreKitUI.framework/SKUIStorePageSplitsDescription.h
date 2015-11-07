/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SKUIStorePageSplit;

@interface SKUIStorePageSplitsDescription : NSObject <NSCopying> {

	SKUIStorePageSplit* _bottomSplit;
	SKUIStorePageSplit* _leftSplit;
	SKUIStorePageSplit* _rightSplit;
	SKUIStorePageSplit* _topSplit;

}

@property (nonatomic,copy) SKUIStorePageSplit * bottomSplit;                 //@synthesize bottomSplit=_bottomSplit - In the implementation block
@property (nonatomic,copy) SKUIStorePageSplit * leftSplit;                   //@synthesize leftSplit=_leftSplit - In the implementation block
@property (nonatomic,copy) SKUIStorePageSplit * rightSplit;                  //@synthesize rightSplit=_rightSplit - In the implementation block
@property (nonatomic,copy) SKUIStorePageSplit * topSplit;                    //@synthesize topSplit=_topSplit - In the implementation block
@property (nonatomic,readonly) SKUIStorePageSplit * firstSplit; 
@property (nonatomic,readonly) int numberOfSplits; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateSplitsUsingBlock:(/*^block*/id)arg1 ;
-(void)setTopSplit:(SKUIStorePageSplit *)arg1 ;
-(int)numberOfSplits;
-(void)sizeSplitsToFitWidth:(float)arg1 usingBlock:(/*^block*/id)arg2 ;
-(SKUIStorePageSplit *)leftSplit;
-(SKUIStorePageSplit *)rightSplit;
-(SKUIStorePageSplit *)firstSplit;
-(void)setBottomSplit:(SKUIStorePageSplit *)arg1 ;
-(void)setLeftSplit:(SKUIStorePageSplit *)arg1 ;
-(void)setRightSplit:(SKUIStorePageSplit *)arg1 ;
-(SKUIStorePageSplit *)bottomSplit;
-(SKUIStorePageSplit *)topSplit;
@end

