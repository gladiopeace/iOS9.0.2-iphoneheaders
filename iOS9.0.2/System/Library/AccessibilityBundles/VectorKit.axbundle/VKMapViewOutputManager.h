/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface VKMapViewOutputManager : NSObject {

	NSMutableArray* _outputQueue;

}

@property (nonatomic,retain) NSMutableArray * outputQueue;              //@synthesize outputQueue=_outputQueue - In the implementation block
+(id)sharedOutputManager;
-(unsigned)outputQueueCount;
-(void)queueOutput:(id)arg1 ;
-(NSMutableArray *)outputQueue;
-(void)setOutputQueue:(NSMutableArray *)arg1 ;
-(void)clearOutputQueue;
-(void)_handleAccessibilityAnnouncementDidFinish:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

