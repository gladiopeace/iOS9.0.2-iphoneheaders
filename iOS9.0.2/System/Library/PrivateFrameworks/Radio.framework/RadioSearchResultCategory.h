/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSDictionary, NSArray;

@interface RadioSearchResultCategory : NSObject <NSCopying, NSMutableCopying> {

	int _categoryType;
	char _hasMoreResults;
	NSString* _name;
	NSDictionary* _responseDictionary;
	NSArray* _stationResults;

}

@property (nonatomic,readonly) int categoryType;                                    //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,readonly) char hasMoreResults;                                 //@synthesize hasMoreResults=_hasMoreResults - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stationResults;                       //@synthesize stationResults=_stationResults - In the implementation block
-(id)_initWithResponseDictionary:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(int)categoryType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(char)hasMoreResults;
-(NSArray *)stationResults;
-(NSDictionary *)responseDictionary;
@end

