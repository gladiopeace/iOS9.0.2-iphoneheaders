/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBWindow, UIView, NSString, UIWindow;

@interface SBWindowSelfHostWrapper : NSObject {

	SBWindow* _window;
	UIView* _contextHostView;
	NSString* _contextHostRequester;

}

@property (nonatomic,retain) UIWindow * window;                            //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) UIView * contextHostView;                     //@synthesize contextHostView=_contextHostView - In the implementation block
@property (nonatomic,retain) NSString * contextHostRequester;              //@synthesize contextHostRequester=_contextHostRequester - In the implementation block
-(UIView *)contextHostView;
-(NSString *)contextHostRequester;
-(void)setContextHostView:(UIView *)arg1 ;
-(void)setContextHostRequester:(NSString *)arg1 ;
-(void)stopHosting;
-(void)dealloc;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
@end

