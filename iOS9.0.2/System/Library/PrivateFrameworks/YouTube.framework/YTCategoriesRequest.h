/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@class NSMutableArray;

@interface YTCategoriesRequest : YTXMLHTTPRequest {

	id _delegate;
	NSMutableArray* _categories;
	char _responseIndicatesAuthenticationFailure;

}
-(int)parseData:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)clearDelegate;
-(void)loadRequest:(id)arg1 ;
-(char)receivedValidResponse:(id)arg1 ;
-(void)didParseData;
-(void)didAuthenticate:(id)arg1 ;
-(id)_categoriesURL;
-(void)requestCategoriesWithDelegate:(id)arg1 ;
@end

