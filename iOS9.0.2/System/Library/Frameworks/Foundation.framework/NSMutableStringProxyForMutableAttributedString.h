/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@class NSMutableAttributedString;

@interface NSMutableStringProxyForMutableAttributedString : NSMutableString {

	NSMutableAttributedString* mutableAttributedString;

}
-(id)initWithMutableAttributedString:(id)arg1 ;
-(void)dealloc;
-(unsigned)length;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(void)finalize;
@end

