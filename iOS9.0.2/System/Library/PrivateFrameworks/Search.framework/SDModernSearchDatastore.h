/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/searchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSDictionary;


@protocol SDModernSearchDatastore <NSObject>
@property (nonatomic,retain) NSDictionary * category_stats; 
@optional
-(void)imageDataForResultIdentifier:(unsigned long long)arg1 domain:(unsigned)arg2 size:(CGSize)arg3 completion:(/*^block*/id)arg4;
-(void)imageDataForIdentifier:(id)arg1 domain:(unsigned)arg2 size:(CGSize)arg3 completion:(/*^block*/id)arg4;
-(void)deactivate;
-(void)activate;
-(void)preheat;
-(void)shutDown;
-(NSDictionary *)category_stats;
-(void)setCategory_stats:(id)arg1;
-(void)shrink;
-(id)performQuery:(id)arg1;
-(void)sendFeedback:(id)arg1;
-(char)coolDown;
-(char)wantsEveryResultInItsOwnSection;
-(double)timeOutForDomain:(unsigned)arg1;
-(id)categoryForDomain:(unsigned)arg1;
-(id)resultForIdentifier:(id)arg1 domain:(unsigned)arg2;
-(char)offersDefaultSearch;
-(char)onlyDefaultSearch;

@required
-(id)searchDomains;
-(id)displayIdentifierForDomain:(unsigned)arg1;

@end

