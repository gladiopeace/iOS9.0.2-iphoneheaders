/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBSearchBackdropView, UIView;

@interface _SBSearchControllerView : UIView {

	SBSearchBackdropView* _searchBackdropView;
	UIView* _searchContainerView;
	UIView* _searchContentView;

}

@property (assign,nonatomic) SBSearchBackdropView * searchBackdropView;              //@synthesize searchBackdropView=_searchBackdropView - In the implementation block
@property (assign,nonatomic) UIView * searchContainerView;                           //@synthesize searchContainerView=_searchContainerView - In the implementation block
@property (assign,nonatomic) UIView * searchContentView;                             //@synthesize searchContentView=_searchContentView - In the implementation block
-(SBSearchBackdropView *)searchBackdropView;
-(void)setSearchBackdropView:(SBSearchBackdropView *)arg1 ;
-(void)setSearchContainerView:(UIView *)arg1 ;
-(void)setSearchContentView:(UIView *)arg1 ;
-(UIView *)searchContentView;
-(UIView *)searchContainerView;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

