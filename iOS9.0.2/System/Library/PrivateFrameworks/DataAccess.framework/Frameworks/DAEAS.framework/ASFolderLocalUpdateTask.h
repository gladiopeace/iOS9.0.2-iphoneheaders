/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSString, ASFolder;

@interface ASFolderLocalUpdateTask : ASTask {

	NSString* _previousSyncKey;
	ASFolder* _folder;
	int _commandCode;
	int _requestType;
	/*^block*/id _completionBlock;
	int _dataclasses;

}

@property (assign,nonatomic) int dataclasses;              //@synthesize dataclasses=_dataclasses - In the implementation block
+(id)taskWithFolder:(id)arg1 previousSyncKey:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)finishWithError:(id)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(char)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(char)processContext:(id)arg1 ;
-(id)initWithFolder:(id)arg1 previousSyncKey:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_appendRequestBodyFolderDataToWBXMLData:(id)arg1 ;
-(int)dataclasses;
-(void)setDataclasses:(int)arg1 ;
@end

