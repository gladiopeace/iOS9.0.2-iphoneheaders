/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface OKMediaClusterPredicate : NSObject {

	NSString* _uniqueID;
	unsigned _category;

}

@property (nonatomic,copy) NSString * uniqueID;              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,nonatomic) unsigned category;              //@synthesize category=_category - In the implementation block
+(id)nameForCategory:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(void)setCategory:(unsigned)arg1 ;
-(unsigned)category;
-(id)title;
-(NSString *)uniqueID;
-(id)evaluateItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(float)efficiencyForItems:(id)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
@end

