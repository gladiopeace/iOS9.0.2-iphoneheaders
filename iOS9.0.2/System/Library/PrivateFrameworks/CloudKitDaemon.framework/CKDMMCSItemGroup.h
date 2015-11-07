/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MMCSOperationMetric;
@class NSMutableArray, NSError, NSArray, NSURL, NSString;

@interface CKDMMCSItemGroup : NSObject {

	NSMutableArray* _items;
	char _complete;
	NSError* _error;
	id<MMCSOperationMetric> _metrics;
	NSArray* _tuple;

}

@property (nonatomic,retain) NSError * error;                              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSArray * items;                            //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) id<MMCSOperationMetric> metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) NSArray * tuple;                              //@synthesize tuple=_tuple - In the implementation block
@property (nonatomic,readonly) NSURL * contentBaseURL; 
@property (nonatomic,readonly) NSString * owner; 
@property (nonatomic,readonly) NSString * requestor; 
@property (nonatomic,readonly) char useAuthRequests; 
@property (assign,nonatomic) char complete;                                //@synthesize complete=_complete - In the implementation block
+(id)tupleForItem:(id)arg1 ;
-(NSError *)error;
-(id)description;
-(NSArray *)items;
-(id<MMCSOperationMetric>)metrics;
-(void)addItem:(id)arg1 ;
-(void)setComplete:(char)arg1 ;
-(char)complete;
-(id)CKPropertiesDescription;
-(char)useAuthRequests;
-(NSURL *)contentBaseURL;
-(NSString *)requestor;
-(id)initWithTuple:(id)arg1 ;
-(NSArray *)tuple;
-(void)setTuple:(NSArray *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSString *)owner;
-(void)setMetrics:(id<MMCSOperationMetric>)arg1 ;
@end

