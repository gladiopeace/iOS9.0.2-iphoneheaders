/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/SyncingHistoryItem.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <Maps/HistoryItem.h>

@class SearchResult, MSPHistoryEntryStorage, NSData, NSString;

@interface DirectionsHistoryItem : NSObject <SyncingHistoryItem, NSCopying, HistoryItem> {

	SearchResult* _startSearchResult;
	SearchResult* _endSearchResult;
	MSPHistoryEntryStorage* _storage;
	NSData* _directionsResponseID;
	NSString* _reportAProblemAttachment;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSData * syncData; 
@property (assign,nonatomic) double position; 
@property (nonatomic,readonly) char isValid; 
@property (assign,nonatomic) int transportType; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) SearchResult * startSearchResult; 
@property (nonatomic,readonly) SearchResult * endSearchResult; 
@property (nonatomic,retain) NSString * syncIdentifier; 
@property (nonatomic,retain) NSData * directionsResponseID;                   //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (nonatomic,readonly) MSPHistoryEntryStorage * storage;              //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSData * data; 
-(void)setSyncIdentifier:(NSString *)arg1 ;
-(NSString *)syncIdentifier;
-(char)updateFromSyncData:(id)arg1 ;
-(void)updateWithStorage:(id)arg1 ;
-(id)initWithSearchRequestStorage:(id)arg1 ;
-(void)rebuildStorageDirectionsSearch;
-(SearchResult *)startSearchResult;
-(void)_geocodeSearchResultIfNeeded:(id)arg1 ;
-(int)_geoTransportTypeForMKDirectionsTransportType:(unsigned)arg1 ;
-(void)updateFromStartSearchResult:(id)arg1 endSearchResult:(id)arg2 ;
-(SearchResult *)endSearchResult;
-(void)updateWithStorage:(id)arg1 preserveLocationInfo:(char)arg2 ;
-(id)initWithStartSearchResult:(id)arg1 endSearchResult:(id)arg2 directionsMode:(unsigned)arg3 timestamp:(double)arg4 ;
-(MSPHistoryEntryStorage *)storage;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(double)timestamp;
-(char)isValid;
-(void)setTimestamp:(double)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(NSData *)syncData;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(NSData *)directionsResponseID;
-(void)setTransportType:(int)arg1 ;
-(int)transportType;
@end

