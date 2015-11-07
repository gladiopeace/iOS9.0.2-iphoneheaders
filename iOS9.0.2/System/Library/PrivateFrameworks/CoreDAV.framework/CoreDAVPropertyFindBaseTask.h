/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class CoreDAVMultiStatusItem, NSSet;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask {

	CoreDAVMultiStatusItem* _multiStatus;
	NSSet* _propertiesToFind;

}

@property (nonatomic,retain) CoreDAVMultiStatusItem * multiStatus;              //@synthesize multiStatus=_multiStatus - In the implementation block
@property (nonatomic,retain) NSSet * propertiesToFind;                          //@synthesize propertiesToFind=_propertiesToFind - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 ;
-(CoreDAVMultiStatusItem *)multiStatus;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)successfulValueForNameSpace:(id)arg1 elementName:(id)arg2 ;
-(id)getTotalFailureError;
-(NSSet *)propertiesToFind;
-(id)additionalHeaderValues;
-(void)updateMultiStatusFromResponse;
-(id)parseHints;
-(void)setMultiStatus:(CoreDAVMultiStatusItem *)arg1 ;
-(void)setPropertiesToFind:(NSSet *)arg1 ;
@end

