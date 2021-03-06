/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSProgress;

@interface ODRTagsRequest : NSObject {

	NSMutableDictionary* _tagRequests;
	double _lastEnhancedProgressReport;
	double _startTime;
	NSProgress* _progress;

}

@property (readonly) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
-(void)updateReportForRequestID:(id)arg1 withSecondsRemaining:(double)arg2 bytesDownloaded:(unsigned)arg3 ;
-(id)initWithProgress:(id)arg1 ;
-(NSProgress *)progress;
@end

