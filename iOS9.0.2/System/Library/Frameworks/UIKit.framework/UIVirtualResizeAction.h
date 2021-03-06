/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <BaseBoard/BSAction.h>

@interface UIVirtualResizeAction : BSAction

@property (nonatomic,readonly) CGSize virtualSize; 
@property (nonatomic,readonly) int virtualHorizontalSizeClass; 
@property (nonatomic,readonly) int virtualVerticalSizeClass; 
-(int)UIActionType;
-(CGSize)virtualSize;
-(int)virtualHorizontalSizeClass;
-(int)virtualVerticalSizeClass;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)initWithVirtualSize:(CGSize)arg1 virtualHorizontalSizeClass:(int)arg2 virtualVerticalSizeClass:(int)arg3 ;
-(id)keyDescriptionForSetting:(unsigned)arg1 ;
@end

