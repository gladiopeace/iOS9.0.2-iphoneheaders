/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSMergeConflict.h>

@class NSDictionary;

@interface PFUbiquityMergeConflict : NSMergeConflict {

	NSDictionary* _ancestorSnapshot;

}

@property (retain) NSDictionary * ancestorSnapshot;              //@synthesize ancestorSnapshot=_ancestorSnapshot - In the implementation block
-(id)initWithSource:(id)arg1 newVersion:(unsigned)arg2 oldVersion:(unsigned)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5 ;
-(NSDictionary *)ancestorSnapshot;
-(void)setAncestorSnapshot:(NSDictionary *)arg1 ;
-(void)dealloc;
@end

