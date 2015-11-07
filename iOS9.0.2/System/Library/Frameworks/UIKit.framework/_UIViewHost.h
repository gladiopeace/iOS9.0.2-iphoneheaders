/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIScreen;


@protocol _UIViewHost <NSObject>
@property (retain,readonly) UIScreen * hostingScreen; 
@required
-(char)hasHostedViews;
-(void)addHostedView:(id)arg1 withViewRemovalHandler:(/*^block*/id)arg2;
-(UIScreen *)hostingScreen;

@end

