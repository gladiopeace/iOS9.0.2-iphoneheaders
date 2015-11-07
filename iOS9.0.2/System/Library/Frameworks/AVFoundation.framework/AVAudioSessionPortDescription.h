/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSString, NSArray, AVAudioSessionDataSourceDescription;

@interface AVAudioSessionPortDescription : NSObject {

	void* _impl;

}

@property (readonly) NSString * portType; 
@property (readonly) NSString * portName; 
@property (readonly) NSString * UID; 
@property (readonly) NSArray * channels; 
@property (readonly) NSArray * dataSources; 
@property (readonly) AVAudioSessionDataSourceDescription * selectedDataSource; 
@property (readonly) AVAudioSessionDataSourceDescription * preferredDataSource; 
+(id)privateCreateOrConfigureArray:(id)arg1 withRawPortArray:(id)arg2 ;
+(char)privateMatchesInputs:(id)arg1 toRawInputs:(id)arg2 ;
-(PortDescriptionImpl*)privateGetImplementation;
-(char)privateMatchesRawDescription:(id)arg1 ;
-(char)setPreferredDataSource:(id)arg1 error:(id*)arg2 ;
-(id)privateGetID;
-(char)isEqualToPort:(id)arg1 compareStrict:(char)arg2 ;
-(void)configureChannelsAndDataSources:(id)arg1 ;
-(id)initWithRawPortDescription:(id)arg1 ;
-(char)isHeadphones;
-(NSArray *)channels;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(AVAudioSessionDataSourceDescription *)preferredDataSource;
-(AVAudioSessionDataSourceDescription *)selectedDataSource;
-(NSArray *)dataSources;
-(NSString *)portName;
-(NSString *)UID;
-(NSString *)portType;
@end

