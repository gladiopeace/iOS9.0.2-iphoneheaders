/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/SPTitleSection.h>
#import <libobjc.A.dylib/PRSRichTitleSection.h>

@class NSString, PRSImage, NSURL;

@interface SPRichTitleSection : SPTitleSection <PRSRichTitleSection>

@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSURL * attribution_url; 
@property (assign,nonatomic) char hide_divider; 
@property (assign,nonatomic) char card_padding_bottom; 
@property (assign,nonatomic) char card_padding_top; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) PRSImage * image; 
@property (nonatomic,retain) NSString * title_align; 
@property (nonatomic,retain) NSString * content_rating_text; 
@property (assign,nonatomic) char thumbnail_crop_circle; 
@end
