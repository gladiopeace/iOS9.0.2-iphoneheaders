/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyFriends/FMFBaseCmd.h>

@class FMFFriend;

@interface NotNowCommand : FMFBaseCmd {

	FMFFriend* _afriend;

}

@property (nonatomic,retain) FMFFriend * afriend;              //@synthesize afriend=_afriend - In the implementation block
-(void)processCommandResponse:(id)arg1 ;
-(id)pathSuffix;
-(id)initWithFriend:(id)arg1 ;
-(void)setAfriend:(FMFFriend *)arg1 ;
-(FMFFriend *)afriend;
-(id)jsonBodyDictionary;
@end

