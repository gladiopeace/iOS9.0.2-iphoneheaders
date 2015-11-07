/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol InboxTableViewGroupController <NSObject>
@optional
-(void)dismissAll;

@required
-(void)refreshIfNeeded;
-(id)eventForRow:(int)arg1;
-(id)initWithModel:(id)arg1 delegate:(id)arg2;
-(char)hasRows;
-(void)rowSelected:(int)arg1;
-(char)canSelectRow:(int)arg1;
-(float)estimatedHeightForRow:(int)arg1;
-(id)titleForHeader;
-(id)cellForRow:(int)arg1;
-(int)numberOfRows;
-(void)setVisible:(char)arg1;

@end

