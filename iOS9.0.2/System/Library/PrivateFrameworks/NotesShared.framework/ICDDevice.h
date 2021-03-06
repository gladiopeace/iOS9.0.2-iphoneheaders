/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, ICPerson, NSUUID;

@interface ICDDevice : NSManagedObject

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) ICPerson * person; 
@property (assign,nonatomic) char sharingExtensionDevice; 
@property (nonatomic,retain) NSUUID * uuid; 
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
@end

