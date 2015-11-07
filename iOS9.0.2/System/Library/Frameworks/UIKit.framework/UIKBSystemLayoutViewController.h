/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>

@class NSMutableArray;

@interface UIKBSystemLayoutViewController : UIViewController {

	NSMutableArray* _constraints;
	unsigned _horizontalLayoutType;
	unsigned _verticalLayoutType;
	CGSize _centeredOffsets;
	UIEdgeInsets _minimumInsets;

}

@property (assign,nonatomic) unsigned horizontalLayoutType;              //@synthesize horizontalLayoutType=_horizontalLayoutType - In the implementation block
@property (assign,nonatomic) unsigned verticalLayoutType;                //@synthesize verticalLayoutType=_verticalLayoutType - In the implementation block
@property (assign,nonatomic) UIEdgeInsets minimumInsets;                 //@synthesize minimumInsets=_minimumInsets - In the implementation block
@property (assign,nonatomic) CGSize centeredOffsets;                     //@synthesize centeredOffsets=_centeredOffsets - In the implementation block
+(id)systemLayoutViewControllerWithViewController:(id)arg1 ;
-(void)dealloc;
-(void)updateViewConstraints;
-(unsigned)horizontalLayoutType;
-(unsigned)verticalLayoutType;
-(void)setHorizontalLayoutType:(unsigned)arg1 ;
-(void)setVerticalLayoutType:(unsigned)arg1 ;
-(void)setMinimumInsets:(UIEdgeInsets)arg1 ;
-(void)setCenteredOffsets:(CGSize)arg1 ;
-(UIEdgeInsets)minimumInsets;
-(CGSize)centeredOffsets;
@end

