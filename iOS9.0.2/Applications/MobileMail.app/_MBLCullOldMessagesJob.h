/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface _MBLCullOldMessagesJob : NSObject {

	NSMutableArray* _messages;
	id _mbl;

}

@property (nonatomic,copy) NSMutableArray * messages; 
-(id)initForMBLMailbox:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(NSMutableArray *)messages;
-(void)setMessages:(NSMutableArray *)arg1 ;
@end

