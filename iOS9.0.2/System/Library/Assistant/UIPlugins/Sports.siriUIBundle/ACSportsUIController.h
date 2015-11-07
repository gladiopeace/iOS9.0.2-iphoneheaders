/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class ACSportsListView, SAUIAppPunchOut, SAUISnippet, NSString;

@interface ACSportsUIController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	ACSportsListView* _listView;
	SAUIAppPunchOut* _snippetPunchOut;
	SAUIAppPunchOut* _leagueAppPunchOut;
	SAUISnippet* _snippet;
	int _cellKeylineType;

}

@property (assign,nonatomic) int cellKeylineType;                   //@synthesize cellKeylineType=_cellKeylineType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)listViewWithSnippet:(id)arg1 frame:(CGRect)arg2 ;
-(void)didEndDisplayingReusableFooterView:(id)arg1 ;
-(void)setCellKeylineType:(int)arg1 ;
-(int)cellKeylineType;
-(void)_attributionButtonTouched:(id)arg1 ;
-(unsigned)_verticalAlignmentForCellKeylineType:(int)arg1 ;
-(void)sportsListViewWantsAppPunchOut:(id)arg1 ;
-(void)_leagueAppButtonTouched:(id)arg1 ;
-(void)dealloc;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)loadView;
-(Class)cellClass;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(float)desiredHeight;
-(void)setSnippet:(id)arg1 ;
-(id)snippet;
-(id)initWithSnippet:(id)arg1 ;
-(Class)footerViewClass;
-(float)desiredHeightForFooterView;
-(void)configureReusableFooterView:(id)arg1 ;
@end

