/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EKCancellableRemoteOperation <NSObject>
@optional
-(void)receivedBatchResultsFromServer:(id)arg1 finished:(char)arg2;

@required
-(void)cancel;
-(void)disconnect;

@end

