/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAVContainerSyncTaskGroup.h>

@class NSString, NSMutableDictionary, NSDictionary, NSArray, CoreDAVItemParserMapping;

@interface CalDAVContainerChecksumSyncTaskGroup : CalDAVContainerSyncTaskGroup {

	NSString* _unusedSyncToken;
	NSString* _unusedCTag;
	NSMutableDictionary* _serverURLsToChecksums;
	NSDictionary* _localURLsToChecksums;
	char _mismatchDetected;
	NSArray* _preferredChecksumVersions;
	CoreDAVItemParserMapping* _bestServerChecksumVersion;

}

@property (nonatomic,retain) NSArray * preferredChecksumVersions;                               //@synthesize preferredChecksumVersions=_preferredChecksumVersions - In the implementation block
@property (assign,nonatomic) id<CalDAVChecksumLocalDBInfoProvider> delegate; 
@property (nonatomic,retain) CoreDAVItemParserMapping * bestServerChecksumVersion;              //@synthesize bestServerChecksumVersion=_bestServerChecksumVersion - In the implementation block
@property (nonatomic,readonly) char mismatchDetected;                                           //@synthesize mismatchDetected=_mismatchDetected - In the implementation block
-(void)startTaskGroup;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 appSpecificCalendarItemClass:(Class)arg7 ;
-(id)copyAdditionalResourcePropertiesToFetch;
-(void)setBestServerChecksumVersion:(CoreDAVItemParserMapping *)arg1 ;
-(id)_calculatedCalendarHome;
-(void)_handleResponseToChecksumPropfind:(id)arg1 ;
-(void)_serverChecksumSupportPropfind;
-(void)receivedPropertiesToValues:(id)arg1 forURL:(id)arg2 ;
-(char)shouldDownloadResource:(id)arg1 localETag:(id)arg2 serverETag:(id)arg3 ;
-(char)_hadOutOfDateCollectionToken;
-(void)deleteResourceURLs:(id)arg1 ;
-(NSArray *)preferredChecksumVersions;
-(void)setPreferredChecksumVersions:(NSArray *)arg1 ;
-(CoreDAVItemParserMapping *)bestServerChecksumVersion;
-(char)mismatchDetected;
@end

