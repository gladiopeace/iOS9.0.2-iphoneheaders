/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureRecordingSettings.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray;

@interface FigCaptureAudioFileRecordingSettings : FigCaptureRecordingSettings <NSCoding, NSCopying> {

	NSDictionary* _audioSettings;
	NSArray* _metadata;

}

@property (nonatomic,copy) NSDictionary * audioSettings;              //@synthesize audioSettings=_audioSettings - In the implementation block
@property (nonatomic,copy) NSArray * metadata;                        //@synthesize metadata=_metadata - In the implementation block
-(void)setAudioSettings:(NSDictionary *)arg1 ;
-(NSDictionary *)audioSettings;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSArray *)metadata;
@end

