/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/UniversalSearch.siriUIBundle/UniversalSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, UIImage;


@protocol SearchUIRichTitleCardSection <SearchUITitleCardSection>
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * contentRatingText; 
@property (nonatomic,readonly) UIImage * titleImage; 
@property (nonatomic,readonly) char centered; 
@property (nonatomic,readonly) char shouldCropImageToCircle; 
@optional
-(char)shouldCropImageToCircle;

@required
-(char)centered;
-(NSString *)subtitle;
-(NSString *)contentRatingText;
-(UIImage *)titleImage;

@end

