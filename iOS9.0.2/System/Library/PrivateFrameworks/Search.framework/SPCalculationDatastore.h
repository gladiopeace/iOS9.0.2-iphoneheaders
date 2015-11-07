/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/searchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <searchd/SDModernSearchDatastore.h>

@class NSString, NSDictionary;

@interface SPCalculationDatastore : NSObject <SDModernSearchDatastore>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDictionary * category_stats; 
+(void)initialize;
-(void)doCalculationWithQuery:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)doUnitConversionWithQuery:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)searchDomains;
-(id)performQuery:(id)arg1 ;
-(id)displayIdentifierForDomain:(unsigned)arg1 ;
-(char)offersDefaultSearch;
-(char)onlyDefaultSearch;
@end

