/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber;

@interface FBAManagedFeedbackObject : NSManagedObject

@property (retain) NSNumber * ID; 
@property (retain) NSNumber * remoteID; 
+(id)importFromJSONArray:(id)arg1 intoContext:(id)arg2 ;
+(id)importFromJSONObject:(id)arg1 intoContext:(id)arg2 ;
+(id)entityName;
-(void)setPropertiesFromJSONObject:(id)arg1 ;
-(char)isEqualToFBAObject:(id)arg1 ;
-(NSNumber *)ID;
-(void)setID:(NSNumber *)arg1 ;
@end

