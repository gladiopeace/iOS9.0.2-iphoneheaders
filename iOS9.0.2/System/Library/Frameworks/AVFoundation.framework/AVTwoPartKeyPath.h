/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVKeyPath.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AVTwoPartKeyPath : NSObject <AVKeyPath, NSCopying> {

	NSString* _topLevelKey;
	NSString* _secondLevelKey;

}

@property (nonatomic,readonly) NSString * topLevelPropertyKey;                 //@synthesize topLevelKey=_topLevelKey - In the implementation block
@property (nonatomic,readonly) NSString * secondLevelPropertyKey;              //@synthesize secondLevelKey=_secondLevelKey - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * keyPathString; 
-(NSString *)keyPathString;
-(NSString *)topLevelPropertyKey;
-(NSString *)secondLevelPropertyKey;
-(id)initWithTopLevelPropertyKey:(id)arg1 secondLevelPropertyKey:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

