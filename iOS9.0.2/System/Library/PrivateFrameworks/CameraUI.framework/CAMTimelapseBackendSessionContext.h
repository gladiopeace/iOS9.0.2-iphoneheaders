/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, CAMTimelapseState, NSArray;

@interface CAMTimelapseBackendSessionContext : NSObject {

	NSString* _timelapseUUID;
	CAMTimelapseState* _state;
	NSArray* _filesToDelete;
	NSArray* _filesToWrite;

}

@property (nonatomic,readonly) NSString * timelapseUUID;              //@synthesize timelapseUUID=_timelapseUUID - In the implementation block
@property (nonatomic,retain) CAMTimelapseState * state;               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSArray * filesToDelete;                 //@synthesize filesToDelete=_filesToDelete - In the implementation block
@property (nonatomic,retain) NSArray * filesToWrite;                  //@synthesize filesToWrite=_filesToWrite - In the implementation block
-(id)init;
-(id)description;
-(CAMTimelapseState *)state;
-(void)setState:(CAMTimelapseState *)arg1 ;
-(NSString *)timelapseUUID;
-(id)initWithTimelapseUUID:(id)arg1 ;
-(NSArray *)filesToDelete;
-(void)setFilesToDelete:(NSArray *)arg1 ;
-(NSArray *)filesToWrite;
-(void)setFilesToWrite:(NSArray *)arg1 ;
@end

