/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSString.h>

@interface __NSATSStringSegment : NSString {

	CFStringRef _originalString;
	long _originalStringLength;
	SCD_Struct_NS7 _range;
	const unsigned short* _characters;
	unsigned short _buffer[128];

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(const unsigned short*)_fastCharacterContents;
-(void)dealloc;
-(oneway void)release;
-(unsigned)length;
-(char)_isDeallocating;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(char)_tryRetain;
-(void)_setOriginalString:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithOriginalString:(id)arg1 range:(NSRange)arg2 ;
@end

