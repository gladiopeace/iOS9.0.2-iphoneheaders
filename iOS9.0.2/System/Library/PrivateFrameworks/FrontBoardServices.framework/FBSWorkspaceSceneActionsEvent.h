/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceSceneEvent.h>

@class NSSet;

@interface FBSWorkspaceSceneActionsEvent : FBSWorkspaceSceneEvent {

	NSSet* _actions;

}

@property (nonatomic,copy) NSSet * actions;              //@synthesize actions=_actions - In the implementation block
-(void)setActions:(NSSet *)arg1 ;
-(void)dealloc;
-(NSSet *)actions;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

