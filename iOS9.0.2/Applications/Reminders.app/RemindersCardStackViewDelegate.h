/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RemindersCardStackViewDelegate
@required
-(char)cardStackView:(id)arg1 cardShouldSlideBackIntoStackWhenDismissed:(id)arg2;
-(void)cardStackViewDidPresentCard:(id)arg1;
-(void)cardStackView:(id)arg1 willAddGestureRecognizer:(id)arg2 toCardAtIndex:(int)arg3;
-(void)cardStackView:(id)arg1 didDismissCard:(id)arg2;
-(int)cardStackView:(id)arg1 targetIndexForMoveFromIndex:(int)arg2 toProposedIndex:(int)arg3;
-(void)cardStackView:(id)arg1 cardDidMoveFromIndex:(int)arg2 toIndex:(int)arg3;
-(void)cardStackViewDidEndReordering:(id)arg1;
-(char)cardStackView:(id)arg1 canReorderCardAtIndex:(int)arg2;

@end

