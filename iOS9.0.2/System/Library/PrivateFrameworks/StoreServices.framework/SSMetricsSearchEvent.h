/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsSearchEvent : SSMetricsBaseEvent

@property (nonatomic,retain) NSString * searchTerm; 
@property (nonatomic,retain) NSString * actionType; 
@property (nonatomic,retain) id actionDetails; 
@property (nonatomic,retain) NSString * targetIdentifier; 
@property (nonatomic,retain) NSString * targetType; 
@property (nonatomic,retain) NSString * targetURL; 
-(NSString *)actionType;
-(id)init;
-(void)setActionType:(NSString *)arg1 ;
-(void)setTargetIdentifier:(NSString *)arg1 ;
-(void)setTargetURL:(NSString *)arg1 ;
-(void)setLocationWithEventLocations:(id)arg1 ;
-(void)setTargetType:(NSString *)arg1 ;
-(void)setActionDetails:(id)arg1 ;
-(void)setSearchTerm:(NSString *)arg1 ;
-(NSString *)searchTerm;
-(NSString *)targetType;
-(NSString *)targetIdentifier;
-(id)actionDetails;
-(NSString *)targetURL;
@end

