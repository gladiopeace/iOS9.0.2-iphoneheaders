/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/UniversalSearch.siriUIBundle/UniversalSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SearchUIRichTextItem.h>

@class NSString, NSArray;

@interface SiriUSRichTextItem : NSObject <SearchUIRichTextItem> {

	unsigned _textMaxLines;
	float _starRating;
	NSArray* _icons;
	NSString* _contentAdvisory;
	NSArray* _formattedTextItems;
	NSString* _formattedTextDelimiter;

}

@property (assign,nonatomic) unsigned textMaxLines;                        //@synthesize textMaxLines=_textMaxLines - In the implementation block
@property (assign,nonatomic) float starRating;                             //@synthesize starRating=_starRating - In the implementation block
@property (nonatomic,retain) NSArray * icons;                              //@synthesize icons=_icons - In the implementation block
@property (nonatomic,copy) NSString * contentAdvisory;                     //@synthesize contentAdvisory=_contentAdvisory - In the implementation block
@property (nonatomic,copy) NSArray * formattedTextItems;                   //@synthesize formattedTextItems=_formattedTextItems - In the implementation block
@property (nonatomic,copy) NSString * formattedTextDelimiter;              //@synthesize formattedTextDelimiter=_formattedTextDelimiter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * text; 
-(unsigned)textMaxLines;
-(NSString *)formattedTextDelimiter;
-(NSArray *)formattedTextItems;
-(NSString *)contentAdvisory;
-(float)starRating;
-(void)setIcons:(NSArray *)arg1 ;
-(NSArray *)icons;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(void)setFormattedTextDelimiter:(NSString *)arg1 ;
-(void)setStarRating:(float)arg1 ;
-(void)setFormattedTextItems:(NSArray *)arg1 ;
-(void)setTextMaxLines:(unsigned)arg1 ;
@end

