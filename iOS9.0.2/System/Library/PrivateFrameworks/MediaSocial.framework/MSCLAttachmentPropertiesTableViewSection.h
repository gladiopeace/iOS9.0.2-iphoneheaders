/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/MSCLTokenTextViewDelegate.h>
#import <libobjc.A.dylib/MSCLSettingsTableViewCellDelegate.h>

@protocol MSCLAttachmentPropertiesTableViewSectionDelegate;
@class SKUIClientContext, NSArray, MSCLVideoCoverImageSelectionView, UIImage, NSString;

@interface MSCLAttachmentPropertiesTableViewSection : NSObject <UITextFieldDelegate, MSCLTokenTextViewDelegate, MSCLSettingsTableViewCellDelegate> {

	SKUIClientContext* _clientContext;
	char _isExplicit;
	float _sectionHeaderHeight;
	int _sectionType;
	NSArray* _tableViewCells;
	MSCLVideoCoverImageSelectionView* _videoCoverImageView;
	id<MSCLAttachmentPropertiesTableViewSectionDelegate> _sectionDelegate;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;                                                      //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<MSCLAttachmentPropertiesTableViewSectionDelegate> sectionDelegate;              //@synthesize sectionDelegate=_sectionDelegate - In the implementation block
@property (nonatomic,readonly) int sectionType;                                                                        //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,readonly) float sectionHeaderHeight;                                                              //@synthesize sectionHeaderHeight=_sectionHeaderHeight - In the implementation block
@property (nonatomic,readonly) UIImage * selectedCoverImage; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)sectionType;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)resignFirstResponder;
-(float)sectionHeaderHeight;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)tableViewCell:(id)arg1 valueChanged:(char)arg2 ;
-(id)initWithSectionType:(int)arg1 clientContext:(id)arg2 ;
-(void)setSectionDelegate:(id<MSCLAttachmentPropertiesTableViewSectionDelegate>)arg1 ;
-(void)setTableCellsWithAttachment:(id)arg1 configuration:(id)arg2 ;
-(id)tokenTextViewForRowAtIndexPath:(id)arg1 ;
-(int)numberOfRowsInTableView:(id)arg1 ;
-(UIImage *)selectedCoverImage;
-(void)commitValuesToAttachment:(id)arg1 ;
-(void)setCoverImage:(id)arg1 ;
-(void)textView:(id)arg1 didChange:(int)arg2 ;
-(id)_newTextFieldCellWithTitle:(id)arg1 placeholder:(id)arg2 value:(id)arg3 ;
-(id<MSCLAttachmentPropertiesTableViewSectionDelegate>)sectionDelegate;
-(id)_newTextViewCellWithTitle:(id)arg1 placeholder:(id)arg2 artists:(id)arg3 changeDelegate:(id)arg4 ;
-(id)_newTableViewCellWithContentView:(id)arg1 ;
-(id)_newTextViewCellWithTitle:(id)arg1 placeholder:(id)arg2 artists:(id)arg3 ;
-(SKUIClientContext *)clientContext;
@end

