/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/VMULibraryLoadDelegate.h>

@class NSString, _VMULibraryLoadObserver, NSDictionary, NSMutableArray, NSArray, NSDate;

@interface VMUProcessDescription : NSObject <VMULibraryLoadDelegate> {

	unsigned _task;
	int _pid;
	NSString* _hardwareModel;
	NSString* _processName;
	char _processNameNeedsCorrection;
	NSString* _executablePath;
	_VMULibraryLoadObserver* _loadUnloadObserver;
	char _executablePathNeedsCorrection;
	unsigned long long _executableLoadAddress;
	int _cpuType;
	char _is64Bit;
	timeval _proc_starttime;
	NSDictionary* _lsApplicationInformation;
	NSMutableArray* _binaryImages;
	NSArray* _sortedBinaryImages;
	NSDictionary* _binaryImageHints;
	NSArray* _unreadableBinaryImagePaths;
	char _binaryImagePostProcessingComplete;
	NSDictionary* _buildVersionDictionary;
	NSDictionary* _osVersionDictionary;
	mapped_memory_tRef _mappedMemory;
	NSString* _parentProcessName;
	NSString* _parentExecutablePath;
	int _ppid;
	NSDate* _date;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parseBinaryImagesDescription:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)bundleIdentifier;
-(id)date;
-(id)executablePath;
-(id)processName;
-(id)displayName;
-(id)processIdentifier;
-(unsigned)task;
-(int)cpuType;
-(id)initWithPid:(int)arg1 orTask:(unsigned)arg2 getBinariesList:(char)arg3 ;
-(id)binaryImagesDescription;
-(void)_libraryLoaded:(CSTypeRef)arg1 ;
-(id)binaryImages;
-(id)processVersionDictionary;
-(id)_sanitizeVersion:(id)arg1 ;
-(void)setCrashReporterInfo;
-(id)_bundleLock;
-(void)clearCrashReporterInfo;
-(id)_rangesOfBinaryImages:(id)arg1 forBacktraces:(id)arg2 ;
-(id)_binaryImagesDescriptionForRanges:(id)arg1 ;
-(id)_buildVersionDictionary;
-(id)_osVersionDictionary;
-(id)_buildInfoDescription;
-(id)processVersion;
-(id)_cpuTypeDescription;
-(id)parentProcessName;
-(id)_systemVersionDescription;
-(id)processDescriptionHeader;
-(id)dateAndVersionDescription;
-(id)initWithPid:(int)arg1 orTask:(unsigned)arg2 ;
-(char)isAppleApplication;
-(id)binaryImageDictionaryForAddress:(unsigned long long)arg1 ;
-(id)binaryImagesDescriptionForBacktraces:(id)arg1 ;
-(int)pid;
@end

