/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface BLTPBSelectorItem : NSObject {

	SEL _selector;
	/*function pointer*/void* _method;

}

@property (assign,nonatomic) SEL selector;                                  //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* method;              //@synthesize method=_method - In the implementation block
-(void)setSelector:(SEL)arg1 ;
-(SEL)selector;
-(/*function pointer*/void*)method;
-(void)setMethod:(/*function pointer*/void*)arg1 ;
@end

