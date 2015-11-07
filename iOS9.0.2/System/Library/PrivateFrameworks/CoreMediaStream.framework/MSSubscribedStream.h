/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MSSubscribedStream : NSObject <NSCoding> {

	NSString* _streamID;
	NSString* _ctag;

}

@property (nonatomic,retain) NSString * streamID;              //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                  //@synthesize ctag=_ctag - In the implementation block
+(id)subscribedStreamWithStreamID:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)ctag;
-(NSString *)streamID;
-(void)setCtag:(NSString *)arg1 ;
-(id)initWithStreamID:(id)arg1 ;
-(void)setStreamID:(NSString *)arg1 ;
@end

