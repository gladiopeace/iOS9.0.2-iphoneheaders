/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIBezierPath;


@protocol UIDynamicItem <NSObject>
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (nonatomic,readonly) unsigned collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
@optional
-(unsigned)collisionBoundsType;
-(UIBezierPath *)collisionBoundingPath;

@required
-(CGRect)bounds;
-(CGPoint)center;
-(void)setTransform:(CGAffineTransform)arg1;
-(CGAffineTransform)transform;
-(void)setCenter:(CGPoint)arg1;

@end

