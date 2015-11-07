/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResponseKit/ResponseKit-Structs.h>
#import <ResponseKit/RKDataProvider.h>

@class NSMutableDictionary;

@interface RKLinguisticDataProvider : RKDataProvider {

	NSMutableDictionary* _polarityMapsByLanguageID;

}

@property (retain) NSMutableDictionary * polarityMapsByLanguageID;              //@synthesize polarityMapsByLanguageID=_polarityMapsByLanguageID - In the implementation block
+(id)sharedProvider;
-(id)init;
-(id)_init;
-(LSMMapRef)polarityMapForLanguageID:(id)arg1 ;
-(NSMutableDictionary *)polarityMapsByLanguageID;
-(void)setPolarityMapsByLanguageID:(NSMutableDictionary *)arg1 ;
@end
