/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface VMUDirectedGraph : NSObject <NSCopying> {

	unsigned _nodeCount;
	unsigned _edgeCount;
	unsigned _edgeCapacity;
	unsigned _externalEdges;
	void* _deadNodes;
	unsigned _nextNodeName;
	unsigned _nextEdgeName;
	unsigned* _nodeAdjIndex;
	VMUDirectedGraphEdge* _edges;
	NSDictionary* _additionalProperties;
	unsigned _indexedNodeSpace;
	unsigned _indexedEdges;
	int _insideSearch;
	char _inverted;

}

@property (nonatomic,copy) NSDictionary * additionalProperties;              //@synthesize additionalProperties=_additionalProperties - In the implementation block
@property (nonatomic,readonly) unsigned nodeCount;                           //@synthesize nodeCount=_nodeCount - In the implementation block
@property (nonatomic,readonly) unsigned edgeCount; 
@property (nonatomic,readonly) unsigned nodeNamespaceSize;                   //@synthesize nextNodeName=_nextNodeName - In the implementation block
@property (nonatomic,readonly) unsigned edgeNamespaceSize;                   //@synthesize nextEdgeName=_nextEdgeName - In the implementation block
@property (assign,nonatomic) char inverted; 
+(void*)_copyUnarchived:(id)arg1 length:(unsigned*)arg2 options:(unsigned)arg3 ;
+(id)_archivedBytes:(const void*)arg1 length:(unsigned)arg2 options:(unsigned)arg3 ;
+(id)_archivedObject:(id)arg1 options:(unsigned)arg2 ;
+(id)_unarchivedObject:(id)arg1 options:(unsigned)arg2 ;
-(NSDictionary *)additionalProperties;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setInverted:(char)arg1 ;
-(unsigned)nodeCount;
-(unsigned)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithArchived:(id)arg1 options:(unsigned)arg2 ;
-(void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned)arg2 ;
-(unsigned)nodeNamespaceSize;
-(unsigned)edgeNamespaceSize;
-(void)_adjustAdjacencyMap;
-(id)initWithNodes:(unsigned)arg1 ;
-(void)_internalAddEdgeFromNode:(unsigned)arg1 toNode:(unsigned)arg2 withName:(unsigned)arg3 ;
-(void)_faultDeadNodeMap;
-(void)_removeEdges:(/*^block*/id)arg1 ;
-(void)_renameWithNodeMap:(unsigned*)arg1 nodeNamespace:(unsigned)arg2 edgeMap:(unsigned*)arg3 edgeNamespace:(unsigned)arg4 ;
-(unsigned)enumerateEdgesWithBlock:(/*^block*/id)arg1 ;
-(unsigned)_internalEnumerateEdgesOfNode:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_searchMainLoop:(unsigned)arg1 action:(/*^block*/id)arg2 ;
-(void)removeMarkedNodes:(void*)arg1 ;
-(void)_renormalize;
-(id)initWithPlistRepresentation:(id)arg1 ;
-(id)plistRepresentationWithOptions:(unsigned)arg1 ;
-(unsigned)addNode;
-(unsigned)addEdgeFromNode:(unsigned)arg1 toNode:(unsigned)arg2 ;
-(void*)_deadNodeMap;
-(void)removeMarkedEdges:(void*)arg1 ;
-(unsigned)addGroupNodeForNodes:(const unsigned*)arg1 count:(unsigned)arg2 ;
-(void)ungroupNode:(unsigned)arg1 ;
-(unsigned)enumerateMembersOfGroupNode:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned)parentGroupForNode:(unsigned)arg1 ;
-(unsigned)edgeCount;
-(unsigned)enumerateEdgesOfNode:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)withNodeMarkingMap:(/*^block*/id)arg1 ;
-(void)withEdgeMarkingMap:(/*^block*/id)arg1 ;
-(void)depthFirstSearch:(unsigned)arg1 nodeVisitBlock:(/*^block*/id)arg2 edgeVisitBlock:(/*^block*/id)arg3 ;
-(void)breadthFirstSearch:(unsigned)arg1 nodeVisitBlock:(/*^block*/id)arg2 edgeVisitBlock:(/*^block*/id)arg3 ;
-(void)_dumpAdjacencyList;
-(void)invertEdges;
-(id)subgraphWithMarkedNodes:(void*)arg1 ;
-(id)renormalizedGraph;
-(id)invertedGraph;
-(void)setAdditionalProperties:(NSDictionary *)arg1 ;
-(void)stronglyConnectedComponentSearch:(unsigned)arg1 withRecorder:(/*^block*/id)arg2 ;
-(void)markReachableNodesFromRoots:(void*)arg1 inMap:(void*)arg2 ;
-(id)subgraphWithShortestPathsFromNode:(unsigned)arg1 toNodes:(void*)arg2 ;
-(char)inverted;
@end

