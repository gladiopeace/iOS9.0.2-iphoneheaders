/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMNode.h>
#import <libobjc.A.dylib/IKJSDOMEventTarget.h>

@class NSString, IKDOMNodeList, IKDOMDocument, JSManagedValue, NSMutableDictionary, NSHashTable, IKDOMNodeData;

@interface IKDOMNode : IKJSObject <IKJSDOMNode, IKJSDOMEventTarget> {

	xmlNode* _nodePtr;
	int _ITMLID;
	JSManagedValue* _managedSelf;
	JSManagedValue* _managedOwnerDocument;
	JSManagedValue* _managedParent;
	JSManagedValue* _managedChildNodeList;
	NSMutableDictionary* _eventListenersMap;
	NSHashTable* _domObservers;

}

@property (assign,nonatomic) int ITMLID;                                           //@synthesize ITMLID=_ITMLID - In the implementation block
@property (nonatomic,retain,readonly) IKDOMNodeData * jsNodeData; 
@property (nonatomic,retain,readonly) JSManagedValue * managedSelf;                //@synthesize managedSelf=_managedSelf - In the implementation block
@property (nonatomic,retain) JSManagedValue * managedOwnerDocument;                //@synthesize managedOwnerDocument=_managedOwnerDocument - In the implementation block
@property (nonatomic,retain) JSManagedValue * managedParent;                       //@synthesize managedParent=_managedParent - In the implementation block
@property (nonatomic,retain) JSManagedValue * managedChildNodeList;                //@synthesize managedChildNodeList=_managedChildNodeList - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * eventListenersMap;              //@synthesize eventListenersMap=_eventListenersMap - In the implementation block
@property (nonatomic,retain) NSHashTable * domObservers;                           //@synthesize domObservers=_domObservers - In the implementation block
@property (nonatomic,retain,readonly) NSString * nodeName; 
@property (nonatomic,retain) NSString * nodeValue; 
@property (nonatomic,readonly) int nodeType; 
@property (nonatomic,__weak,readonly) IKDOMNode * parentNode; 
@property (nonatomic,retain,readonly) IKDOMNodeList * childNodes; 
@property (nonatomic,retain,readonly) IKDOMNode * firstChild; 
@property (nonatomic,retain,readonly) IKDOMNode * lastChild; 
@property (nonatomic,__weak,readonly) IKDOMNode * previousSibling; 
@property (nonatomic,__weak,readonly) IKDOMNode * nextSibling; 
@property (nonatomic,__weak,readonly) IKDOMDocument * ownerDocument; 
@property (nonatomic,retain) NSString * textContent; 
+(void)handleNodeWillRelease:(xmlNode*)arg1 ;
+(void)handleNodeParentDidChange:(xmlNode*)arg1 ;
+(id)nodeWithAppContext:(id)arg1 nodePtr:(xmlNode*)arg2 ;
+(id)_eventListenerMapKeyForType:(id)arg1 useCapture:(char)arg2 ;
-(id)appendChild:(id)arg1 ;
-(char)isEqualNode:(id)arg1 ;
-(id)cloneNode:(char)arg1 ;
-(char)hasChildNodes;
-(void)dealloc;
-(id)description;
-(IKDOMDocument *)ownerDocument;
-(IKDOMNodeList *)childNodes;
-(IKDOMNode *)lastChild;
-(IKDOMNode *)firstChild;
-(IKDOMNode *)parentNode;
-(IKDOMNode *)previousSibling;
-(id)removeChild:(id)arg1 ;
-(char)isSameNode:(id)arg1 ;
-(id)firstElementChild;
-(int)nodeType;
-(IKDOMNode *)nextSibling;
-(void)enumerateEventListernersForType:(id)arg1 xmlAttribute:(id)arg2 phase:(int)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)nodesForXPath:(id)arg1 error:(id*)arg2 ;
-(xmlNode*)nodePtr;
-(id)initWithAppContext:(id)arg1 xmlNode:(xmlNode*)arg2 ;
-(IKDOMNodeData *)jsNodeData;
-(void)notifyChildrenUpdatedWithUpdatedChildNodes:(id)arg1 ;
-(void)setITMLID:(int)arg1 ;
-(void)notifyUpdated;
-(id)performDOMOperation:(unsigned)arg1 newNode:(id)arg2 refNode:(id)arg3 ;
-(JSManagedValue *)managedSelf;
-(int)ITMLID;
-(id)writeToStringWithError:(id*)arg1 ;
-(void)addDOMObserver:(id)arg1 ;
-(char)_searchEventListener:(id)arg1 key:(id)arg2 destroy:(char)arg3 ;
-(NSMutableDictionary *)eventListenersMap;
-(void)setEventListenersMap:(NSMutableDictionary *)arg1 ;
-(void)_linkManagedObjects;
-(JSManagedValue *)managedParent;
-(JSManagedValue *)managedChildNodeList;
-(void)setManagedChildNodeList:(JSManagedValue *)arg1 ;
-(char)_validateDOMOperation:(unsigned)arg1 newNode:(id)arg2 refNode:(id)arg3 ;
-(void)_unlinkManagedObjects;
-(void)_notifyUpdatesToDOMObservers;
-(xmlNode*)_appendNode:(xmlNode*)arg1 ;
-(xmlNode*)_insertNode:(xmlNode*)arg1 refNode:(xmlNode*)arg2 operation:(unsigned)arg3 ;
-(NSHashTable *)domObservers;
-(void)setDomObservers:(NSHashTable *)arg1 ;
-(void)setManagedParent:(JSManagedValue *)arg1 ;
-(JSManagedValue *)managedOwnerDocument;
-(void)setManagedOwnerDocument:(JSManagedValue *)arg1 ;
-(id)getFeature:(id)arg1 :(id)arg2 ;
-(void)removeDOMObserver:(id)arg1 ;
-(id)children;
-(NSString *)textContent;
-(NSString *)nodeName;
-(id)childNodesAsArray;
-(NSString *)nodeValue;
-(id)lastElementChild;
-(unsigned long)childElementCount;
-(char)dispatchEvent:(id)arg1 ;
-(void)addEventListener:(id)arg1 :(id)arg2 :(char)arg3 ;
-(void)removeEventListener:(id)arg1 :(id)arg2 :(char)arg3 ;
-(void)setNodeValue:(NSString *)arg1 ;
-(void)setTextContent:(NSString *)arg1 ;
-(id)insertBefore:(id)arg1 :(id)arg2 ;
-(id)replaceChild:(id)arg1 :(id)arg2 ;
@end

