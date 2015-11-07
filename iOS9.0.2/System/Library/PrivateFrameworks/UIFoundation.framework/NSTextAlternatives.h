/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSString, NSArray;

@interface NSTextAlternatives : NSObject {

	NSString* _primaryString;
	NSArray* _alternativeStrings;
	id _internal;

}

@property (readonly) NSString * primaryString; 
@property (readonly) NSArray * alternativeStrings; 
-(unsigned)numberOfAlternatives;
-(id)alternativeAtIndex:(unsigned)arg1 ;
-(NSString *)primaryString;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)originalText;
-(NSArray *)alternativeStrings;
-(id)alternatives;
-(id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 ;
-(id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 identifier:(id)arg3 ;
-(id)initWithOriginalText:(id)arg1 alternatives:(id)arg2 ;
-(id)initWithOriginalText:(id)arg1 alternatives:(id)arg2 identifier:(id)arg3 ;
-(void)noteSelectedAlternativeString:(id)arg1 ;
@end

