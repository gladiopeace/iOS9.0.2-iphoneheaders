/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface RPStoreInfo : NSObject {

	NSString* _bundleID;
	NSString* _appName;
	NSString* _author;
	NSString* _itemURL;
	NSArray* _categories;

}

@property (nonatomic,retain) NSString * bundleID;               //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * appName;                //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) NSString * author;                 //@synthesize author=_author - In the implementation block
@property (nonatomic,retain) NSString * itemURL;                //@synthesize itemURL=_itemURL - In the implementation block
@property (nonatomic,retain) NSArray * categories;              //@synthesize categories=_categories - In the implementation block
-(NSString *)bundleID;
-(NSString *)itemURL;
-(void)setItemURL:(NSString *)arg1 ;
-(NSArray *)categories;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)author;
-(void)setCategories:(NSArray *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)appName;
@end
