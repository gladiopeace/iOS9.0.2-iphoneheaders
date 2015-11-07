/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AdSheet/ADStoreItemOfferJSO_Bindings.h>

@class NSString;

@interface ADStoreItemOfferJSO : NSObject <ADStoreItemOfferJSO_Bindings> {

	char _preorder;
	NSString* _identifier;
	NSString* _price;
	NSString* _action;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * price;                   //@synthesize price=_price - In the implementation block
@property (nonatomic,readonly) NSString * action;                  //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) char preorder;                      //@synthesize preorder=_preorder - In the implementation block
-(id)initWithSSItemOffer:(id)arg1 ;
-(char)preorder;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)action;
-(NSString *)price;
@end

