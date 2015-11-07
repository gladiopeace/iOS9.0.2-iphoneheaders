/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UICollectionReusableView.h>
#import <SiriUI/SiriUIReusableView.h>
#import <SiriUI/SiriUISizableHeaderView.h>

@class UILabel, SiriUIKeyline, UIImageView, SiriUISnippetViewController, NSString, UIButton;

@interface SiriUIReusableHeaderView : UICollectionReusableView <SiriUIReusableView, SiriUISizableHeaderView> {

	UILabel* _headerLabel;
	UIEdgeInsets _contentInsets;
	SiriUIKeyline* _keyline;
	UIImageView* _chevronView;
	SiriUISnippetViewController* _snippetViewController;
	NSString* _titleText;
	UIButton* _headerAreaButton;
	int _keylineType;

}

@property (nonatomic,copy) NSString * titleText;                                                      //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,readonly) UIButton * headerAreaButton;                                           //@synthesize headerAreaButton=_headerAreaButton - In the implementation block
@property (assign,nonatomic) int keylineType;                                                         //@synthesize keylineType=_keylineType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController;              //@synthesize snippetViewController=_snippetViewController - In the implementation block
+(float)defaultHeight;
+(id)reuseIdentifier;
+(id)elementKind;
-(float)desiredHeightForWidth:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(SiriUISnippetViewController *)snippetViewController;
-(void)setSnippetViewController:(SiriUISnippetViewController *)arg1 ;
-(void)setKeylineType:(int)arg1 ;
-(int)keylineType;
-(void)_configureHeaderLabelForBounds:(CGRect)arg1 ;
-(UIButton *)headerAreaButton;
@end

