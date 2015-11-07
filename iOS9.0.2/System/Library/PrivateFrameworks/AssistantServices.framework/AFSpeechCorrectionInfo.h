/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFSpeechCorrectionInfo : NSObject <NSSecureCoding> {

	int _alternativeSelectionCount;
	int _characterModificationCount;
	NSString* _correctedText;

}

@property (assign,nonatomic) int alternativeSelectionCount;               //@synthesize alternativeSelectionCount=_alternativeSelectionCount - In the implementation block
@property (assign,nonatomic) int characterModificationCount;              //@synthesize characterModificationCount=_characterModificationCount - In the implementation block
@property (nonatomic,copy) NSString * correctedText;                      //@synthesize correctedText=_correctedText - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAlternativeSelectionCount:(int)arg1 ;
-(void)setCharacterModificationCount:(int)arg1 ;
-(void)setCorrectedText:(NSString *)arg1 ;
-(int)alternativeSelectionCount;
-(int)characterModificationCount;
-(NSString *)correctedText;
@end
