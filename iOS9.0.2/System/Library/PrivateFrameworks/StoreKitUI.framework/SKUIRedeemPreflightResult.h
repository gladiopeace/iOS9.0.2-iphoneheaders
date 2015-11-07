/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSAccount, SKUIClientContext, SSVRedeemCodeMetadata, NSError, SKUIRedeemConfiguration;

@interface SKUIRedeemPreflightResult : NSObject {

	SSAccount* _account;
	SKUIClientContext* _clientContext;
	SSVRedeemCodeMetadata* _codeMetadata;
	NSError* _error;
	SKUIRedeemConfiguration* _redeemConfiguration;
	int _resultType;

}

@property (nonatomic,retain) SSAccount * account;                                        //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                          //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) SSVRedeemCodeMetadata * codeMetadata;                       //@synthesize codeMetadata=_codeMetadata - In the implementation block
@property (nonatomic,copy) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) SKUIRedeemConfiguration * redeemConfiguration;              //@synthesize redeemConfiguration=_redeemConfiguration - In the implementation block
@property (assign,nonatomic) int resultType;                                             //@synthesize resultType=_resultType - In the implementation block
-(void)setResultType:(int)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setRedeemConfiguration:(SKUIRedeemConfiguration *)arg1 ;
-(int)resultType;
-(SKUIRedeemConfiguration *)redeemConfiguration;
-(SSVRedeemCodeMetadata *)codeMetadata;
-(void)setAccount:(SSAccount *)arg1 ;
-(void)setCodeMetadata:(SSVRedeemCodeMetadata *)arg1 ;
-(SSAccount *)account;
@end

