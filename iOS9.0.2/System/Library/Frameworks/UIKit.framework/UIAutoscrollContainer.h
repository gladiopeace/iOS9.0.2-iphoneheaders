/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIAutoscrollContainer
@property (assign,nonatomic) CGPoint autoscrollContentOffset; 
@property (assign,nonatomic) char shouldAutoscroll; 
@optional
-(char)shouldAutoscroll;
-(void)setShouldAutoscroll:(char)arg1;

@required
-(CGPoint)autoscrollContentOffset;
-(void)setAutoscrollContentOffset:(CGPoint)arg1;
-(CGRect*)contentFrameForView:(id)arg1;

@end

