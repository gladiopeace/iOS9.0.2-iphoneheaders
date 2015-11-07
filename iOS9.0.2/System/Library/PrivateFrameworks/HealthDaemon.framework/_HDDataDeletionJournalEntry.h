/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class HKObject;

@interface _HDDataDeletionJournalEntry : HDJournalEntry {

	char _restrictSource;
	HKObject* _dataObject;

}

@property (nonatomic,readonly) HKObject * dataObject;              //@synthesize dataObject=_dataObject - In the implementation block
@property (nonatomic,readonly) char restrictSource;                //@synthesize restrictSource=_restrictSource - In the implementation block
+(char)supportsSecureCoding;
+(int)behavior;
+(void)applyEntries:(id)arg1 withDaemon:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDataObject:(id)arg1 restrictSource:(char)arg2 ;
-(HKObject *)dataObject;
-(char)restrictSource;
@end

