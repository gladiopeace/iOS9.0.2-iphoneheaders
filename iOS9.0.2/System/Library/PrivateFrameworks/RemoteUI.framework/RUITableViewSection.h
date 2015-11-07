/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RUIElement.h>
#import <libobjc.A.dylib/RUITableHeaderDelegate.h>
#import <libobjc.A.dylib/RUITableFooterDelegate.h>

@protocol RUITableViewSectionDelegate, RemoteUITableHeader, RemoteUITableFooter;
@class NSMutableArray, NSNumber, UIView, RUITableViewRow, NSString, NSDictionary, NSArray;

@interface RUITableViewSection : RUIElement <RUITableHeaderDelegate, RUITableFooterDelegate> {

	NSMutableArray* _rows;
	int _disclosureLimit;
	NSNumber* _drawsTopSeparator;
	char _configured;
	id<RUITableViewSectionDelegate> _delegate;
	UIView*<RemoteUITableHeader> _headerView;
	UIView*<RemoteUITableFooter> _footerView;
	float _headerHeight;
	float _footerHeight;
	RUITableViewRow* _showAllRow;
	NSString* _headerText;
	NSDictionary* _headerAttributes;
	NSString* _HTMLHeaderContent;
	NSString* _detailHeaderText;
	NSString* _subHeaderText;
	NSDictionary* _subHeaderAttributes;
	NSString* _footerText;
	NSString* _HTMLFooterContent;
	NSDictionary* _footerAttributes;

}

@property (assign,nonatomic,__weak) id<RUITableViewSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * rows; 
@property (nonatomic,retain) UIView*<RemoteUITableHeader> headerView;                      //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView*<RemoteUITableFooter> footerView;                      //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) float headerHeight;                                           //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) float footerHeight;                                           //@synthesize footerHeight=_footerHeight - In the implementation block
@property (assign,nonatomic) char drawTopSeparator; 
@property (nonatomic,retain) RUITableViewRow * showAllRow;                                 //@synthesize showAllRow=_showAllRow - In the implementation block
@property (nonatomic,copy) NSString * headerText;                                          //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,copy) NSDictionary * headerAttributes;                                //@synthesize headerAttributes=_headerAttributes - In the implementation block
@property (nonatomic,copy) NSString * HTMLHeaderContent;                                   //@synthesize HTMLHeaderContent=_HTMLHeaderContent - In the implementation block
@property (nonatomic,copy) NSString * detailHeaderText;                                    //@synthesize detailHeaderText=_detailHeaderText - In the implementation block
@property (nonatomic,copy) NSString * subHeaderText;                                       //@synthesize subHeaderText=_subHeaderText - In the implementation block
@property (nonatomic,copy) NSDictionary * subHeaderAttributes;                             //@synthesize subHeaderAttributes=_subHeaderAttributes - In the implementation block
@property (nonatomic,copy) NSString * footerText;                                          //@synthesize footerText=_footerText - In the implementation block
@property (nonatomic,copy) NSString * HTMLFooterContent;                                   //@synthesize HTMLFooterContent=_HTMLFooterContent - In the implementation block
@property (nonatomic,copy) NSDictionary * footerAttributes;                                //@synthesize footerAttributes=_footerAttributes - In the implementation block
@property (assign,nonatomic) char configured;                                              //@synthesize configured=_configured - In the implementation block
-(void)setFooterText:(NSString *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setImageAlignment:(int)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setDelegate:(id<RUITableViewSectionDelegate>)arg1 ;
-(id)init;
-(id<RUITableViewSectionDelegate>)delegate;
-(UIView*<RemoteUITableHeader>)headerView;
-(void)setHeaderView:(UIView*<RemoteUITableHeader>)arg1 ;
-(NSArray *)rows;
-(float)headerHeight;
-(float)footerHeight;
-(void)setHeaderHeight:(float)arg1 ;
-(void)setFooterHeight:(float)arg1 ;
-(UIView*<RemoteUITableFooter>)footerView;
-(void)setFooterView:(UIView*<RemoteUITableFooter>)arg1 ;
-(void)setAttributes:(id)arg1 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(void)setDrawTopSeparator:(char)arg1 ;
-(id)sourceURL;
-(id)subElementsWithName:(id)arg1 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2 ;
-(void)addRow:(id)arg1 ;
-(void)setHTMLHeaderContent:(NSString *)arg1 ;
-(void)setHeaderAttributes:(NSDictionary *)arg1 ;
-(void)setDetailHeaderText:(NSString *)arg1 ;
-(void)setSubHeaderText:(NSString *)arg1 ;
-(void)setSubHeaderAttributes:(NSDictionary *)arg1 ;
-(void)setHTMLFooterContent:(NSString *)arg1 ;
-(void)setFooterAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)footerAttributes;
-(NSDictionary *)headerAttributes;
-(char)configured;
-(void)setConfigured:(char)arg1 ;
-(NSString *)footerText;
-(char)hasCustomHeader;
-(char)hasCustomFooter;
-(RUITableViewRow *)showAllRow;
-(void)tappedShowAllRowWithTable:(id)arg1 ;
-(void)removeRowAtIndex:(unsigned)arg1 ;
-(char)hasValueForDrawsTopSeparator;
-(char)drawTopSeparator;
-(void)headerView:(id)arg1 activatedLinkWithURL:(id)arg2 ;
-(NSDictionary *)subHeaderAttributes;
-(NSString *)HTMLHeaderContent;
-(NSString *)detailHeaderText;
-(NSString *)subHeaderText;
-(Class)_customHeaderClass;
-(id)colorFromAttributeString:(id)arg1 ;
-(NSString *)HTMLFooterContent;
-(Class)_customFooterClass;
-(void)insertRow:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setShowAllRow:(RUITableViewRow *)arg1 ;
@end

