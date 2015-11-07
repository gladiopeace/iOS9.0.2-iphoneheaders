/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class _SBOrientationTransformedContentView, NSArray;

@interface SBOrientationTransformWrapperView : UIView {

	_SBOrientationTransformedContentView* _transformedView;
	int _contentOrientation;
	int _containerOrientation;

}

@property (assign,nonatomic) int contentOrientation;                       //@synthesize contentOrientation=_contentOrientation - In the implementation block
@property (assign,nonatomic) int containerOrientation;                     //@synthesize containerOrientation=_containerOrientation - In the implementation block
@property (nonatomic,retain,readonly) NSArray * contentViews; 
-(void)addContentView:(id)arg1 ;
-(void)setContentOrientation:(int)arg1 ;
-(void)setContainerOrientation:(int)arg1 ;
-(void)_updateGeometry;
-(CGAffineTransform)_transformForContainerOrientation:(int)arg1 contentOrientation:(int)arg2 ;
-(NSArray *)contentViews;
-(int)contentOrientation;
-(int)containerOrientation;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(id)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
@end

