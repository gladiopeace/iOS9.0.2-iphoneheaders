/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSNumber, NSString;

@interface SSMetricsMediaEvent : SSMetricsBaseEvent

@property (nonatomic,retain) NSNumber * itemIdentifier; 
@property (nonatomic,retain) NSString * locationDescription; 
@property (nonatomic,retain) NSString * mediaEventType; 
@property (nonatomic,retain) NSString * mediaURL; 
-(NSString *)mediaURL;
-(id)init;
-(NSNumber *)itemIdentifier;
-(void)setItemIdentifier:(NSNumber *)arg1 ;
-(void)setLocationWithEventLocations:(id)arg1 ;
-(void)setMediaEventType:(NSString *)arg1 ;
-(void)setMediaURL:(NSString *)arg1 ;
-(NSString *)locationDescription;
-(void)setLocationDescription:(NSString *)arg1 ;
-(NSString *)mediaEventType;
@end

