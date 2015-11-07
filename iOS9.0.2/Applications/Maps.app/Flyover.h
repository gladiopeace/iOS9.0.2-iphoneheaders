/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, GEOPDFlyover;

@interface Flyover : NSObject {

	NSString* _announcement;
	GEOPDFlyover* _flyover;
	unsigned long long _animationID;

}

@property (nonatomic,readonly) NSString * announcement;                     //@synthesize announcement=_announcement - In the implementation block
@property (nonatomic,readonly) unsigned long long animationID;              //@synthesize animationID=_animationID - In the implementation block
@property (nonatomic,readonly) GEOPDFlyover * flyover;                      //@synthesize flyover=_flyover - In the implementation block
-(id)initWithAnnouncement:(id)arg1 flyover:(id)arg2 animationID:(unsigned long long)arg3 ;
-(NSString *)announcement;
-(unsigned long long)animationID;
-(GEOPDFlyover *)flyover;
@end

