/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBRowInfo.h>

@class SBBBSectionInfo, SBItemInfoLayoutCache, UIImage, UIViewController, UIColor, NSDate, BBBulletin;

@interface SBBBBulletinInfo : SBRowInfo {

	SBBBSectionInfo* _sectionInfo;
	SBItemInfoLayoutCache* _layoutCache;
	UIImage* _attachmentImage;
	CGSize _attachmentImageSize;
	float _secondaryTextHeight;
	char _suppressingMessageForPrivacy;
	char _isCachedMessageSuppressionValid;
	UIViewController* _secondaryContentViewController;
	UIColor* _secondaryTextColor;
	NSDate* _effectiveRecencyDate;
	int _relevanceDateFormatStyle;

}

@property (nonatomic,readonly) BBBulletin * representedBulletin; 
@property (nonatomic,retain) SBBBSectionInfo * sectionInfo;                                                          //@synthesize sectionInfo=_sectionInfo - In the implementation block
@property (nonatomic,readonly) UIColor * secondaryTextColor;                                                         //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
@property (nonatomic,retain) UIImage * attachmentImage;                                                              //@synthesize attachmentImage=_attachmentImage - In the implementation block
@property (assign,nonatomic) CGSize attachmentImageSize;                                                             //@synthesize attachmentImageSize=_attachmentImageSize - In the implementation block
@property (getter=isSuppressingMessageForPrivacy,nonatomic,readonly) char suppressingMessageForPrivacy;              //@synthesize suppressingMessageForPrivacy=_suppressingMessageForPrivacy - In the implementation block
@property (nonatomic,retain,readonly) UIViewController * secondaryContentViewController;                             //@synthesize secondaryContentViewController=_secondaryContentViewController - In the implementation block
@property (nonatomic,copy) NSDate * effectiveRecencyDate;                                                            //@synthesize effectiveRecencyDate=_effectiveRecencyDate - In the implementation block
@property (assign,nonatomic) int relevanceDateFormatStyle;                                                           //@synthesize relevanceDateFormatStyle=_relevanceDateFormatStyle - In the implementation block
-(void)invalidateCachedLayoutData;
-(float)heightForReusableViewForNotificationCenterTableViewController:(id)arg1 layoutMode:(int)arg2 sectionLocation:(int)arg3 ;
-(void)populateReusableView:(id)arg1 ;
-(id)_endDate;
-(void)prepareWithCompletion:(/*^block*/id)arg1 ;
-(void)setAttachmentImage:(UIImage *)arg1 ;
-(UIViewController *)secondaryContentViewController;
-(id)_relevanceDateLabel;
-(id)_eventDateLabel;
-(UIImage *)attachmentImage;
-(char)isSuppressingMessageForPrivacy;
-(id)_subtitleText;
-(SCD_Struct_SB28)_relevanceDateLabelDescription;
-(id)_relevanceDateTextColor;
-(int)relevanceDateFormatStyle;
-(int)_bbDateFormatStyle;
-(id)_eventDateLabelForDisplay;
-(CGSize)_effectiveAttachmentImageSize;
-(id)_secondaryTextToDisplay;
-(id)_secondaryContentView;
-(id)_subtitleTextToDisplay;
-(id)_primaryText;
-(id)_primaryTextColor;
-(id)_secondaryTextColor;
-(void)_configureRelevanceDateLabel:(id)arg1 ;
-(void)_configureEventDateLabel:(id)arg1 ;
-(id)_attachmentImageToDisplay;
-(NSDate *)effectiveRecencyDate;
-(CGSize)attachmentImageSize;
-(void)setAttachmentImageSize:(CGSize)arg1 ;
-(void)setEffectiveRecencyDate:(NSDate *)arg1 ;
-(void)setRelevanceDateFormatStyle:(int)arg1 ;
-(id)_secondaryText;
-(SBBBSectionInfo *)sectionInfo;
-(id)_subtitleTextColor;
-(BBBulletin *)representedBulletin;
-(void)dealloc;
-(id)description;
-(id)identifier;
-(void)setSectionInfo:(SBBBSectionInfo *)arg1 ;
-(Class)reusableViewClass;
-(UIColor *)secondaryTextColor;
@end

