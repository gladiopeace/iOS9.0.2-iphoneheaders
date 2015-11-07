/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray;

@interface WBSRemoteHistorySession : NSObject <NSSecureCoding> {

	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _items;

}

@property (nonatomic,readonly) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                               //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                           //@synthesize items=_items - In the implementation block
@property (getter=isCurrentSession,readonly) char currentSession; 
+(char)supportsSecureCoding;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSArray *)items;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 items:(id)arg3 ;
-(char)isCurrentSession;
@end

