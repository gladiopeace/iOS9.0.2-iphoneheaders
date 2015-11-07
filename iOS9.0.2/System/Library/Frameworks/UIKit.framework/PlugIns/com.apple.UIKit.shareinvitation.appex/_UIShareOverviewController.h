/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/PlugIns/com.apple.UIKit.shareinvitation.appex/com.apple.UIKit.shareinvitation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol _UIShareOverviewControllerDelegate;
@class NSString, CKShare, UILabel, UIButton, UIImageView, UIView, UITableView, _UIShareTableStaticDataSource, NSError, NSURL;

@interface _UIShareOverviewController : UIViewController {

	char _initialSetupDone;
	char _showingSpinner;
	NSString* _itemName;
	id<_UIShareOverviewControllerDelegate> _delegate;
	CKShare* _share;
	NSString* _auxiliaryActionTitle;
	NSString* _mailTemplate;
	NSString* _mailSubject;
	NSString* _messageTemplate;
	UILabel* _titleLabel;
	UILabel* _titleLabelOverflow;
	UILabel* _detailLabel;
	UIButton* _linkButton;
	UIImageView* _imageView;
	UIView* _headerContainerView;
	UIView* _imageContainerView;
	UITableView* _selectionTable;
	_UIShareTableStaticDataSource* _staticTableDataSource;
	NSError* _error;
	NSURL* _shareURL;
	NSString* _shareURLText;

}

@property (nonatomic,copy) NSString * itemName;                                                   //@synthesize itemName=_itemName - In the implementation block
@property (assign,nonatomic,__weak) id<_UIShareOverviewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKShare * share;                                                     //@synthesize share=_share - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryActionTitle;                                       //@synthesize auxiliaryActionTitle=_auxiliaryActionTitle - In the implementation block
@property (nonatomic,copy) NSString * mailTemplate;                                               //@synthesize mailTemplate=_mailTemplate - In the implementation block
@property (nonatomic,copy) NSString * mailSubject;                                                //@synthesize mailSubject=_mailSubject - In the implementation block
@property (nonatomic,copy) NSString * messageTemplate;                                            //@synthesize messageTemplate=_messageTemplate - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabelOverflow;                                        //@synthesize titleLabelOverflow=_titleLabelOverflow - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                                               //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) UIButton * linkButton;                                               //@synthesize linkButton=_linkButton - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                             //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * headerContainerView;                                        //@synthesize headerContainerView=_headerContainerView - In the implementation block
@property (nonatomic,retain) UIView * imageContainerView;                                         //@synthesize imageContainerView=_imageContainerView - In the implementation block
@property (nonatomic,retain) UITableView * selectionTable;                                        //@synthesize selectionTable=_selectionTable - In the implementation block
@property (nonatomic,readonly) char initialSharing; 
@property (assign,nonatomic) int accessType; 
@property (nonatomic,readonly) char anyoneCanView; 
@property (nonatomic,retain) _UIShareTableStaticDataSource * staticTableDataSource;               //@synthesize staticTableDataSource=_staticTableDataSource - In the implementation block
@property (assign,nonatomic) NSError * error;                                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSURL * shareURL;                                                      //@synthesize shareURL=_shareURL - In the implementation block
@property (nonatomic,copy) NSString * shareURLText;                                               //@synthesize shareURLText=_shareURLText - In the implementation block
-(char)initialSharing;
-(void)setAuxiliaryActionTitle:(NSString *)arg1 ;
-(void)setMailSubject:(NSString *)arg1 ;
-(void)setMailTemplate:(NSString *)arg1 ;
-(void)setMessageTemplate:(NSString *)arg1 ;
-(void)setTitleLabelOverflow:(UILabel *)arg1 ;
-(void)setSelectionTable:(UITableView *)arg1 ;
-(UILabel *)titleLabelOverflow;
-(UITableView *)selectionTable;
-(void)setShareURLText:(NSString *)arg1 ;
-(void)setLinkButton:(UIButton *)arg1 ;
-(void)headerActionButton:(id)arg1 ;
-(void)setStaticTableDataSource:(_UIShareTableStaticDataSource *)arg1 ;
-(_UIShareTableStaticDataSource *)staticTableDataSource;
-(void)updateCloseButton;
-(void)dismissPressed;
-(void)_updateShareBarButtonItem;
-(void)updateForSharingState;
-(void)sendShareInvitation:(id)arg1 ;
-(void)updateTitleText;
-(char)useCompactStrings;
-(void)performAuxiliaryAction:(id)arg1 ;
-(NSString *)shareURLText;
-(void)stopSharing:(id)arg1 ;
-(NSString *)mailTemplate;
-(NSString *)mailSubject;
-(NSString *)messageTemplate;
-(char)anyoneCanView;
-(void)toggleAnyoneCanView:(id)arg1 ;
-(NSString *)auxiliaryActionTitle;
-(void)setHeaderContainerView:(UIView *)arg1 ;
-(UIView *)headerContainerView;
-(UIButton *)linkButton;
-(NSError *)error;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(void)setDelegate:(id<_UIShareOverviewControllerDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<_UIShareOverviewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(UILabel *)titleLabel;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(UIImageView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setNavigationItemSpinner:(char)arg1 ;
-(id)sections;
-(void)updateThumbnail;
-(void)setShare:(CKShare *)arg1 ;
-(CKShare *)share;
-(NSURL *)shareURL;
-(void)setShareURL:(NSURL *)arg1 ;
-(int)accessType;
-(UIView *)imageContainerView;
-(void)setImageContainerView:(UIView *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)presentError:(id)arg1 ;
-(void)setAccessType:(int)arg1 ;
-(void)setItemName:(NSString *)arg1 ;
-(NSString *)itemName;
@end

