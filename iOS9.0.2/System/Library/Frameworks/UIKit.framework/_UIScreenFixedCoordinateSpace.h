/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICoordinateSpace.h>

@class UIScreen, NSString;

@interface _UIScreenFixedCoordinateSpace : NSObject <UICoordinateSpace> {

	UIScreen* _screen;

}

@property (assign,setter=_setScreen:,nonatomic) UIScreen * _screen;              //@synthesize screen=_screen - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect bounds; 
-(CGRect)bounds;
-(UIScreen *)_screen;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(void)_setScreen:(id)arg1 ;
@end

