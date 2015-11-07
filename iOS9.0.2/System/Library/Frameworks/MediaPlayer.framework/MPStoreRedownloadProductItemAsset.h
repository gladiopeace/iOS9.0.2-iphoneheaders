/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray, NSURL;

@interface MPStoreRedownloadProductItemAsset : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSString * downloadKey; 
@property (nonatomic,copy,readonly) NSString * flavor; 
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sinfs; 
@property (nonatomic,copy,readonly) NSURL * URL; 
-(NSString *)flavor;
-(NSArray *)sinfs;
-(NSString *)downloadKey;
-(NSURL *)URL;
-(NSDictionary *)responseDictionary;
-(id)initWithResponseDictionary:(id)arg1 ;
@end

