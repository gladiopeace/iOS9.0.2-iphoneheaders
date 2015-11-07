/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/SPSection.h>
#import <libobjc.A.dylib/PRSDescriptionSection.h>

@class NSString, PRSImage, NSURL;

@interface SPDescriptionSection : SPSection <PRSDescriptionSection>

@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSURL * attribution_url; 
@property (assign,nonatomic) char hide_divider; 
@property (assign,nonatomic) char card_padding_bottom; 
@property (assign,nonatomic) char card_padding_top; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) char title_nowrap; 
@property (assign,nonatomic) int title_weight; 
@property (nonatomic,retain) NSString * resultDescription; 
@property (assign,nonatomic) int description_maxlines; 
@property (assign,nonatomic) char description_expand; 
@property (nonatomic,retain) NSString * description_expand_text; 
@property (assign,nonatomic) int description_size; 
@property (assign,nonatomic) int description_weight; 
@property (nonatomic,retain) PRSImage * image; 
@property (nonatomic,retain) NSString * image_align; 
@end

