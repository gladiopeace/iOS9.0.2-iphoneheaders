/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/UniversalSearch.siriUIBundle/UniversalSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol SearchUIRichTextItem <NSObject>
@property (nonatomic,copy,readonly) NSString * text; 
@property (nonatomic,copy,readonly) NSArray * formattedTextItems; 
@property (nonatomic,copy,readonly) NSString * formattedTextDelimiter; 
@property (nonatomic,readonly) unsigned textMaxLines; 
@property (nonatomic,readonly) float starRating; 
@property (nonatomic,readonly) NSArray * icons; 
@property (nonatomic,copy,readonly) NSString * contentAdvisory; 
@optional
-(unsigned)textMaxLines;
-(NSString *)formattedTextDelimiter;
-(NSArray *)formattedTextItems;
-(NSString *)contentAdvisory;
-(float)starRating;
-(NSString *)text;
-(NSArray *)icons;

@end

