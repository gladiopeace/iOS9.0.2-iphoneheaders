/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ML3DatabaseConnectionDelegate <NSObject>
@optional
-(void)connectionWillOpenDatabase:(id)arg1;
-(void)connectionDidOpenDatabase:(id)arg1;
-(void)connection:(id)arg1 didFailToOpenDatabaseWithError:(id)arg2;
-(void)connectionWillCloseDatabase:(id)arg1;
-(void)connectionDidCloseDatabase:(id)arg1;
-(void)connection:(id)arg1 didFailToCloseDatabaseWithError:(id)arg2;
-(void)connectionDidBeginDatabaseTransaction:(id)arg1;
-(void)connection:(id)arg1 didEndDatabaseTransactionAndCommit:(char)arg2;

@end

