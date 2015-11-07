/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/PlugIns/setoken.appex/setoken
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <setoken/setoken-Structs.h>
@class NSData;

@interface SEKey : NSObject {

	aks_ref_key_sRef _AKSRefKey;
	NSData* _params;
	NSData* _ACMContext;
	SecAccessControlRef _accessControl;

}

@property (nonatomic,readonly) SecAccessControlRef accessControl;              //@synthesize accessControl=_accessControl - In the implementation block
@property (nonatomic,readonly) id<NSSecureCoding> objectID; 
+(id)protectionForKeyClass:(int)arg1 ;
+(int)keyClassForProtection:(id)arg1 ;
-(id)error:(id*)arg1 withAKSReturn:(int)arg2 message:(id)arg3 ;
-(void)setACMContext:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 error:(id*)arg2 ;
-(id)initWithAccessControl:(SecAccessControlRef)arg1 ACMContext:(id)arg2 error:(id*)arg3 ;
-(id)publicKeyWithError:(id*)arg1 ;
-(id)signDigest:(id)arg1 error:(id*)arg2 ;
-(SecAccessControlRef)accessControl;
-(id<NSSecureCoding>)objectID;
-(void)dealloc;
-(char)deleteWithError:(id*)arg1 ;
@end

