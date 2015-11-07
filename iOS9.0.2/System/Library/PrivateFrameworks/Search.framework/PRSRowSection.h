/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, PRSImage, NSArray;


@protocol PRSRowSection <PRSSection>
@property (nonatomic,retain) NSString * key; 
@property (assign,nonatomic) char key_nowrap; 
@property (assign,nonatomic) int key_weight; 
@property (nonatomic,retain) NSString * value; 
@property (assign,nonatomic) char value_nowrap; 
@property (assign,nonatomic) int value_weight; 
@property (nonatomic,retain) PRSImage * value_image; 
@property (nonatomic,retain) NSString * value_image_align; 
@property (nonatomic,retain) NSString * punchout_picker_label; 
@property (nonatomic,retain) NSString * punchout_picker_dismiss_label; 
@property (nonatomic,retain) NSArray * punchouts; 
@optional
-(NSString *)value;
-(void)setValue:(id)arg1;
-(char)key_nowrap;
-(void)setKey_nowrap:(char)arg1;
-(int)key_weight;
-(void)setKey_weight:(int)arg1;
-(void)setValue_nowrap:(char)arg1;
-(int)value_weight;
-(void)setValue_weight:(int)arg1;
-(void)setValue_image:(id)arg1;
-(void)setValue_image_align:(id)arg1;
-(void)setPunchout_picker_label:(id)arg1;
-(void)setPunchout_picker_dismiss_label:(id)arg1;
-(void)setPunchouts:(id)arg1;
-(PRSImage *)value_image;
-(NSString *)value_image_align;
-(NSString *)punchout_picker_label;
-(NSString *)punchout_picker_dismiss_label;
-(NSArray *)punchouts;
-(char)value_nowrap;

@required
-(NSString *)key;
-(void)setKey:(id)arg1;

@end

