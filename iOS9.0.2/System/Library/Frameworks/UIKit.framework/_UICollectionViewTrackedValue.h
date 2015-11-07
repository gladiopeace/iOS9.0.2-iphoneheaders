/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface _UICollectionViewTrackedValue : NSObject {

	float _trackedValue;
	NSArray* _values;
	int _valuesCount;
	int _currentIndex;
	char _isAccumulating;

}

@property (assign,nonatomic) float trackedValue;               //@synthesize trackedValue=_trackedValue - In the implementation block
@property (assign,nonatomic) char isAccumulating;              //@synthesize isAccumulating=_isAccumulating - In the implementation block
-(id)init;
-(float)speed;
-(void)addValue:(float)arg1 ;
-(float)trackedValue;
-(char)isAccumulating;
-(void)setIsAccumulating:(char)arg1 ;
-(void)setTrackedValue:(float)arg1 ;
@end

