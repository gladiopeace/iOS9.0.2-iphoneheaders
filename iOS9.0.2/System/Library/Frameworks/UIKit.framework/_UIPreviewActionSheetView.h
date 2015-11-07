/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol _UIPreviewActionSheetViewDelegate;
@class NSArray, NSString, _UIPreviewActionSheetItemView, UIScrollView, UIPanGestureRecognizer, UILongPressGestureRecognizer;

@interface _UIPreviewActionSheetView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate> {

	id<_UIPreviewActionSheetViewDelegate> _delegate;
	/*^block*/id _completionHandler;
	NSArray* _actions;
	NSString* _title;
	_UIPreviewActionSheetItemView* _selectedActionView;
	UIScrollView* _scrollView;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic,__weak) id<_UIPreviewActionSheetViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSArray * actions;                                                      //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) NSString * title;                                                       //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) _UIPreviewActionSheetItemView * selectedActionView;              //@synthesize selectedActionView=_selectedActionView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                          //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                             //@synthesize contentInsets=_contentInsets - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)setDelegate:(id<_UIPreviewActionSheetViewDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<_UIPreviewActionSheetViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(NSArray *)actions;
-(NSString *)title;
-(void)_setupViewHierarchy;
-(void)_setupGestureRecognizers;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 items:(id)arg3 contentInsets:(UIEdgeInsets)arg4 ;
-(UIEdgeInsets)contentInsets;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)_panDidFire:(id)arg1 ;
-(void)_longPressDidFire:(id)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(_UIPreviewActionSheetItemView *)selectedActionView;
-(void)setSelectedActionView:(_UIPreviewActionSheetItemView *)arg1 ;
-(id)completionHandler;
-(void)_changeSelectedActionViewWithView:(id)arg1 ;
-(void)_fireActionForSelectedView;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
@end

