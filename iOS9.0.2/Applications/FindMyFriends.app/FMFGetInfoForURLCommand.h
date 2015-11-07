/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyFriends/FMFBaseCmd.h>

@class NSString, NSDictionary;

@interface FMFGetInfoForURLCommand : FMFBaseCmd {

	NSString* _launchUrl;
	NSString* _urlFromResponse;
	NSDictionary* _commandResponse;

}

@property (nonatomic,copy) NSString * launchUrl;                        //@synthesize launchUrl=_launchUrl - In the implementation block
@property (nonatomic,copy) NSString * urlFromResponse;                  //@synthesize urlFromResponse=_urlFromResponse - In the implementation block
@property (nonatomic,copy) NSDictionary * commandResponse;              //@synthesize commandResponse=_commandResponse - In the implementation block
-(void)processCommandResponse:(id)arg1 ;
-(id)willSucceedNotification;
-(id)willFailNotification;
-(id)customCommandNotification;
-(id)didSucceedNotification;
-(id)didFailNotification;
-(id)pathSuffix;
-(id)initWithLaunchUrl:(id)arg1 ;
-(NSString *)urlFromResponse;
-(NSDictionary *)commandResponse;
-(void)setLaunchUrl:(NSString *)arg1 ;
-(NSString *)launchUrl;
-(void)setCommandResponse:(NSDictionary *)arg1 ;
-(void)setUrlFromResponse:(NSString *)arg1 ;
-(id)jsonBodyDictionary;
@end

