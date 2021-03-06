/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL;

@interface YTVideoReference : NSObject {

	NSURL* _contentURL;
	unsigned _duration;
	int _profile;

}
-(int)profile;
-(id)contentURL;
-(void)dealloc;
-(id)description;
-(unsigned)duration;
-(id)archiveDictionary;
-(id)initFromArchiveDictionary:(id)arg1 ;
-(id)initWithContentURL:(id)arg1 duration:(unsigned)arg2 profile:(int)arg3 ;
@end

