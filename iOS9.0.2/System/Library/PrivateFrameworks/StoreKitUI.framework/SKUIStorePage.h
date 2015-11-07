/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SKUIArtwork, NSData, NSHTTPURLResponse, SSMetricsConfiguration, NSString, NSArray, NSURL, SKUIProductPage, SKUIUber, NSMutableDictionary;

@interface SKUIStorePage : NSObject <NSCopying> {

	SKUIArtwork* _backgroundArtwork;
	NSData* _itmlData;
	NSHTTPURLResponse* _itmlResponse;
	SSMetricsConfiguration* _metricsConfiguration;
	NSString* _metricsPageDescription;
	NSArray* _pageComponents;
	NSString* _pageType;
	NSURL* _pageURL;
	SKUIProductPage* _productPage;
	NSString* _title;
	SKUIUber* _uber;
	NSMutableDictionary* _values;

}

@property (nonatomic,retain) SKUIArtwork * backgroundArtwork;                            //@synthesize backgroundArtwork=_backgroundArtwork - In the implementation block
@property (nonatomic,retain) NSData * ITMLData;                                          //@synthesize itmlData=_itmlData - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * ITMLResponse;                           //@synthesize itmlResponse=_itmlResponse - In the implementation block
@property (nonatomic,retain) SSMetricsConfiguration * metricsConfiguration;              //@synthesize metricsConfiguration=_metricsConfiguration - In the implementation block
@property (nonatomic,copy) NSString * metricsPageDescription;                            //@synthesize metricsPageDescription=_metricsPageDescription - In the implementation block
@property (nonatomic,copy) NSArray * pageComponents;                                     //@synthesize pageComponents=_pageComponents - In the implementation block
@property (nonatomic,copy) NSString * pageType;                                          //@synthesize pageType=_pageType - In the implementation block
@property (nonatomic,copy) NSURL * pageURL;                                              //@synthesize pageURL=_pageURL - In the implementation block
@property (nonatomic,copy) SKUIProductPage * productPage;                                //@synthesize productPage=_productPage - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) SKUIUber * uber;                                            //@synthesize uber=_uber - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPageURL:(NSURL *)arg1 ;
-(NSURL *)pageURL;
-(void)setBackgroundArtwork:(SKUIArtwork *)arg1 ;
-(void)setITMLData:(NSData *)arg1 ;
-(void)setITMLResponse:(NSHTTPURLResponse *)arg1 ;
-(void)setMetricsConfiguration:(SSMetricsConfiguration *)arg1 ;
-(void)setMetricsPageDescription:(NSString *)arg1 ;
-(void)setPageType:(NSString *)arg1 ;
-(void)setProductPage:(SKUIProductPage *)arg1 ;
-(void)setUber:(SKUIUber *)arg1 ;
-(void)setPageComponents:(NSArray *)arg1 ;
-(void)setValue:(id)arg1 forPageKey:(id)arg2 ;
-(id)valueForPageKey:(id)arg1 ;
-(SKUIArtwork *)backgroundArtwork;
-(NSData *)ITMLData;
-(NSHTTPURLResponse *)ITMLResponse;
-(SSMetricsConfiguration *)metricsConfiguration;
-(NSString *)metricsPageDescription;
-(NSArray *)pageComponents;
-(NSString *)pageType;
-(SKUIProductPage *)productPage;
-(SKUIUber *)uber;
@end

