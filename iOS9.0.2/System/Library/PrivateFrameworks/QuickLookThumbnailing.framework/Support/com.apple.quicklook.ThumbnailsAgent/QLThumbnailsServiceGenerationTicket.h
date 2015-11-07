/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/Support/com.apple.quicklook.ThumbnailsAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/QLThumbnailGenerationRequest.h>

@class QLPreviewThumbnailGenerator, NSFileHandle, NSString;

@interface QLThumbnailsServiceGenerationTicket : NSObject <QLThumbnailGenerationRequest> {

	QLPreviewThumbnailGenerator* _generator;
	char _finished;
	char _cancelled;
	char _generationFailed;
	/*^block*/id _completionHandler;
	NSFileHandle* _destinationFileHandle;

}

@property (retain) QLPreviewThumbnailGenerator * generator;              //@synthesize generator=_generator - In the implementation block
@property (copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (retain) NSFileHandle * destinationFileHandle;                 //@synthesize destinationFileHandle=_destinationFileHandle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)launchGeneration;
-(NSFileHandle *)destinationFileHandle;
-(void)setDestinationFileHandle:(NSFileHandle *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)cancel;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)finish;
-(char)finishIfCancelled;
-(void)setGenerator:(QLPreviewThumbnailGenerator *)arg1 ;
-(QLPreviewThumbnailGenerator *)generator;
-(void)waitForCompletionWithHandler:(/*^block*/id)arg1 ;
@end

