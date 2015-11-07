/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/YQLRequest.h>

@class NSArray;

@interface SymbolValidator : YQLRequest {

	NSArray* _symbols;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)parseData:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)didParseData;
-(id)aggregateDictionaryDomain;
-(void)validateSymbol:(id)arg1 withMaxResults:(int)arg2 ;
@end

