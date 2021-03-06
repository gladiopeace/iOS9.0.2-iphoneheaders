/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL;

@interface UIWebClipLinkTag : NSObject {

	char _mediaMatchesPortraitOrientation;
	char _mediaMatchesLandscapeOrientation;
	NSString* _href;
	NSString* _rel;
	NSString* _sizes;

}

@property (nonatomic,copy) NSString * href;                                      //@synthesize href=_href - In the implementation block
@property (nonatomic,readonly) NSURL * hrefURL; 
@property (nonatomic,copy) NSString * rel;                                       //@synthesize rel=_rel - In the implementation block
@property (nonatomic,copy) NSString * sizes;                                     //@synthesize sizes=_sizes - In the implementation block
@property (assign,nonatomic) char mediaMatchesPortraitOrientation;               //@synthesize mediaMatchesPortraitOrientation=_mediaMatchesPortraitOrientation - In the implementation block
@property (assign,nonatomic) char mediaMatchesLandscapeOrientation;              //@synthesize mediaMatchesLandscapeOrientation=_mediaMatchesLandscapeOrientation - In the implementation block
-(NSURL *)hrefURL;
-(NSString *)href;
-(void)setHref:(NSString *)arg1 ;
-(NSString *)rel;
-(void)setRel:(NSString *)arg1 ;
-(NSString *)sizes;
-(void)setSizes:(NSString *)arg1 ;
-(char)mediaMatchesPortraitOrientation;
-(void)setMediaMatchesPortraitOrientation:(char)arg1 ;
-(char)mediaMatchesLandscapeOrientation;
-(void)setMediaMatchesLandscapeOrientation:(char)arg1 ;
@end

