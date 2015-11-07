/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SidebarContentDimmingViewDelegate;
@class UITapGestureRecognizer, UIView, NSString;

@interface SidebarContentDimmingView : UIView <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _dismissRecognizer;
	UIView* _dimmingView;
	UIView* _passthroughView;
	id<SidebarContentDimmingViewDelegate> _delegate;

}

@property (nonatomic,retain) UIView * passthroughView;                                           //@synthesize passthroughView=_passthroughView - In the implementation block
@property (assign,nonatomic,__weak) id<SidebarContentDimmingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 dimmedContentFrame:(CGRect)arg2 ;
-(void)setPassthroughView:(UIView *)arg1 ;
-(void)setDimmedContentFrame:(CGRect)arg1 ;
-(void)_dismissRecognized:(id)arg1 ;
-(UIView *)passthroughView;
-(void)setDelegate:(id<SidebarContentDimmingViewDelegate>)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<SidebarContentDimmingViewDelegate>)delegate;
-(void)setTransparent:(char)arg1 ;
@end

