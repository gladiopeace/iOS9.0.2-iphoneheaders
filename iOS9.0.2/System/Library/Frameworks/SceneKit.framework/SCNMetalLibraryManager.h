/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MTLDevice, MTLLibrary;
#import <SceneKit/SceneKit-Structs.h>
@class NSMapTable;

@interface SCNMetalLibraryManager : NSObject {

	id<MTLDevice> _device;
	id<MTLLibrary> _defaultLibrary;
	id<MTLLibrary> _frameworkLibrary;
	_C3DFXMetalProgram* _defaultProgram;
	NSMapTable* _availableLibraries;
	CFDictionaryRef _availableCompiledLibraries;

}
-(_C3DFXProgram*)defaultProgram;
-(id)frameworkLibrary;
-(id)libraryForFile:(id)arg1 ;
-(id)libraryForSourceCode:(id)arg1 preprocessorsMacros:(id)arg2 programDelegate:(_C3DFXProgramDelegate*)arg3 ;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 ;
@end

