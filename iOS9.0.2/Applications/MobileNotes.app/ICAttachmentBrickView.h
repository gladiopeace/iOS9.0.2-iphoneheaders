/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIView.h>

@class ICAttachment, ICSearchResult, ICAttachmentBrickTitleView, NSString, NSLayoutConstraint, NSAttributedString, UIView;

@interface ICAttachmentBrickView : UIView {

	char _selected;
	char _iconHidden;
	ICAttachment* _attachment;
	ICSearchResult* _searchResult;
	unsigned _brickLayout;
	ICAttachmentBrickTitleView* _titleView;
	NSString* _fileSizeStringCache;
	NSLayoutConstraint* _textTrailingToSuperviewConstraint;
	NSLayoutConstraint* _textTrailingToIconConstraint;
	NSLayoutConstraint* _iconTrailingToSuperviewConstraint;
	long long _fileSizeCache;

}

@property (assign,nonatomic,__weak) ICAttachment * attachment;                                    //@synthesize attachment=_attachment - In the implementation block
@property (assign,nonatomic,__weak) ICSearchResult * searchResult;                                //@synthesize searchResult=_searchResult - In the implementation block
@property (assign,nonatomic) unsigned brickLayout;                                                //@synthesize brickLayout=_brickLayout - In the implementation block
@property (nonatomic,copy) NSString * titleString; 
@property (nonatomic,copy) NSString * subtitleString; 
@property (nonatomic,copy) NSAttributedString * titleAttributedString; 
@property (nonatomic,copy) NSAttributedString * subtitleAttributedString; 
@property (assign,nonatomic) float trailingMargin; 
@property (nonatomic,readonly) NSString * textForTitle; 
@property (nonatomic,readonly) NSString * textForSubtitle; 
@property (nonatomic,readonly) UIView * iconView; 
@property (assign,getter=isSelected,nonatomic) char selected;                                     //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) ICAttachmentBrickTitleView * titleView;                              //@synthesize titleView=_titleView - In the implementation block
@property (assign,getter=isIconHidden,nonatomic) char iconHidden;                                 //@synthesize iconHidden=_iconHidden - In the implementation block
@property (assign,nonatomic) long long fileSizeCache;                                             //@synthesize fileSizeCache=_fileSizeCache - In the implementation block
@property (nonatomic,copy) NSString * fileSizeStringCache;                                        //@synthesize fileSizeStringCache=_fileSizeStringCache - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textTrailingToSuperviewConstraint;              //@synthesize textTrailingToSuperviewConstraint=_textTrailingToSuperviewConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textTrailingToIconConstraint;                   //@synthesize textTrailingToIconConstraint=_textTrailingToIconConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * iconTrailingToSuperviewConstraint;              //@synthesize iconTrailingToSuperviewConstraint=_iconTrailingToSuperviewConstraint - In the implementation block
-(void)setFileSizeCache:(long long)arg1 ;
-(void)setupRoundedOutline:(char)arg1 ;
-(void)setTextTrailingToIconConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textTrailingToIconConstraint;
-(void)setTextTrailingToSuperviewConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBrickLayout:(unsigned)arg1 ;
-(NSLayoutConstraint *)textTrailingToSuperviewConstraint;
-(void)updateContentFromAttachment;
-(void)updateTextFromAttachment;
-(void)updateSearchHighlighting;
-(void)setSubtitleAttributedString:(NSAttributedString *)arg1 ;
-(long long)fileSizeCache;
-(void)setFileSizeStringCache:(NSString *)arg1 ;
-(NSString *)fileSizeStringCache;
-(NSAttributedString *)subtitleAttributedString;
-(void)setBrickMarginLeading:(float)arg1 trailing:(float)arg2 top:(float)arg3 bottom:(float)arg4 ;
-(unsigned)brickLayout;
-(UIColor*)selectedOutlineColor;
-(void)setIconTrailingToSuperviewConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)iconTrailingToSuperviewConstraint;
-(void)initContents;
-(void)setIconHidden:(char)arg1 ;
-(void)setAttachment:(id)arg1 withSearchResult:(id)arg2 ;
-(NSString *)textForTitle;
-(NSString *)textForSubtitle;
-(char)isIconHidden;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(ICAttachmentBrickTitleView *)titleView;
-(void)setTitleView:(ICAttachmentBrickTitleView *)arg1 ;
-(char)isSelected;
-(void)setSelected:(char)arg1 ;
-(NSString *)subtitleString;
-(NSAttributedString *)titleAttributedString;
-(void)setSubtitleString:(NSString *)arg1 ;
-(void)setTitleAttributedString:(NSAttributedString *)arg1 ;
-(UIView *)iconView;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(ICAttachment *)attachment;
-(float)trailingMargin;
-(void)setTrailingMargin:(float)arg1 ;
-(void)setSearchResult:(ICSearchResult *)arg1 ;
-(ICSearchResult *)searchResult;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(void)attachmentDidLoad:(id)arg1 ;
-(void)attachmentPreviewImagesDidUpdate:(id)arg1 ;
-(void)mediaDidLoad:(id)arg1 ;
-(void)contentSizeCategoryDidChange;
-(UIColor*)outlineColor;
@end

