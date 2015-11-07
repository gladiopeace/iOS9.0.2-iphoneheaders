/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/familycircled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <familycircled/FAFamilyCircleOperation.h>

@class NSString, NSURLConnection, NSMutableData;

@interface FAAddFamilyMemberOperation : FAFamilyCircleOperation {

	NSString* _memberAppleID;
	NSString* _memberPassword;
	char _isU13;
	NSURLConnection* _conn;
	NSMutableData* _data;
	/*^block*/id _addMemberCompletionHandler;

}

@property (copy) id addMemberCompletionHandler;              //@synthesize addMemberCompletionHandler=_addMemberCompletionHandler - In the implementation block
-(void)didReceivePropertyListResponse:(id)arg1 ;
-(id)addMemberCompletionHandler;
-(id)initWithUsername:(id)arg1 password:(id)arg2 newMemberAppleID:(id)arg3 password:(id)arg4 isU13:(char)arg5 ;
-(void)setAddMemberCompletionHandler:(id)arg1 ;
-(void)didFailWithError:(id)arg1 ;
-(id)urlRequest;
@end

