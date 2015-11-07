/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSURL, NSSet, NSTimeZone, NSDictionary, NSArray;


@protocol CalDAVCalendar <NSObject>
@property (nonatomic,readonly) id<CalDAVPrincipal> principal; 
@property (nonatomic,retain) NSString * guid; 
@property (nonatomic,retain) NSURL * calendarURL; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * notes; 
@property (nonatomic,retain) NSString * color; 
@property (nonatomic,retain) NSString * symbolicColorName; 
@property (nonatomic,retain) NSString * pushKey; 
@property (nonatomic,retain) NSURL * owner; 
@property (nonatomic,retain) NSString * ownerDisplayName; 
@property (nonatomic,retain) NSSet * calendarUserAddresses; 
@property (nonatomic,retain) NSURL * publishURL; 
@property (nonatomic,retain) NSURL * prePublishURL; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (nonatomic,retain) NSDictionary * bulkRequests; 
@property (assign,nonatomic) int order; 
@property (assign,nonatomic) int sharingStatus; 
@property (nonatomic,retain) NSSet * sharees; 
@property (assign,nonatomic) char isTaskContainer; 
@property (assign,nonatomic) char isEventContainer; 
@property (assign,nonatomic) char isSubscribed; 
@property (assign,nonatomic) char isManagedByServer; 
@property (assign,nonatomic) char isScheduleInbox; 
@property (assign,nonatomic) char isScheduleOutbox; 
@property (assign,nonatomic) char isNotification; 
@property (assign,nonatomic) char isPoll; 
@property (assign,nonatomic) char isEditable; 
@property (assign,nonatomic) char isRenameable; 
@property (assign,nonatomic) char isEnabled; 
@property (assign,nonatomic) char isPublished; 
@property (assign,nonatomic) char isAffectingAvailability; 
@property (assign,nonatomic) char canBePublished; 
@property (assign,nonatomic) char canBeShared; 
@property (assign,nonatomic) char isFamilyCalendar; 
@property (assign,nonatomic) char isMarkedUndeletable; 
@property (assign,nonatomic) char isMarkedImmutableSharees; 
@property (assign,nonatomic) char wasModifiedLocally; 
@property (assign,nonatomic) char needsResync; 
@property (nonatomic,retain) NSString * ctag; 
@property (nonatomic,retain) NSString * syncToken; 
@property (nonatomic,readonly) char needsPublishUpdate; 
@property (nonatomic,readonly) NSArray * syncActions; 
@property (nonatomic,readonly) NSArray * shareeActions; 
@property (nonatomic,readonly) NSDictionary * uuidsToAddActions; 
@property (nonatomic,readonly) NSDictionary * hrefsToModDeleteActions; 
@property (nonatomic,readonly) NSSet * allItemURLs; 
@optional
-(Class)appSpecificCalendarItemClass;
-(void)clearShareeActions;
-(void)prepareMergeSyncActionsWithCompletionBlock:(/*^block*/id)arg1;
-(void)syncDidFinishWithError:(id)arg1;
-(void)putAction:(id)arg1 completedWithError:(id)arg2;
-(void)deleteAction:(id)arg1 completedWithError:(id)arg2;

@required
-(NSString *)symbolicColorName;
-(void)setCanBePublished:(char)arg1;
-(void)setCanBeShared:(char)arg1;
-(void)setIsFamilyCalendar:(char)arg1;
-(void)setIsMarkedUndeletable:(char)arg1;
-(void)setIsMarkedImmutableSharees:(char)arg1;
-(NSDictionary *)bulkRequests;
-(void)setBulkRequests:(id)arg1;
-(NSString *)pushKey;
-(void)setPushKey:(id)arg1;
-(NSString *)notes;
-(void)setNotes:(id)arg1;
-(char)isFamilyCalendar;
-(int)sharingStatus;
-(NSSet *)sharees;
-(char)canBeShared;
-(void)setSharees:(id)arg1;
-(char)isMarkedImmutableSharees;
-(void)setSharingStatus:(int)arg1;
-(char)isMarkedUndeletable;
-(char)isSubscribed;
-(void)setSymbolicColorName:(id)arg1;
-(char)isPublished;
-(char)canBePublished;
-(void)setIsPublished:(char)arg1;
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(void)setTimeZone:(id)arg1;
-(char)isEditable;
-(char)isEnabled;
-(void)setIsEnabled:(char)arg1;
-(NSString *)color;
-(void)setColor:(id)arg1;
-(NSTimeZone *)timeZone;
-(void)setOrder:(int)arg1;
-(int)order;
-(void)setIsEditable:(char)arg1;
-(char)isScheduleInbox;
-(char)isScheduleOutbox;
-(char)isNotification;
-(char)isEventContainer;
-(char)isTaskContainer;
-(NSURL *)publishURL;
-(NSURL *)prePublishURL;
-(void)setPublishURL:(id)arg1;
-(void)setPrePublishURL:(id)arg1;
-(NSString *)syncToken;
-(char)needsResync;
-(NSURL *)calendarURL;
-(NSArray *)syncActions;
-(id<CalDAVPrincipal>)principal;
-(void)setCalendarUserAddresses:(id)arg1;
-(void)setCalendarURL:(id)arg1;
-(char)needsPublishUpdate;
-(NSArray *)shareeActions;
-(char)isAffectingAvailability;
-(void)setIsEventContainer:(char)arg1;
-(void)setIsTaskContainer:(char)arg1;
-(void)setIsRenameable:(char)arg1;
-(void)setIsSubscribed:(char)arg1;
-(void)setIsScheduleInbox:(char)arg1;
-(void)setIsScheduleOutbox:(char)arg1;
-(void)setIsPoll:(char)arg1;
-(void)setIsNotification:(char)arg1;
-(id)etagsForItemURLs:(id)arg1;
-(char)setEtag:(id)arg1 forItemAtURL:(id)arg2;
-(char)setScheduleTag:(id)arg1 forItemAtURL:(id)arg2;
-(char)setURL:(id)arg1 forResourceWithUUID:(id)arg2;
-(char)updateResourcesFromServer:(id)arg1;
-(char)deleteResourcesAtURLs:(id)arg1;
-(char)hasCalendarUserAddressEquivalentToURL:(id)arg1;
-(NSString *)ownerDisplayName;
-(void)setOwnerDisplayName:(id)arg1;
-(NSSet *)calendarUserAddresses;
-(char)isManagedByServer;
-(void)setIsManagedByServer:(char)arg1;
-(char)isPoll;
-(char)isRenameable;
-(void)setIsAffectingAvailability:(char)arg1;
-(char)wasModifiedLocally;
-(void)setWasModifiedLocally:(char)arg1;
-(void)setNeedsResync:(char)arg1;
-(void)setSyncToken:(id)arg1;
-(NSDictionary *)uuidsToAddActions;
-(NSDictionary *)hrefsToModDeleteActions;
-(NSSet *)allItemURLs;
-(NSString *)ctag;
-(void)setCtag:(id)arg1;
-(NSString *)guid;
-(void)setGuid:(id)arg1;
-(void)setOwner:(id)arg1;
-(NSURL *)owner;

@end

