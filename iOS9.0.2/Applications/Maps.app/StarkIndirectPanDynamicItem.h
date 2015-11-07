/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIDynamicItem.h>

@class UIBezierPath, NSString;

@interface StarkIndirectPanDynamicItem : NSObject <UIDynamicItem> {

	CGPoint _center;
	CGRect _bounds;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) CGPoint center;                                      //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                     //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                         //@synthesize transform=_transform - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
-(CGRect)bounds;
-(CGPoint)center;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(void)setCenter:(CGPoint)arg1 ;
-(id)initWithBounds:(CGRect)arg1 ;
@end

