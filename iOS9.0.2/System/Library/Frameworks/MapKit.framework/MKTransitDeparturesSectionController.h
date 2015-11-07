/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOTransitSystem;
@class MKMapItem, NSString, MKTransitDeparturesPagingFilter, NSArray, NSMapTable, NSDate, NSSet;

@interface MKTransitDeparturesSectionController : NSObject {

	MKMapItem* _mapItem;
	NSString* _direction;
	char _limitNumCellsOnly;
	MKTransitDeparturesPagingFilter* _pagingFilter;
	NSArray* _sequences;
	NSMapTable* _sequencesToInclude;
	unsigned _numberOfRows;
	char _needsBuildRows;
	id<GEOTransitSystem> _system;
	NSDate* _departureCutoffDate;
	NSDate* _expiredHighFrequencyCutoffDate;
	NSSet* _linesToExclude;
	unsigned _numberOfFilteredLines;
	unsigned _numberOfFilteredRows;

}

@property (nonatomic,retain) id<GEOTransitSystem> system;                            //@synthesize system=_system - In the implementation block
@property (nonatomic,retain) NSDate * departureCutoffDate;                           //@synthesize departureCutoffDate=_departureCutoffDate - In the implementation block
@property (nonatomic,retain) NSDate * expiredHighFrequencyCutoffDate;                //@synthesize expiredHighFrequencyCutoffDate=_expiredHighFrequencyCutoffDate - In the implementation block
@property (nonatomic,retain) NSSet * linesToExclude;                                 //@synthesize linesToExclude=_linesToExclude - In the implementation block
@property (nonatomic,readonly) char showOperatingHours; 
@property (nonatomic,readonly) unsigned numberOfFilteredRows;                        //@synthesize numberOfFilteredRows=_numberOfFilteredRows - In the implementation block
@property (nonatomic,readonly) unsigned numberOfFilteredLines;                       //@synthesize numberOfFilteredLines=_numberOfFilteredLines - In the implementation block
@property (nonatomic,readonly) unsigned numberOfAdditionalCellsPerPage; 
-(NSSet *)linesToExclude;
-(unsigned)numberOfFilteredRows;
-(char)hasFilteredRows;
-(char)_needsBuildRows;
-(char)hasFilteredLines;
-(unsigned)numberOfFilteredLines;
-(id)initWithMapItem:(id)arg1 system:(id)arg2 direction:(id)arg3 limitNumCellsOnly:(char)arg4 ;
-(void)_buildRows;
-(char)showOperatingHours;
-(void)incrementPagingFilter;
-(void)_setNeedsBuildRows;
-(id)sequences;
-(void)setDepartureCutoffDate:(NSDate *)arg1 ;
-(void)setLinesToExclude:(NSSet *)arg1 ;
-(NSDate *)departureCutoffDate;
-(void)setExpiredHighFrequencyCutoffDate:(NSDate *)arg1 ;
-(NSDate *)expiredHighFrequencyCutoffDate;
-(unsigned)numberOfAdditionalCellsPerPage;
-(void)setSystem:(id<GEOTransitSystem>)arg1 ;
-(id)sequenceForRow:(int)arg1 outDepartureIndex:(unsigned*)arg2 outIsNewLine:(out char*)arg3 outNextLineIsSame:(out char*)arg4 ;
-(id)init;
-(unsigned)numberOfRows;
-(id<GEOTransitSystem>)system;
@end

