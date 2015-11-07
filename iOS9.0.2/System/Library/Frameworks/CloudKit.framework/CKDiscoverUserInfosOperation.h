/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKDiscoverUserInfosOperation : CKOperation {

	NSArray* _emailAddresses;
	NSArray* _userRecordIDs;
	/*^block*/id _discoverUserInfosCompletionBlock;
	NSMutableDictionary* _emailsToUserInfos;
	NSMutableDictionary* _userRecordIDsToUserInfos;

}

@property (nonatomic,copy) NSArray * emailAddresses;                                      //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,copy) NSArray * userRecordIDs;                                       //@synthesize userRecordIDs=_userRecordIDs - In the implementation block
@property (nonatomic,copy) id discoverUserInfosCompletionBlock;                           //@synthesize discoverUserInfosCompletionBlock=_discoverUserInfosCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * emailsToUserInfos;                     //@synthesize emailsToUserInfos=_emailsToUserInfos - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userRecordIDsToUserInfos;              //@synthesize userRecordIDsToUserInfos=_userRecordIDsToUserInfos - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(void)setDiscoverUserInfosCompletionBlock:(id)arg1 ;
-(void)setUserRecordIDs:(NSArray *)arg1 ;
-(id)discoverUserInfosCompletionBlock;
-(NSMutableDictionary *)emailsToUserInfos;
-(NSMutableDictionary *)userRecordIDsToUserInfos;
-(void)setEmailsToUserInfos:(NSMutableDictionary *)arg1 ;
-(void)setUserRecordIDsToUserInfos:(NSMutableDictionary *)arg1 ;
-(NSArray *)emailAddresses;
-(id)init;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2 ;
-(NSArray *)userRecordIDs;
@end

