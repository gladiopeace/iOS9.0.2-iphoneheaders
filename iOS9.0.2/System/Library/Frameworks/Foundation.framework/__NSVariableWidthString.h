/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@class NSDictionary, NSString;

@interface __NSVariableWidthString : NSString {

	NSDictionary* _variants;
	NSString* _defaultString;

}

@property (readonly) unsigned length; 
-(id)initWithString:(id)arg1 widthVariants:(id)arg2 ;
-(id)initWithWidthVariants:(id)arg1 ;
-(id)formatConfiguration;
-(id)initWithWidthContexts:(id)arg1 ;
-(void)dealloc;
-(unsigned)length;
-(id)variantFittingPresentationWidth:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
@end

