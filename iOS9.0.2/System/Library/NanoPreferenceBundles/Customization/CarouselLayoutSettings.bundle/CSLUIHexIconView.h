/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class CSLHexAppNode;


@protocol CSLUIHexIconView <NSObject>
@property (assign,setter=setJiggling:,nonatomic) char isJiggling; 
@property (nonatomic,retain) CSLHexAppNode * node; 
@required
-(void)dragToPoint:(CGPoint)arg1;
-(void)setJiggling:(char)arg1;
-(char)isJiggling;
-(void)beginDraggingAtPoint:(CGPoint)arg1;
-(void)endDraggingToLayoutAttributes:(SCD_Struct_CS1)arg1;
-(CSLHexAppNode *)node;
-(void)applyLayoutAttributes:(SCD_Struct_CS1)arg1;
-(void)setNode:(id)arg1;

@end

