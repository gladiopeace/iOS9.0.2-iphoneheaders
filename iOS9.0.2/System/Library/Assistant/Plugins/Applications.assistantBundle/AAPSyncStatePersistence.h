/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/Plugins/Applications.assistantBundle/Applications
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSFileManager, NSURL, AAPSyncState;

@interface AAPSyncStatePersistence : NSObject {

	NSFileManager* _fileManager;
	NSURL* _url;
	AAPSyncState* _state;

}

@property (nonatomic,copy) NSURL * URL;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) AAPSyncState * state;              //@synthesize state=_state - In the implementation block
-(id)_generateURLIfNeededWithError:(id*)arg1 ;
-(id)_errWithCode:(int)arg1 desc:(id)arg2 err:(id)arg3 ;
-(void)dealloc;
-(AAPSyncState *)state;
-(id)reset;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(id)load;
-(id)save:(id)arg1 ;
-(id)_fileManager;
@end

