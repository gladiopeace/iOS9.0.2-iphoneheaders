/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDAutocompleteParametersAllEntries, GEOPDAutocompleteParametersAllEntriesWithBrowse, GEOPDAutocompleteParametersFullEntriesOnly, GEOPDAutocompleteParametersLocalitiesAndLandmarks;

@interface GEOPDAutocompleteParameters : PBCodable <NSCopying> {

	GEOPDAutocompleteParametersAllEntries* _allEntries;
	GEOPDAutocompleteParametersAllEntriesWithBrowse* _allEntriesWithBrowse;
	GEOPDAutocompleteParametersFullEntriesOnly* _fullEntries;
	GEOPDAutocompleteParametersLocalitiesAndLandmarks* _localitiesAndLandmarks;
	int _requestType;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) char hasRequestType; 
@property (assign,nonatomic) int requestType;                                                                         //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) char hasFullEntries; 
@property (nonatomic,retain) GEOPDAutocompleteParametersFullEntriesOnly * fullEntries;                                //@synthesize fullEntries=_fullEntries - In the implementation block
@property (nonatomic,readonly) char hasAllEntries; 
@property (nonatomic,retain) GEOPDAutocompleteParametersAllEntries * allEntries;                                      //@synthesize allEntries=_allEntries - In the implementation block
@property (nonatomic,readonly) char hasLocalitiesAndLandmarks; 
@property (nonatomic,retain) GEOPDAutocompleteParametersLocalitiesAndLandmarks * localitiesAndLandmarks;              //@synthesize localitiesAndLandmarks=_localitiesAndLandmarks - In the implementation block
@property (nonatomic,readonly) char hasAllEntriesWithBrowse; 
@property (nonatomic,retain) GEOPDAutocompleteParametersAllEntriesWithBrowse * allEntriesWithBrowse;                  //@synthesize allEntriesWithBrowse=_allEntriesWithBrowse - In the implementation block
-(int)requestType;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasRequestType:(char)arg1 ;
-(void)setRequestType:(int)arg1 ;
-(char)hasRequestType;
-(char)hasLocalitiesAndLandmarks;
-(GEOPDAutocompleteParametersLocalitiesAndLandmarks *)localitiesAndLandmarks;
-(void)setAllEntriesWithBrowse:(GEOPDAutocompleteParametersAllEntriesWithBrowse *)arg1 ;
-(GEOPDAutocompleteParametersAllEntriesWithBrowse *)allEntriesWithBrowse;
-(char)hasAllEntriesWithBrowse;
-(void)setFullEntries:(GEOPDAutocompleteParametersFullEntriesOnly *)arg1 ;
-(void)setAllEntries:(GEOPDAutocompleteParametersAllEntries *)arg1 ;
-(char)hasFullEntries;
-(void)setLocalitiesAndLandmarks:(GEOPDAutocompleteParametersLocalitiesAndLandmarks *)arg1 ;
-(GEOPDAutocompleteParametersFullEntriesOnly *)fullEntries;
-(GEOPDAutocompleteParametersAllEntries *)allEntries;
-(char)hasAllEntries;
-(char)readFrom:(id)arg1 ;
@end

