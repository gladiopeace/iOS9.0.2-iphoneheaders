/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSArray;

@interface AVAudioUnitComponentManager : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSArray * tagNames; 
@property (nonatomic,readonly) NSArray * standardLocalizedTagNames; 
+(id)sharedAudioUnitComponentManager;
+(void)privateAllocInitSingleton;
+(id)allocWithZone:(NSZone*)arg1 ;
-(NSArray *)tagNames;
-(NSArray *)standardLocalizedTagNames;
-(id)componentsMatchingPredicate:(id)arg1 ;
-(id)componentsPassingTest:(/*^block*/id)arg1 ;
-(id)componentsMatchingDescription:(AudioComponentDescription)arg1 ;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)localeChanged:(id)arg1 ;
@end
