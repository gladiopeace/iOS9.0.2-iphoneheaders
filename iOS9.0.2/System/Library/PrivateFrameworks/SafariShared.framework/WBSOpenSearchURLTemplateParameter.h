/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSString;

@interface WBSOpenSearchURLTemplateParameter : NSObject {

	char _optional;
	NSString* _name;
	NSString* _prefix;
	NSRange _range;

}

@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * prefix;                              //@synthesize prefix=_prefix - In the implementation block
@property (assign,nonatomic) NSRange range;                                //@synthesize range=_range - In the implementation block
@property (assign,getter=isOptional,nonatomic) char optional;              //@synthesize optional=_optional - In the implementation block
-(char)isOptional;
-(void)setOptional:(char)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
@end

