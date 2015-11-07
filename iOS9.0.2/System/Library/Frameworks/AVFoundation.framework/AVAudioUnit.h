/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
#import <libAVFAudio.dylib/AVAudioNode.h>

@class AUAudioUnit, NSString;

@interface AVAudioUnit : AVAudioNode

@property (nonatomic,readonly) AudioComponentDescription audioComponentDescription; 
@property (nonatomic,readonly) OpaqueAudioComponentInstanceRef audioUnit; 
@property (nonatomic,readonly) AUAudioUnit * AUAudioUnit; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * manufacturerName; 
@property (nonatomic,readonly) unsigned version; 
+(void)instantiateWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(OpaqueAudioComponentInstanceRef)audioUnit;
-(AudioComponentDescription)audioComponentDescription;
-(id)initWithAudioComponentDescription:(AudioComponentDescription)arg1 ;
-(BOOL)setValue:(float)arg1 forParam:(unsigned long)arg2 ;
-(float)valueForParam:(unsigned long)arg1 ;
-(char)loadAudioUnitPresetAtURL:(id)arg1 error:(id*)arg2 ;
-(AUAudioUnit *)AUAudioUnit;
-(NSString *)name;
-(unsigned)version;
-(NSString *)manufacturerName;
@end

