/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/IMViewControllerTransition.h>

@interface IMSlideTransition : IMViewControllerTransition {

	int _type;

}

@property (assign,nonatomic) int type;              //@synthesize type=_type - In the implementation block
-(void)prepareTransition;
-(void)performTransition;
-(void)cleanupTransition;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

