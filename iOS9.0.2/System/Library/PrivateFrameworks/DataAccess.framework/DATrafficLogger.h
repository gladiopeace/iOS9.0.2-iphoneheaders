/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface DATrafficLogger : NSObject {

	NSString* _filename;

}

@property (nonatomic,retain) NSString * filename;              //@synthesize filename=_filename - In the implementation block
+(char)enabled;
-(void)_ensureCustomLogFile;
-(void)logSnippet:(id)arg1 ;
-(void)slurpAndRemoveLookasideFile:(id)arg1 prefixString:(id)arg2 suffixString:(id)arg3 ;
-(id)initWithFilename:(id)arg1 ;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
@end

