/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface UICompositeImageView : UIView {

	NSMutableArray* m_images;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)addImage:(id)arg1 toRect:(CGRect)arg2 fromRect:(CGRect)arg3 operation:(int)arg4 fraction:(float)arg5 ;
-(void)addImage:(id)arg1 ;
-(void)addImage:(id)arg1 operation:(int)arg2 fraction:(float)arg3 ;
-(void)addImage:(id)arg1 toRect:(CGRect)arg2 fromRect:(CGRect)arg3 ;
-(void)removeAllImages;
@end

