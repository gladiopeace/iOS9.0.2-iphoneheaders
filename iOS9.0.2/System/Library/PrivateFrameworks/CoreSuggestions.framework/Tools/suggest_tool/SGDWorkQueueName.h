/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Tools/suggest_tool
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <suggest_tool/suggest_tool-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SGDWorkQueueName : NSObject <NSCopying> {

	unsigned _timestamp32;
	unsigned _counter32;
	unsigned short _otherbits;

}

@property (assign,nonatomic) unsigned long long timestamp; 
@property (assign,nonatomic) unsigned long long counter; 
@property (assign,nonatomic) unsigned fails; 
@property (assign,nonatomic) unsigned state; 
+(char)isValidFilename:(id)arg1 ;
-(void)setFails:(unsigned)arg1 ;
-(unsigned)fails;
-(id)queueItemId;
-(id)pathInDirectory:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(unsigned long long)counter;
-(void)setCounter:(unsigned long long)arg1 ;
@end

