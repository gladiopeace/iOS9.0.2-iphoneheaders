/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDGestureTarget <NSObject>
@optional
-(void)gestureSequenceWillBegin;
-(void)gestureSequenceDidEnd;
-(void)willBeginHandlingGesture:(id)arg1;

@required
-(char)canHandleGesture:(id)arg1;
-(char)handleGesture:(id)arg1;

@end

