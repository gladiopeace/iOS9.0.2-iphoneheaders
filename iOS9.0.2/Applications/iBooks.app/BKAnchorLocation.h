/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKLocation.h>

@class NSString;

@interface BKAnchorLocation : BKLocation {

	NSString* _anchor;

}

@property (nonatomic,readonly) NSString * anchor;              //@synthesize anchor=_anchor - In the implementation block
+(id)deserializeLocationFromDictionary:(id)arg1 ;
-(id)initWithOrdinal:(int)arg1 andAnchor:(id)arg2 ;
-(id)serializeLocationToDictionary;
-(id)initWithLocationDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)anchor;
@end

