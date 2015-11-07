/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVGetAccountPropertiesTaskGroup.h>

@class NSURL, NSSet, CalDAVServerVersion;

@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {

	char _supportsCalendarUserSearch;
	NSURL* _delegatePrincipalURL;
	NSSet* _calendarHomes;
	NSSet* _userAddresses;
	NSURL* _inboxURL;
	NSURL* _outboxURL;
	NSURL* _dropboxURL;
	NSURL* _notificationURL;
	NSURL* _updatedPrincipalURL;
	CalDAVServerVersion* _serverVersion;

}

@property (nonatomic,retain) NSURL * delegatePrincipalURL;                       //@synthesize delegatePrincipalURL=_delegatePrincipalURL - In the implementation block
@property (nonatomic,readonly) NSSet * calendarHomes;                            //@synthesize calendarHomes=_calendarHomes - In the implementation block
@property (nonatomic,readonly) NSSet * userAddresses;                            //@synthesize userAddresses=_userAddresses - In the implementation block
@property (nonatomic,readonly) NSURL * inboxURL;                                 //@synthesize inboxURL=_inboxURL - In the implementation block
@property (nonatomic,readonly) NSURL * outboxURL;                                //@synthesize outboxURL=_outboxURL - In the implementation block
@property (nonatomic,readonly) NSURL * dropboxURL;                               //@synthesize dropboxURL=_dropboxURL - In the implementation block
@property (nonatomic,readonly) NSURL * notificationURL;                          //@synthesize notificationURL=_notificationURL - In the implementation block
@property (nonatomic,readonly) NSURL * updatedPrincipalURL;                      //@synthesize updatedPrincipalURL=_updatedPrincipalURL - In the implementation block
@property (nonatomic,readonly) CalDAVServerVersion * serverVersion;              //@synthesize serverVersion=_serverVersion - In the implementation block
@property (nonatomic,readonly) char supportsCalendarUserSearch;                  //@synthesize supportsCalendarUserSearch=_supportsCalendarUserSearch - In the implementation block
-(id)description;
-(void)startTaskGroup;
-(id)_copyAccountPropertiesPropFindElements;
-(NSURL *)delegatePrincipalURL;
-(void)_setPropertiesFromParsedResponses:(id)arg1 ;
-(void)processPrincipalHeaders:(id)arg1 ;
-(id)homeSet;
-(char)forceOptionsRequest;
-(void)setDelegatePrincipalURL:(NSURL *)arg1 ;
-(NSSet *)calendarHomes;
-(NSSet *)userAddresses;
-(NSURL *)inboxURL;
-(NSURL *)outboxURL;
-(NSURL *)dropboxURL;
-(NSURL *)notificationURL;
-(NSURL *)updatedPrincipalURL;
-(char)supportsCalendarUserSearch;
-(CalDAVServerVersion *)serverVersion;
@end

