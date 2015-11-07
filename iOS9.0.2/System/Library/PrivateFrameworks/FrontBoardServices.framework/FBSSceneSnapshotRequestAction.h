/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class FBSSceneSnapshotContext;

@interface FBSSceneSnapshotRequestAction : BSAction

@property (nonatomic,readonly) unsigned type; 
@property (nonatomic,retain,readonly) FBSSceneSnapshotContext * context; 
-(unsigned)type;
-(FBSSceneSnapshotContext *)context;
-(id)keyDescriptionForSetting:(unsigned)arg1 ;
-(id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned)arg3 ;
-(id)initWithType:(unsigned)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

