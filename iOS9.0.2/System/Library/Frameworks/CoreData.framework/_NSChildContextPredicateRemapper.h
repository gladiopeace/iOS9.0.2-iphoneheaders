/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectContext;

@interface _NSChildContextPredicateRemapper : NSObject {

	NSManagedObjectContext* _context;

}
-(id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2 ;
-(id)replacementValueForValue:(id)arg1 ;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithContext:(id)arg1 ;
@end

