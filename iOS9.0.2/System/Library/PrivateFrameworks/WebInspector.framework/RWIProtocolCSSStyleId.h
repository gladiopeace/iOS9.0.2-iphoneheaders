/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSStyleId : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * styleSheetId; 
@property (assign,nonatomic) int ordinal; 
-(int)ordinal;
-(id)initWithStyleSheetId:(id)arg1 ordinal:(int)arg2 ;
-(void)setStyleSheetId:(NSString *)arg1 ;
-(void)setOrdinal:(int)arg1 ;
-(NSString *)styleSheetId;
@end

