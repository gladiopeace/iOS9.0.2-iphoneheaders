/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _SBFakeBlur <NSObject>
@property (assign,nonatomic) id<_SBFakeBlurObserver> observer; 
@property (assign,nonatomic) char fullscreen; 
@required
-(int)effectiveStyle;
-(char)fullscreen;
-(void)setFullscreen:(char)arg1;
-(id<_SBFakeBlurObserver>)observer;
-(void)setObserver:(id)arg1;
-(void)requestStyle:(int)arg1;

@end

