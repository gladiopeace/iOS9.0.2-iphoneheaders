/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUNavigationItem.h>

@class NSNumber, SUNavigationItem;

@interface SUDelayedNavigationItem : SUNavigationItem {

	id _delayedBackButtonTitle;
	id _delayedLeftBarButtonItems;
	NSNumber* _delayedLeftItemsSupplementBackButton;
	id _delayedTitle;
	id _delayedTitleView;
	id _delayedRightBarButtonItems;
	char _shouldDelayChanges;
	SUNavigationItem* _wrappedNavigationItem;

}

@property (nonatomic,retain) SUNavigationItem * wrappedNavigationItem;              //@synthesize wrappedNavigationItem=_wrappedNavigationItem - In the implementation block
@property (assign,nonatomic) char shouldDelayChanges;                               //@synthesize shouldDelayChanges=_shouldDelayChanges - In the implementation block
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)navigationBar;
-(id)leftBarButtonItems;
-(char)leftItemsSupplementBackButton;
-(id)title;
-(id)backButtonTitle;
-(id)rightBarButtonItems;
-(id)titleView;
-(id)initWithNavigationItem:(id)arg1 ;
-(void)setLeftBarButtonItem:(id)arg1 animated:(char)arg2 ;
-(void)setRightBarButtonItem:(id)arg1 animated:(char)arg2 ;
-(void)setLeftBarButtonItems:(id)arg1 animated:(char)arg2 ;
-(void)setRightBarButtonItems:(id)arg1 animated:(char)arg2 ;
-(void)setTitleView:(id)arg1 ;
-(id)leftBarButtonItem;
-(id)rightBarButtonItem;
-(void)setBackButtonTitle:(id)arg1 ;
-(void)setLeftItemsSupplementBackButton:(char)arg1 ;
-(void)setTitleView:(id)arg1 animated:(char)arg2 ;
-(void)setShouldDelayChanges:(char)arg1 ;
-(void)setWrappedNavigationItem:(SUNavigationItem *)arg1 ;
-(void)commitDelayedChanges;
-(void)_prepareButtonItemForDisplay:(id)arg1 ;
-(char)shouldDelayChanges;
-(void)_scheduleCommit;
-(SUNavigationItem *)wrappedNavigationItem;
@end

