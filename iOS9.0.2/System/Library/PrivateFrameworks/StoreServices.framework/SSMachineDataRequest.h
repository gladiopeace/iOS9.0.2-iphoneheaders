/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSData, NSString;

@interface SSMachineDataRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountID;
	NSData* _actionData;
	NSString* _actionName;
	char _allowsBootstrapCellularData;
	int _protocolVersion;
	char _waitsForPurchaseOperations;

}

@property (copy) NSNumber * accountIdentifier; 
@property (copy) NSData * actionData; 
@property (copy) NSString * actionName; 
@property (assign) char allowsBootstrapCellularData; 
@property (assign) int protocolVersion; 
@property (assign) char waitsForPurchaseOperations; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(void)setActionName:(NSString *)arg1 ;
-(void)setProtocolVersion:(int)arg1 ;
-(int)protocolVersion;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(id)initWithURLResponse:(id)arg1 ;
-(NSString *)actionName;
-(char)allowsBootstrapCellularData;
-(void)setAllowsBootstrapCellularData:(char)arg1 ;
-(NSData *)actionData;
-(void)setActionData:(NSData *)arg1 ;
-(void)setWaitsForPurchaseOperations:(char)arg1 ;
-(char)waitsForPurchaseOperations;
@end
