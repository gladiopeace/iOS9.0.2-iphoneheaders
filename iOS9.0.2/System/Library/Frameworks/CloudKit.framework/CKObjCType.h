/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CKObjCType : NSObject {

	int _code;
	NSString* _encoding;
	NSString* _name;
	NSString* _className;
	unsigned _size;
	unsigned _flags;

}

@property (nonatomic,readonly) int code;                                                           //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) NSString * encoding;                                                //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,readonly) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * className;                                               //@synthesize className=_className - In the implementation block
@property (nonatomic,readonly) unsigned size;                                                      //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned flags;                                                     //@synthesize flags=_flags - In the implementation block
@property (getter=isNumber,nonatomic,readonly) char number; 
@property (getter=isIntegerNumber,nonatomic,readonly) char integerNumber; 
@property (getter=isFloatingPointNumber,nonatomic,readonly) char floatingPointNumber; 
@property (getter=isObject,nonatomic,readonly) char object; 
+(id)typeForEncoding:(const char*)arg1 ;
+(id)typeForValue:(id)arg1 ;
-(char)isObject;
-(id)objectWithBytes:(const void*)arg1 ;
-(void)getBytes:(void*)arg1 forObject:(id)arg2 ;
-(char)isIntegerNumber;
-(char)isFloatingPointNumber;
-(id)initWithCode:(int)arg1 encoding:(id)arg2 name:(id)arg3 className:(id)arg4 size:(unsigned)arg5 flags:(unsigned)arg6 ;
-(unsigned)size;
-(NSString *)name;
-(int)code;
-(NSString *)className;
-(NSString *)encoding;
-(unsigned)flags;
-(char)isNumber;
@end

