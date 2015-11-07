/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SATimerObject, NSString;

@interface SATimerGetCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SATimerObject * timer; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)getCompleted;
+(id)getCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTimer:(SATimerObject *)arg1 ;
-(SATimerObject *)timer;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

