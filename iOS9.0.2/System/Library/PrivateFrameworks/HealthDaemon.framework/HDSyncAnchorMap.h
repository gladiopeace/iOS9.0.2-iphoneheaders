/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDSyncAnchorMap.h>

@protocol HDSyncAnchorMap <NSObject>
@required
-(void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2;
-(long long)anchorForSyncEntityClass:(Class)arg1;
-(void)enumerateAnchorsAndSyncEntitiesWithBlock:(/*^block*/id)arg1;
-(unsigned)anchorCount;

@end


@class NSMutableDictionary, NSString;

@interface HDSyncAnchorMap : NSObject <HDSyncAnchorMap> {

	NSMutableDictionary* _anchorsByObjectType;

}

@property (nonatomic,retain) NSMutableDictionary * anchorsByObjectType;              //@synthesize anchorsByObjectType=_anchorsByObjectType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2 ;
-(long long)anchorForSyncEntityClass:(Class)arg1 ;
-(void)enumerateAnchorsAndSyncEntitiesWithBlock:(/*^block*/id)arg1 ;
-(unsigned)anchorCount;
-(NSMutableDictionary *)anchorsByObjectType;
-(void)setAnchorsByObjectType:(NSMutableDictionary *)arg1 ;
@end

