/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISOperation, NSString;

@interface SUBackgroundTaskOperation : ISOperation {

	ISOperation* _operation;
	NSString* _permissionIdentifier;
	unsigned _taskIdentifier;

}

@property (readonly) ISOperation * operation; 
@property (readonly) NSString * permissionIdentifier; 
-(void)dealloc;
-(ISOperation *)operation;
-(void)run;
-(void)_takeBackgroundAssertion;
-(void)_removeBackgroundAssertion;
-(void)_cancelBackgroundAssertion;
-(id)initWithOperation:(id)arg1 identifier:(id)arg2 ;
-(NSString *)permissionIdentifier;
@end

