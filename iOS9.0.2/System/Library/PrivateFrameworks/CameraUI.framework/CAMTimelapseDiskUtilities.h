/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CAMTimelapseDiskUtilities : NSObject
+(char)hasPendingWork;
+(id)fileNameForImageFrameIndex:(int)arg1 ;
+(id)directoryPathForTimelapseUUID:(id)arg1 ;
+(id)readSortedStatesFromDiskMergeSecondaryState:(char)arg1 ;
+(char)reserveDummyFileForTimelapseUUID:(id)arg1 width:(int)arg2 height:(int)arg3 ;
+(id)readSecondaryStateForTimelapseUUID:(id)arg1 ;
+(char)writeStateToDisk:(id)arg1 createDirectoryIfNeeded:(char)arg2 ;
+(id)timelapseDirectoryPathCreateIfNeeded:(char)arg1 ;
+(id)timelapseDirectoryPath;
+(id)stateFileName;
+(id)stateFilePathForTimelapseUUID:(id)arg1 ;
+(id)secondaryStateFileName;
+(id)secondaryStateFilePathForTimelapseUUID:(id)arg1 ;
+(char)writeSecondaryStateToDisk:(id)arg1 forTimelapseUUID:(id)arg2 ;
+(id)timelapseUUIDsOnDisk;
+(id)readStateForTimelapseUUID:(id)arg1 mergeSecondaryState:(char)arg2 ;
+(int)frameIndexFromImageFileName:(id)arg1 ;
+(id)dummyFileName;
+(id)dummyFilePathForTimelapseUUID:(id)arg1 ;
+(id)fileNameForImageVISIndex:(int)arg1 ;
+(id)updateSecondaryStateForTimelapseUUID:(id)arg1 withStopReasons:(int)arg2 stopTime:(id)arg3 ;
+(id)updateSecondaryStateForMovieWriteAttemptForTimelapseUUID:(id)arg1 ;
+(id)updateSecondaryStateForTimelapseUUID:(id)arg1 forStateReadSuccessfully:(char)arg2 ;
+(id)readFrameFilePathsForTimelapseUUID:(id)arg1 ;
+(id)sortedArrayFromFilePathDictionary:(id)arg1 reverse:(char)arg2 ;
+(char)removeDummyFileForTimelapseUUID:(id)arg1 ;
@end

