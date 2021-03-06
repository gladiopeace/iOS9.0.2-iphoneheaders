/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSString, SAUIImageResource;

@interface SAVCSContentDetailPage : SAAceView

@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (assign,nonatomic) char userDriven; 
@property (nonatomic,copy) NSString * utsId; 
+(id)contentDetailPage;
+(id)contentDetailPageWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setContentType:(NSString *)arg1 ;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(SAUIImageResource *)image;
-(NSString *)contentType;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)utsId;
-(void)setUtsId:(NSString *)arg1 ;
-(char)userDriven;
-(void)setUserDriven:(char)arg1 ;
@end

