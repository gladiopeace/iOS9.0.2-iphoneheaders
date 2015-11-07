/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/ABPersonTabsLayoutManager.h>

@class UISegmentedControl, UIView, ABPersonTableView, ABPersonTableViewDataSource, ABPersonOverlayingContainerView, UIImageView, NSString;

@interface ABPersonContainerView : UIView <ABPersonTabsLayoutManager> {

	UISegmentedControl* _contentSwitchingTabs;
	char _hidesContentSwitchingTabs;
	UIView* _nonScrollableHeaderView;
	ABPersonTableView* _tableView;
	ABPersonTableViewDataSource* _dataSource;
	ABPersonOverlayingContainerView* _overlayingContainerView;
	UIImageView* _contentSwitchingTabsPocketShadow;
	UIImageView* _contentSwitchingTabsBorder;

}

@property (nonatomic,retain) ABPersonOverlayingContainerView * overlayingContainerView;              //@synthesize overlayingContainerView=_overlayingContainerView - In the implementation block
@property (nonatomic,retain) UISegmentedControl * contentSwitchingTabs;                              //@synthesize contentSwitchingTabs=_contentSwitchingTabs - In the implementation block
@property (nonatomic,retain) UIImageView * contentSwitchingTabsPocketShadow;                         //@synthesize contentSwitchingTabsPocketShadow=_contentSwitchingTabsPocketShadow - In the implementation block
@property (nonatomic,retain) UIImageView * contentSwitchingTabsBorder;                               //@synthesize contentSwitchingTabsBorder=_contentSwitchingTabsBorder - In the implementation block
@property (assign,nonatomic) char hidesContentSwitchingTabs;                                         //@synthesize hidesContentSwitchingTabs=_hidesContentSwitchingTabs - In the implementation block
@property (nonatomic,retain) ABPersonTableView * tableView;                                          //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * nonScrollableHeaderView;                                       //@synthesize nonScrollableHeaderView=_nonScrollableHeaderView - In the implementation block
@property (assign,nonatomic) ABPersonTableViewDataSource * dataSource;                               //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) UIScrollView*<ABPersonTabsScrollView> currentScrollView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didChangeContentOffset:(CGPoint)arg1 inScrollView:(id)arg2 ;
-(void)moveContentSwitchingTabsAboveView:(id)arg1 inScrollView:(id)arg2 ;
-(void)repositionContentSwitchingTabs;
-(float)heightForHeaderAndContentSwitchingTabs;
-(UIScrollView*<ABPersonTabsScrollView>)currentScrollView;
-(id)viewContainingHeaderView;
-(UISegmentedControl *)contentSwitchingTabs;
-(char)hidesContentSwitchingTabs;
-(float)heightNeededForContentSwitchingTabs;
-(ABPersonOverlayingContainerView *)overlayingContainerView;
-(void)setContentSwitchingTabs:(UISegmentedControl *)arg1 ;
-(void)setContentSwitchingTabsPocketShadow:(UIImageView *)arg1 ;
-(void)setContentSwitchingTabsBorder:(UIImageView *)arg1 ;
-(void)setHidesContentSwitchingTabs:(char)arg1 ;
-(void)setOverlayingContainerView:(ABPersonOverlayingContainerView *)arg1 ;
-(void)setNonScrollableHeaderView:(UIView *)arg1 ;
-(id)prepareToRestoreTabsPosition;
-(void)restoreTabsPosition:(id)arg1 ;
-(UIView *)nonScrollableHeaderView;
-(UIImageView *)contentSwitchingTabsPocketShadow;
-(UIImageView *)contentSwitchingTabsBorder;
-(void)setDataSource:(ABPersonTableViewDataSource *)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(ABPersonTableViewDataSource *)dataSource;
-(ABPersonTableView *)tableView;
-(void)setTableView:(ABPersonTableView *)arg1 ;
@end

