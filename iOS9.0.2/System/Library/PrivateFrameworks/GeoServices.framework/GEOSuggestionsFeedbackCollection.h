/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDAutocompleteEntry, NSData;

@interface GEOSuggestionsFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE4 _sessionID;
	GEOPDAutocompleteEntry* _suggestionEntry;
	int _suggestionEntryIndex;
	NSData* _suggestionEntryMetadata;
	NSData* _suggestionMetadata;
	int _suggestionsEntryListIndex;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) char hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionID;                              //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) char hasSuggestionsEntryListIndex; 
@property (assign,nonatomic) int suggestionsEntryListIndex;                         //@synthesize suggestionsEntryListIndex=_suggestionsEntryListIndex - In the implementation block
@property (assign,nonatomic) char hasSuggestionEntryIndex; 
@property (assign,nonatomic) int suggestionEntryIndex;                              //@synthesize suggestionEntryIndex=_suggestionEntryIndex - In the implementation block
@property (nonatomic,readonly) char hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata;                           //@synthesize suggestionMetadata=_suggestionMetadata - In the implementation block
@property (nonatomic,readonly) char hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;                      //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
@property (nonatomic,readonly) char hasSuggestionEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * suggestionEntry;              //@synthesize suggestionEntry=_suggestionEntry - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSessionID:(SCD_Struct_GE4)arg1 ;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(SCD_Struct_GE4)sessionID;
-(char)hasSuggestionMetadata;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(NSData *)suggestionMetadata;
-(char)hasSuggestionsEntryListIndex;
-(NSData *)suggestionEntryMetadata;
-(char)hasSuggestionEntry;
-(int)suggestionEntryIndex;
-(char)hasSuggestionEntryMetadata;
-(void)setSuggestionEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(void)setHasSuggestionsEntryListIndex:(char)arg1 ;
-(void)setSuggestionsEntryListIndex:(int)arg1 ;
-(int)suggestionsEntryListIndex;
-(char)hasSuggestionEntryIndex;
-(void)setHasSuggestionEntryIndex:(char)arg1 ;
-(GEOPDAutocompleteEntry *)suggestionEntry;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(void)setSuggestionEntryIndex:(int)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

