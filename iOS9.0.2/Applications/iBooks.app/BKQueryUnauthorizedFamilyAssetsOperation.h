/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSDictionary, NSSet, NSError;

@interface BKQueryUnauthorizedFamilyAssetsOperation : NSOperation {

	NSDictionary* _notificationUserData;
	NSSet* _objectIDsOfBooksToBeDeleted;
	NSError* _error;

}

@property (nonatomic,retain) NSDictionary * notificationUserData;              //@synthesize notificationUserData=_notificationUserData - In the implementation block
@property (nonatomic,retain) NSSet * objectIDsOfBooksToBeDeleted;              //@synthesize objectIDsOfBooksToBeDeleted=_objectIDsOfBooksToBeDeleted - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
-(void)setNotificationUserData:(NSDictionary *)arg1 ;
-(NSSet *)objectIDsOfBooksToBeDeleted;
-(NSDictionary *)notificationUserData;
-(void)setObjectIDsOfBooksToBeDeleted:(NSSet *)arg1 ;
-(NSError *)error;
-(void)main;
-(void)setError:(NSError *)arg1 ;
@end

