/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, CKActionMenuController, UIVisualEffectView, UIImageView;

@interface CKActionMenuView : UIView {

	char _collapsed;
	char _touchInside;
	NSArray* _actionMenuItems;
	unsigned _defaultActionIndex;
	CKActionMenuController* _actionMenuController;
	NSArray* _presentationActionMenuItems;
	unsigned _presentationDefaultActionIndex;
	UIVisualEffectView* _blurView;
	UIImageView* _maskView;
	CGPoint _presentationTargetPosition;
	CGRect _presentationTargetBounds;

}

@property (nonatomic,copy) NSArray * actionMenuItems;                                    //@synthesize actionMenuItems=_actionMenuItems - In the implementation block
@property (assign,nonatomic) unsigned defaultActionIndex;                                //@synthesize defaultActionIndex=_defaultActionIndex - In the implementation block
@property (assign,nonatomic) CKActionMenuController * actionMenuController;              //@synthesize actionMenuController=_actionMenuController - In the implementation block
@property (nonatomic,copy) NSArray * presentationActionMenuItems;                        //@synthesize presentationActionMenuItems=_presentationActionMenuItems - In the implementation block
@property (assign,nonatomic) unsigned presentationDefaultActionIndex;                    //@synthesize presentationDefaultActionIndex=_presentationDefaultActionIndex - In the implementation block
@property (assign,nonatomic) CGRect presentationTargetBounds;                            //@synthesize presentationTargetBounds=_presentationTargetBounds - In the implementation block
@property (assign,nonatomic) CGPoint presentationTargetPosition;                         //@synthesize presentationTargetPosition=_presentationTargetPosition - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurView;                              //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIImageView * maskView;                                     //@synthesize maskView=_maskView - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) char collapsed;                          //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,getter=isTouchInside,nonatomic) char touchInside;                      //@synthesize touchInside=_touchInside - In the implementation block
+(void)collapseAnimation:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMaskView:(UIImageView *)arg1 ;
-(UIImageView *)maskView;
-(char)isTouchInside;
-(UIVisualEffectView *)blurView;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(char)isCollapsed;
-(NSArray *)actionMenuItems;
-(void)setActionMenuItems:(id)arg1 defaultActionIndex:(unsigned)arg2 animated:(char)arg3 ;
-(id)initWithActionMenuItems:(id)arg1 defaultActionIndex:(unsigned)arg2 blurEffectStyle:(int)arg3 backgroundFilters:(id)arg4 ;
-(void)actionMenuGestureRecognized:(id)arg1 ;
-(void)setActionMenuController:(CKActionMenuController *)arg1 ;
-(unsigned)defaultActionIndex;
-(NSArray *)presentationActionMenuItems;
-(void)setPresentationTargetBounds:(CGRect)arg1 ;
-(void)setPresentationActionMenuItems:(NSArray *)arg1 ;
-(void)setPresentationDefaultActionIndex:(unsigned)arg1 ;
-(void)setCollapsed:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setActionMenuItems:(NSArray *)arg1 ;
-(void)setDefaultActionIndex:(unsigned)arg1 ;
-(CGRect)presentationTargetBounds;
-(CGPoint)presentationTargetPosition;
-(void)configureForPresentationAtPoint:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(void)setPresentationTargetPosition:(CGPoint)arg1 ;
-(void)setTouchInside:(char)arg1 ;
-(id)actionMenuItemAtPoint:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(CKActionMenuController *)actionMenuController;
-(void)presentActionMenuViewFromPoint:(CGPoint)arg1 inRect:(CGRect)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissActionMenuViewAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCollapsed:(char)arg1 ;
-(unsigned)presentationDefaultActionIndex;
@end

