/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UIView, UIViewController;

@interface MusicVerticalScrollingContainerItem : NSObject <NSCoding> {

	UIView* _view;
	UIViewController* _viewController;

}

@property (nonatomic,readonly) UIView * view;                                  //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
+(id)verticalScrollingContainerWithView:(id)arg1 ;
+(id)verticalScrollingContainerWithViewController:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(UIView *)view;
-(UIViewController *)viewController;
-(id)initWithView:(id)arg1 ;
-(id)initWithViewController:(id)arg1 ;
@end

