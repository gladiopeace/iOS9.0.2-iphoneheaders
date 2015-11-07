/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAStateElement.h>

@class NSString;

@interface CAStateSetValue : CAStateElement {

	NSString* _keyPath;
	id _value;

}

@property (nonatomic,copy) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,retain) id value; 
-(char)matches:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)apply:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)foreachLayer:(/*^block*/id)arg1 ;
@end

