/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SiriUI/SiriUI-Structs.h>
@class NSString, UIImageView;

@interface SiriUIDisambiguationItem : NSObject {

	char _showsFavoriteStar;
	NSString* _title;
	NSString* _subtitle;
	NSString* _headingText;
	NSString* _extraDisambiguationText;
	NSString* _extraDisambiguationSubText;
	UIImageView* _imageView;
	NSRange _titleBoldedRange;

}

@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * headingText;                             //@synthesize headingText=_headingText - In the implementation block
@property (nonatomic,copy) NSString * extraDisambiguationText;                 //@synthesize extraDisambiguationText=_extraDisambiguationText - In the implementation block
@property (nonatomic,copy) NSString * extraDisambiguationSubText;              //@synthesize extraDisambiguationSubText=_extraDisambiguationSubText - In the implementation block
@property (assign,nonatomic) NSRange titleBoldedRange;                         //@synthesize titleBoldedRange=_titleBoldedRange - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) char showsFavoriteStar;                           //@synthesize showsFavoriteStar=_showsFavoriteStar - In the implementation block
+(id)disambiguationItem;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(UIImageView *)imageView;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(NSString *)headingText;
-(void)setHeadingText:(NSString *)arg1 ;
-(NSString *)extraDisambiguationText;
-(void)setExtraDisambiguationText:(NSString *)arg1 ;
-(NSString *)extraDisambiguationSubText;
-(void)setExtraDisambiguationSubText:(NSString *)arg1 ;
-(NSRange)titleBoldedRange;
-(void)setTitleBoldedRange:(NSRange)arg1 ;
-(char)showsFavoriteStar;
-(void)setShowsFavoriteStar:(char)arg1 ;
@end

