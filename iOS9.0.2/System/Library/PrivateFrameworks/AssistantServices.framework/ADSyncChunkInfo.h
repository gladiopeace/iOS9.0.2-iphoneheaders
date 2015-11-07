/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface ADSyncChunkInfo : NSObject {

	NSString* _pre;
	NSString* _post;
	NSString* _validity;
	NSArray* _toAdd;
	NSArray* _toRemove;

}

@property (nonatomic,copy) NSString * pre;                    //@synthesize pre=_pre - In the implementation block
@property (nonatomic,copy) NSString * post;                   //@synthesize post=_post - In the implementation block
@property (nonatomic,copy) NSString * validity;               //@synthesize validity=_validity - In the implementation block
@property (nonatomic,retain) NSArray * toAdd;                 //@synthesize toAdd=_toAdd - In the implementation block
@property (nonatomic,retain) NSArray * toRemove;              //@synthesize toRemove=_toRemove - In the implementation block
-(NSString *)post;
-(void)setPost:(NSString *)arg1 ;
-(void)setPre:(NSString *)arg1 ;
-(NSString *)pre;
-(void)setValidity:(NSString *)arg1 ;
-(NSString *)validity;
-(NSArray *)toAdd;
-(void)setToAdd:(NSArray *)arg1 ;
-(NSArray *)toRemove;
-(void)setToRemove:(NSArray *)arg1 ;
@end

