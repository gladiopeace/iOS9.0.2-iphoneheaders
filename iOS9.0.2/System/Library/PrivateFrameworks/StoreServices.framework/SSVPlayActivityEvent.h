/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSTimeZone, NSData;

@interface SSVPlayActivityEvent : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _containerID;
	unsigned _containerType;
	NSString* _deviceName;
	unsigned _endReasonType;
	NSDate* _eventDate;
	NSTimeZone* _eventTimeZone;
	NSString* _externalID;
	NSString* _featureName;
	double _itemDuration;
	double _itemEndTime;
	double _itemStartTime;
	unsigned _itemType;
	unsigned _mediaType;
	char _offline;
	long long _persistentID;
	NSString* _personalizedContainerID;
	NSData* _recommendationData;
	char _SBEnabled;
	unsigned _sourceType;
	unsigned long long _storeAccountID;
	NSString* _storeID;
	NSData* _timedMetadata;
	NSData* _trackInfo;

}

@property (nonatomic,copy,readonly) NSString * containerID;                                    //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,readonly) unsigned containerType;                                         //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,copy,readonly) NSString * deviceName;                                     //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) unsigned endReasonType;                                         //@synthesize endReasonType=_endReasonType - In the implementation block
@property (nonatomic,copy,readonly) NSDate * eventDate;                                        //@synthesize eventDate=_eventDate - In the implementation block
@property (nonatomic,copy,readonly) NSTimeZone * eventTimeZone;                                //@synthesize eventTimeZone=_eventTimeZone - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalID;                                     //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureName;                                    //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,readonly) double itemDuration;                                            //@synthesize itemDuration=_itemDuration - In the implementation block
@property (nonatomic,readonly) double itemEndTime;                                             //@synthesize itemEndTime=_itemEndTime - In the implementation block
@property (nonatomic,readonly) double itemStartTime;                                           //@synthesize itemStartTime=_itemStartTime - In the implementation block
@property (nonatomic,readonly) unsigned itemType;                                              //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) unsigned mediaType;                                             //@synthesize mediaType=_mediaType - In the implementation block
@property (getter=isOffline,nonatomic,readonly) char offline;                                  //@synthesize offline=_offline - In the implementation block
@property (nonatomic,readonly) long long persistentID; 
@property (nonatomic,copy,readonly) NSString * personalizedContainerID;                        //@synthesize personalizedContainerID=_personalizedContainerID - In the implementation block
@property (nonatomic,copy,readonly) NSData * recommendationData;                               //@synthesize recommendationData=_recommendationData - In the implementation block
@property (setter=BEnabled,getter=isSBEnabled,nonatomic,readonly) char SBEnabled;              //@synthesize SBEnabled=_SBEnabled - In the implementation block
@property (nonatomic,readonly) unsigned sourceType;                                            //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) unsigned long long storeAccountID;                              //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeID;                                        //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy,readonly) NSData * timedMetadata;                                    //@synthesize timedMetadata=_timedMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSData * trackInfo;                                        //@synthesize trackInfo=_trackInfo - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)externalID;
-(NSData *)dataRepresentation;
-(NSData *)timedMetadata;
-(unsigned long long)storeAccountID;
-(unsigned)mediaType;
-(long long)persistentID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned)sourceType;
-(NSString *)deviceName;
-(unsigned)containerType;
-(NSString *)containerID;
-(NSData *)recommendationData;
-(NSDate *)eventDate;
-(id)initWithDataRepresentation:(id)arg1 ;
-(NSString *)featureName;
-(NSString *)storeID;
-(unsigned)itemType;
-(double)itemEndTime;
-(unsigned)endReasonType;
-(double)itemDuration;
-(char)isOffline;
-(NSString *)personalizedContainerID;
-(char)isSBEnabled;
-(double)itemStartTime;
-(NSData *)trackInfo;
-(NSTimeZone *)eventTimeZone;
-(Class)_mutableCopyClass;
@end

