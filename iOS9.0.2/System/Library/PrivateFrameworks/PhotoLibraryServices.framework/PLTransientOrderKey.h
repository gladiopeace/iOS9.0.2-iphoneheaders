/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectID, NSManagedObjectContext;

@interface PLTransientOrderKey : NSObject {

	NSManagedObjectID* _objectID;
	NSManagedObjectContext* _moc;
	long long _orderValue;

}

@property (assign,nonatomic) long long orderValue;                      //@synthesize orderValue=_orderValue - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectID;              //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * moc;              //@synthesize moc=_moc - In the implementation block
-(NSManagedObjectID *)objectID;
-(void)dealloc;
-(id)description;
-(void)setOrderValue:(long long)arg1 ;
-(void)setObjectID:(NSManagedObjectID *)arg1 ;
-(id)childManagedObject;
-(NSManagedObjectContext *)moc;
-(long long)orderValue;
-(id)secondaryOrderSortKey;
-(void)setMoc:(NSManagedObjectContext *)arg1 ;
@end

