/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKPreviewControllerDelegate <NSObject>
@optional
-(void)previewDidFinishLoad:(id)arg1;
-(void)previewDidDisappear:(id)arg1;
-(char)preview:(id)arg1 shouldStartLoadWithRequest:(id)arg2;

@required
-(CGRect*)frameForLocation:(id)arg1 inView:(id)arg2 previewController:(id)arg3;
-(char)isLocationVisible:(id)arg1 previewController:(id)arg2;

@end

