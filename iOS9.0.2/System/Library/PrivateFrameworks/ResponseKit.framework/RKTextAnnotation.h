/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ResponseKit/ResponseKit-Structs.h>
@interface RKTextAnnotation : NSObject {

	char _machineGenerated;
	unsigned _type;
	NSRange _range;

}

@property (assign) NSRange range;                      //@synthesize range=_range - In the implementation block
@property (assign) unsigned type;                      //@synthesize type=_type - In the implementation block
@property (assign) char machineGenerated;              //@synthesize machineGenerated=_machineGenerated - In the implementation block
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(id)initWithRange:(NSRange)arg1 andType:(unsigned)arg2 machineGenerated:(char)arg3 ;
-(char)machineGenerated;
-(void)setMachineGenerated:(char)arg1 ;
@end

