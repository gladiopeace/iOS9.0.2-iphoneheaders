/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSDictionary;

@interface FBAQuestionValueToDisplayNameTransformer : NSValueTransformer {

	NSDictionary* _dictionary;

}

@property (copy) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(Class)transformedValueClass;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)transformedValue:(id)arg1 ;
@end

