/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <RawCamera/RawCamera-Structs.h>
@class NSMutableDictionary;

@interface RAWKernels : NSObject {

	NSMutableDictionary* priv;

}
+(id)kernelWithName:(id)arg1 ;
+(id)sharedKernels;
+(id)kernelWithName:(id)arg1 group:(id)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)kernelSourceForGroup:(id)arg1 ;
-(id)loadKernelsForGroup:(id)arg1 ;
-(id)kernelWithName:(id)arg1 group:(id)arg2 ;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

