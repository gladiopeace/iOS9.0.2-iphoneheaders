/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>

@protocol THNotesDetailTableViewHeaderViewDelegate;
@class UIView, UIImageView, UIButton, UILabel;

@interface THNotesDetailTableViewHeaderView : UITableViewHeaderFooterView {

	char _editing;
	char _selected;
	unsigned _section;
	id<THNotesDetailTableViewHeaderViewDelegate> _delegate;
	UIView* _cellView;
	UIView* _editControlView;
	UIImageView* _editControlImage;
	UIView* _separator;
	UIButton* _selectionButton;
	UILabel* _chapterLabel;
	UILabel* _sectionLabel;
	CGSize _editControlImageSize;

}

@property (assign,nonatomic) char editing;                                                       //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) char selected;                                                      //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) unsigned section;                                                   //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) UIView * cellContentView; 
@property (assign,nonatomic) id<THNotesDetailTableViewHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * cellView;                                                  //@synthesize cellView=_cellView - In the implementation block
@property (nonatomic,retain) UIView * editControlView;                                           //@synthesize editControlView=_editControlView - In the implementation block
@property (nonatomic,retain) UIImageView * editControlImage;                                     //@synthesize editControlImage=_editControlImage - In the implementation block
@property (nonatomic,retain) UIView * separator;                                                 //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UIButton * selectionButton;                                         //@synthesize selectionButton=_selectionButton - In the implementation block
@property (assign,nonatomic) CGSize editControlImageSize;                                        //@synthesize editControlImageSize=_editControlImageSize - In the implementation block
@property (nonatomic,retain) UILabel * chapterLabel;                                             //@synthesize chapterLabel=_chapterLabel - In the implementation block
@property (nonatomic,retain) UILabel * sectionLabel;                                             //@synthesize sectionLabel=_sectionLabel - In the implementation block
-(void)headerCellPressed:(id)arg1 ;
-(UILabel *)chapterLabel;
-(void)setChapterLabel:(UILabel *)arg1 ;
-(UILabel *)sectionLabel;
-(void)setSectionLabel:(UILabel *)arg1 ;
-(void)p_positionViewsForEditing:(char)arg1 ;
-(void)addChapterLabel:(id)arg1 ;
-(void)addSectionLabel:(id)arg1 ;
-(UIView *)cellContentView;
-(UIView *)editControlView;
-(void)setEditControlView:(UIView *)arg1 ;
-(UIImageView *)editControlImage;
-(void)setEditControlImage:(UIImageView *)arg1 ;
-(UIButton *)selectionButton;
-(void)setSelectionButton:(UIButton *)arg1 ;
-(CGSize)editControlImageSize;
-(void)setEditControlImageSize:(CGSize)arg1 ;
-(void)setSeparator:(UIView *)arg1 ;
-(void)setDelegate:(id<THNotesDetailTableViewHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id<THNotesDetailTableViewHeaderViewDelegate>)delegate;
-(unsigned)section;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(char)editing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
-(void)setEditing:(char)arg1 ;
-(char)selected;
-(void)setSection:(unsigned)arg1 ;
-(UIView *)separator;
-(void)setCellView:(UIView *)arg1 ;
-(UIView *)cellView;
@end

