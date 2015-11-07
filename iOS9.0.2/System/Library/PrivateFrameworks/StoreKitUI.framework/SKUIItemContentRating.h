/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface SKUIItemContentRating : NSObject {

	NSArray* _contentRatingAdvisories;
	NSString* _contentRatingName;
	NSString* _contentRatingSystemName;
	NSString* _contentRank;

}

@property (nonatomic,readonly) NSArray * contentRatingAdvisories;               //@synthesize contentRatingAdvisories=_contentRatingAdvisories - In the implementation block
@property (nonatomic,readonly) NSString * contentRatingName;                    //@synthesize contentRatingName=_contentRatingName - In the implementation block
@property (nonatomic,readonly) NSString * contentRank;                          //@synthesize contentRank=_contentRank - In the implementation block
@property (nonatomic,readonly) NSString * contentRatingSystemName;              //@synthesize contentRatingSystemName=_contentRatingSystemName - In the implementation block
-(id)description;
-(NSString *)contentRatingSystemName;
-(NSString *)contentRank;
-(NSString *)contentRatingName;
-(NSArray *)contentRatingAdvisories;
-(id)initWithContentRatingDictionary:(id)arg1 systemName:(id)arg2 ;
@end

