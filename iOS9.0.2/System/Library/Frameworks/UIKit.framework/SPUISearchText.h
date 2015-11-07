/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSAttributedString;


@protocol SPUISearchText <NSObject>
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (assign) unsigned numberOfLines; 
@required
-(void)setNumberOfLines:(unsigned)arg1;
-(void)setAttributedText:(id)arg1;
-(NSString *)text;
-(void)setText:(id)arg1;
-(NSAttributedString *)attributedText;
-(unsigned)numberOfLines;

@end

