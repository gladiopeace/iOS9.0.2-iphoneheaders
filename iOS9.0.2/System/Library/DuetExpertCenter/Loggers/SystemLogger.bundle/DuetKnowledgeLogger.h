/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DuetExpertCenter/Loggers/SystemLogger.bundle/SystemLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DECFeedbackLogger.h>

@class _DKKnowledgeStore, NSString;

@interface DuetKnowledgeLogger : NSObject <_DECFeedbackLogger> {

	_DKKnowledgeStore* _store;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_eventWithValue:(id)arg1 expertIdentifier:(id)arg2 feedback:(id)arg3 category:(unsigned)arg4 ;
-(id)init;
-(void)logForExpert:(id)arg1 feedback:(id)arg2 category:(unsigned)arg3 consumer:(unsigned)arg4 ;
@end

