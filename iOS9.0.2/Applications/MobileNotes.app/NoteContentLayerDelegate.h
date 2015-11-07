/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NoteContentLayerDelegate <NSObject>
@optional
-(void)noteContentLayerKeyboardDidHide:(id)arg1;

@required
-(char)noteContentLayerShouldBeginEditing:(id)arg1;
-(void)noteContentLayerContentDidChange:(id)arg1 updatedTitle:(char)arg2;
-(char)noteContentLayer:(id)arg1 acceptStringIncreasingContentLength:(id)arg2;
-(void)noteContentLayer:(id)arg1 setEditing:(char)arg2 animated:(char)arg3;
-(void)noteContentLayer:(id)arg1 containsCJK:(char)arg2;
-(void)noteContentLayer:(id)arg1 contentScrollViewWillBeginDragging:(id)arg2;
-(char)canInsertImagesInNoteContentLayer:(id)arg1;
-(char)noteContentLayer:(id)arg1 acceptContentsFromPasteboard:(id)arg2;
-(char)allowsAttachmentsInNoteContentLayer:(id)arg1;
-(void)insertImageInNoteContentLayer:(id)arg1;
-(char)noteContentLayer:(id)arg1 canHandleLongPressOnElement:(id)arg2;
-(void)noteContentLayer:(id)arg1 handleLongPressOnElement:(id)arg2 atPoint:(CGPoint)arg3;
-(void)noteContentLayer:(id)arg1 didChangeContentSize:(CGSize)arg2;
-(char)isNoteContentLayerVisible:(id)arg1;

@end

