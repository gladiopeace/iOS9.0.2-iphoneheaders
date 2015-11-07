/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/BulletinBoardPlugins/CMASBBPlugin.bundle/CMASBBPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBDataProvider.h>

@class NSMutableArray, NSArray, BBSectionParameters, BBSectionInfo, NSMutableDictionary, NSString;

@interface CMASBBPlugin : NSObject <BBDataProvider> {

	NSMutableArray* _alerts;
	NSArray* _sortDescriptors;
	BBSectionParameters* _sectionParameters;
	BBSectionInfo* _sectionInfo;
	NSMutableDictionary* _toneMap;
	NSString* _sectionIdentifier;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_registerCMASToneWithURL:(id)arg1 ;
-(id)_placeholderVibe;
-(char)_saveBulletins;
-(id)_priorAlertsDirectory;
-(id)_priorAlertsURL;
-(void)_populatePriorBulletins;
-(void)_cellBroadcastMessageReceived:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)sortDescriptors;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(id)defaultSectionInfo;
-(id)sectionDisplayName;
-(id)sectionIdentifier;
@end

