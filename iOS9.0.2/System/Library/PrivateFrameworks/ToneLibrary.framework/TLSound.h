/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface TLSound : NSObject {

	char _shouldDisposeOfSoundID;
	NSString* _filePath;
	unsigned long _soundID;

}

@property (nonatomic,copy) NSString * filePath;                                                            //@synthesize filePath=_filePath - In the implementation block
@property (assign,nonatomic) unsigned long soundID;                                                        //@synthesize soundID=_soundID - In the implementation block
@property (assign,setter=_setShouldDisposeOfSoundID:,nonatomic) char _shouldDisposeOfSoundID;              //@synthesize shouldDisposeOfSoundID=_shouldDisposeOfSoundID - In the implementation block
-(void)dealloc;
-(NSString *)filePath;
-(unsigned long)soundID;
-(id)initWithFilePath:(id)arg1 soundID:(unsigned long)arg2 ;
-(void)_setFilePath:(id)arg1 ;
-(void)_setSoundID:(unsigned long)arg1 ;
-(char)_shouldDisposeOfSoundID;
-(void)_setShouldDisposeOfSoundID:(char)arg1 ;
@end

