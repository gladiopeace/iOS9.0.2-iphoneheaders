/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TTSSpeechVoice;

@interface TTSSpeechChannel : NSObject {

	TTSSpeechVoice* _voice;

}

@property (nonatomic,retain) TTSSpeechVoice * voice;              //@synthesize voice=_voice - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setVoice:(TTSSpeechVoice *)arg1 ;
-(TTSSpeechVoice *)voice;
-(id)initWithVoice:(id)arg1 ;
@end

