/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIStatusBarStyleRequest;

@interface SBAppStatusBarTransitionInfo : NSObject {

	UIStatusBarStyleRequest* _startStyleRequest;
	int _startOrientation;
	UIStatusBarStyleRequest* _endStyleRequest;
	int _endOrientation;
	int _transition;
	char _zoomOther;

}

@property (nonatomic,copy) UIStatusBarStyleRequest * startStyleRequest;              //@synthesize startStyleRequest=_startStyleRequest - In the implementation block
@property (assign,nonatomic) int startOrientation;                                   //@synthesize startOrientation=_startOrientation - In the implementation block
@property (nonatomic,copy) UIStatusBarStyleRequest * endStyleRequest;                //@synthesize endStyleRequest=_endStyleRequest - In the implementation block
@property (assign,nonatomic) int endOrientation;                                     //@synthesize endOrientation=_endOrientation - In the implementation block
@property (assign,nonatomic) int transition;                                         //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) char zoomOther;                                         //@synthesize zoomOther=_zoomOther - In the implementation block
-(UIStatusBarStyleRequest *)endStyleRequest;
-(void)setStartStyleRequest:(UIStatusBarStyleRequest *)arg1 ;
-(void)setStartOrientation:(int)arg1 ;
-(void)setEndOrientation:(int)arg1 ;
-(void)setEndStyleRequest:(UIStatusBarStyleRequest *)arg1 ;
-(void)setZoomOther:(char)arg1 ;
-(int)startOrientation;
-(int)endOrientation;
-(char)zoomOther;
-(UIStatusBarStyleRequest *)startStyleRequest;
-(void)dealloc;
-(id)description;
-(void)setTransition:(int)arg1 ;
-(int)transition;
@end

