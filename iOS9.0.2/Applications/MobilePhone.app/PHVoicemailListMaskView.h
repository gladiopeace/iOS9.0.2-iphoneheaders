/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UIView.h>

@protocol PHVoicemailListMaskViewDelegate;
@class UIControl, UIView, NSArray, UITableView, PHVoicemailCell;

@interface PHVoicemailListMaskView : UIView {

	char* _dismissFlag;
	UIControl* _topGrayView;
	UIView* _topLineView;
	UIControl* _bottomGrayView;
	UIView* _bottomLineView;
	NSArray* _cellViewConstraints;
	NSArray* _lineConstraints;
	UITableView* _tableView;
	char _showingGrayLayer;
	PHVoicemailCell* _cellToShow;
	id<PHVoicemailListMaskViewDelegate> _listMaskViewDelegate;

}

@property (nonatomic,retain) PHVoicemailCell * cellToShow;                                //@synthesize cellToShow=_cellToShow - In the implementation block
@property (assign,nonatomic) char showingGrayLayer;                                       //@synthesize showingGrayLayer=_showingGrayLayer - In the implementation block
@property (assign) id<PHVoicemailListMaskViewDelegate> listMaskViewDelegate;              //@synthesize listMaskViewDelegate=_listMaskViewDelegate - In the implementation block
-(void)setListMaskViewDelegate:(id<PHVoicemailListMaskViewDelegate>)arg1 ;
-(void)setShowingGrayLayer:(char)arg1 ;
-(void)setCellToShow:(PHVoicemailCell *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 tableView:(id)arg2 ;
-(void)recalculateMaskPosition;
-(PHVoicemailCell *)cellToShow;
-(char)showingGrayLayer;
-(void)_grayViewTouchUpInside:(id)arg1 withEvent:(id)arg2 ;
-(id<PHVoicemailListMaskViewDelegate>)listMaskViewDelegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)updateConstraints;
@end
