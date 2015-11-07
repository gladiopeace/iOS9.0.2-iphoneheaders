/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolDOMDomainEventDispatcher : NSObject {

	AugmentableInspectorController* _controller;

}
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
-(void)documentUpdated;
-(void)setChildNodesWithParentId:(int)arg1 nodes:(id)arg2 ;
-(void)characterDataModifiedWithNodeId:(int)arg1 characterData:(id)arg2 ;
-(void)childNodeRemovedWithParentNodeId:(int)arg1 nodeId:(int)arg2 ;
-(void)attributeRemovedWithNodeId:(int)arg1 name:(id)arg2 ;
-(void)attributeModifiedWithNodeId:(int)arg1 name:(id)arg2 value:(id)arg3 ;
-(void)inlineStyleInvalidatedWithNodeIds:(id)arg1 ;
-(void)childNodeInsertedWithParentNodeId:(int)arg1 previousNodeId:(int)arg2 node:(id)arg3 ;
-(void)childNodeCountUpdatedWithNodeId:(int)arg1 childNodeCount:(int)arg2 ;
-(void)shadowRootPushedWithHostId:(int)arg1 root:(id)arg2 ;
-(void)shadowRootPoppedWithHostId:(int)arg1 rootId:(int)arg2 ;
@end

