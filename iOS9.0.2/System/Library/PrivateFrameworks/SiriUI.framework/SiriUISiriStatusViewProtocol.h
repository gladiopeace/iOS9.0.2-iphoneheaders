/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIView;


@protocol SiriUISiriStatusViewProtocol <NSObject>
@property (assign,nonatomic) int mode; 
@property (assign,nonatomic) float flamesViewWidth; 
@property (assign,nonatomic) float disabledMicOpacity; 
@property (assign,nonatomic,__weak) id<SiriUISiriStatusViewDelegate> delegate; 
@property (nonatomic,readonly) UIView * flamesContainerView; 
@property (assign,nonatomic) char flamesViewDeferred; 
@required
-(void)setDelegate:(id)arg1;
-(id<SiriUISiriStatusViewDelegate>)delegate;
-(void)setMode:(int)arg1;
-(int)mode;
-(void)setFlamesViewDeferred:(char)arg1;
-(void)setDisabledMicOpacity:(float)arg1;
-(void)setFlamesViewWidth:(float)arg1;
-(UIView *)flamesContainerView;
-(void)forceMicVisible:(char)arg1;
-(char)flamesViewDeferred;
-(float)flamesViewWidth;
-(float)disabledMicOpacity;

@end

