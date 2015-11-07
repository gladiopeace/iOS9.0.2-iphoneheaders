/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@interface CalDAVCalendarServerCollectionChangesElement : CalDAVCalendarServerResourceChangeElement {

	int _created;
	int _updated;
	int _deleted;

}

@property (assign,nonatomic) int created;              //@synthesize created=_created - In the implementation block
@property (assign,nonatomic) int updated;              //@synthesize updated=_updated - In the implementation block
@property (assign,nonatomic) int deleted;              //@synthesize deleted=_deleted - In the implementation block
-(id)init;
-(id)copyParseRules;
-(int)updated;
-(void)setCreatedItem:(id)arg1 ;
-(void)setUpdatedItem:(id)arg1 ;
-(void)setDeletedItem:(id)arg1 ;
-(void)setCreated:(int)arg1 ;
-(int)created;
-(void)setUpdated:(int)arg1 ;
-(int)deleted;
-(void)setDeleted:(int)arg1 ;
@end

