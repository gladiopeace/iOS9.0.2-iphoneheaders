/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IMAVMicrophone : NSObject {

	id _internalDevice;

}

@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSString * uniqueID; 
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)name;
-(NSString *)uniqueID;
-(id)_initWithAVAudioDevice:(id)arg1 ;
-(id)_AVAudioDevice;
@end

