/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSSet;

@interface PLPerson : PLManagedObject

@property (nonatomic,retain) NSString * personUUID; 
@property (nonatomic,retain) NSString * fullName; 
@property (nonatomic,retain) NSSet * personReferences; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)personWithUUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)insertIntoPhotoLibrary:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3 ;
+(id)allPersonsInManagedObjectContext:(id)arg1 ;
-(void)willSave;
@end

