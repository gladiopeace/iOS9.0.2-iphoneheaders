/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIWebFormRotatingAccessoryPopover.h>
#import <UIKit/UIWebFormControl.h>

@class UIWebSelectTableViewController;

@interface UIWebSelectPopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl> {

	UIWebSelectTableViewController* _tableViewController;

}

@property (nonatomic,retain) UIWebSelectTableViewController * _tableViewController;              //@synthesize tableViewController=_tableViewController - In the implementation block
-(void)dealloc;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned)arg4 multipleSelection:(char)arg5 ;
-(void)_userActionDismissedPopover:(id)arg1 ;
-(void)set_tableViewController:(UIWebSelectTableViewController *)arg1 ;
-(UIWebSelectTableViewController *)_tableViewController;
@end

