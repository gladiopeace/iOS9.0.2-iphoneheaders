/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUMenuViewController.h>

@class NSString, NSArray;

@interface SUSimpleMenuViewController : SUMenuViewController {

	NSString* _cancelButtonTitle;
	NSArray* _titles;

}

@property (nonatomic,copy) NSArray * titles;                          //@synthesize titles=_titles - In the implementation block
@property (nonatomic,copy) NSString * cancelButtonTitle;              //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
-(void)_cancelAction:(id)arg1 ;
-(void)dealloc;
-(void)setTitles:(NSArray *)arg1 ;
-(NSArray *)titles;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(NSString *)cancelButtonTitle;
-(id)initWithTitles:(id)arg1 ;
-(int)numberOfMenuItems;
-(void)reloadContentSizeForViewInPopover;
-(id)titleOfMenuItemAtIndex:(int)arg1 ;
-(char)isMenuItemEnabledAtIndex:(int)arg1 ;
@end

