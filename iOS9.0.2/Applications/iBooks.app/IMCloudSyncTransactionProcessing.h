/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMCloudSyncTransactionProcessing <NSObject>
@optional
-(id)keysForTransaction:(id)arg1;
-(void)transactionDidFinish:(id)arg1 success:(char)arg2 error:(id)arg3;

@required
-(id)dataForSetTransaction:(id)arg1 key:(id)arg2 version:(id*)arg3;
-(void)transaction:(id)arg1 mergeData:(id)arg2 forKey:(id)arg3 version:(id)arg4 mismatch:(char)arg5 finishedBlock:(/*^block*/id)arg6;
-(id)versionForGetTransaction:(id)arg1 key:(id)arg2;

@end

