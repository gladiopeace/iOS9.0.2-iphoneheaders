/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXRuntime/AXRuntime-Structs.h>
#import <CoreFoundation/NSArray.h>
#import <AXRuntime/AXGroupable.h>

@protocol AXElementGroupGenerator;
@class NSArray, NSHashTable, AXElement, NSString;

@interface AXElementGroup : NSArray <AXGroupable> {

	NSArray* _elementStore;
	char _rootGroup;
	id<AXElementGroupGenerator> _generator;
	int _groupTraits;
	NSHashTable* _groupObservers;
	AXElementGroup* _parentGroup;
	AXElement* _elementCommunity;
	NSString* _label;

}

@property (assign,nonatomic) AXElementGroup * parentGroup;                                 //@synthesize parentGroup=_parentGroup - In the implementation block
@property (assign,getter=isRootGroup,nonatomic) char rootGroup;                            //@synthesize rootGroup=_rootGroup - In the implementation block
@property (nonatomic,retain) AXElement * elementCommunity;                                 //@synthesize elementCommunity=_elementCommunity - In the implementation block
@property (nonatomic,readonly) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) int groupTraits;                                              //@synthesize groupTraits=_groupTraits - In the implementation block
@property (nonatomic,readonly) char canBeGroupedWithOtherGroupables; 
@property (nonatomic,readonly) char canBeReplacedByChildren; 
@property (nonatomic,readonly) char allowsChangingExistingGroupingOfContents; 
@property (nonatomic,readonly) char shouldBeUngrouped; 
@property (nonatomic,readonly) char allowsVisualGroupingOfChildren; 
@property (nonatomic,readonly) unsigned numberOfElements; 
@property (assign,nonatomic) id<AXElementGroupGenerator> generator;                        //@synthesize generator=_generator - In the implementation block
@property (nonatomic,retain) NSHashTable * groupObservers;                                 //@synthesize groupObservers=_groupObservers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect frame; 
+(id)groupWithElements:(id)arg1 label:(id)arg2 ;
+(id)groupWithElements:(id)arg1 ;
+(id)groupWithGenerator:(id)arg1 ;
-(void)setParentGroup:(AXElementGroup *)arg1 ;
-(AXElementGroup *)parentGroup;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(CGRect)frame;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(id)lastChild;
-(id)firstChild;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(char)isGroup;
-(char)allowsChangingExistingGroupingOfContents;
-(char)canBeReplacedByChildren;
-(char)shouldBeUngrouped;
-(int)groupTraits;
-(void)setGroupTraits:(int)arg1 ;
-(char)isKeyboardContainer;
-(char)allowsVisualGroupingOfChildren;
-(char)canBeGroupedWithOtherGroupables;
-(AXElement *)elementCommunity;
-(void)setElementCommunity:(AXElement *)arg1 ;
-(id)highestAncestorGroup;
-(id)keyboardContainer;
-(char)isKeyboardRow;
-(id)firstChildPassingTest:(/*^block*/id)arg1 ;
-(id)descendantsPassingTest:(/*^block*/id)arg1 ;
-(id)firstDescendantPassingTest:(/*^block*/id)arg1 ;
-(id)nextSiblingOfChild:(id)arg1 didWrap:(char*)arg2 ;
-(id)previousSiblingOfChild:(id)arg1 didWrap:(char*)arg2 ;
-(id)groupByRemovingGroupable:(id)arg1 ;
-(void)setRootGroup:(char)arg1 ;
-(id)initWithElements:(id)arg1 label:(id)arg2 ;
-(void)_commonInitWithElements:(id)arg1 label:(id)arg2 generator:(id)arg3 ;
-(void)setGroupObservers:(NSHashTable *)arg1 ;
-(void)unregisterAllGroupObservers;
-(void)_transferStateToGroup:(id)arg1 ;
-(void)_notifyGroupObserversWillTransferStateToGroup:(id)arg1 ;
-(void)_notifyGroupObserversDidTransferStateToGroup:(id)arg1 ;
-(void)_generateGroupsIfNeeded;
-(id)_siblingOfChild:(id)arg1 inDirection:(char)arg2 didWrap:(char*)arg3 ;
-(void)enumerateLeafDescendantsUsingBlock:(/*^block*/id)arg1 ;
-(id)childrenPassingTest:(/*^block*/id)arg1 ;
-(id)ancestorPassingTest:(/*^block*/id)arg1 ;
-(unsigned)numberOfElements;
-(NSHashTable *)groupObservers;
-(id)debugFullDescription;
-(id)_debugDescriptionForTraits;
-(id)_debugFullDescriptionWithIndent:(id)arg1 ;
-(id)groupByPrependingGroupable:(id)arg1 ;
-(id)groupByAppendingGroupable:(id)arg1 ;
-(id)groupByReplacingGroupable:(id)arg1 withGroupable:(id)arg2 ;
-(id)firstChildMatchingItem:(id)arg1 ;
-(id)firstDescendantMatchingItem:(id)arg1 ;
-(id)firstLeafDescendant;
-(id)keyboardContainerRows;
-(id)keyboardRow;
-(void)registerGroupObserver:(id)arg1 ;
-(void)unregisterGroupObserver:(id)arg1 ;
-(id)_debugBriefDescription;
-(char)isRootGroup;
-(void)setGenerator:(id<AXElementGroupGenerator>)arg1 ;
-(id<AXElementGroupGenerator>)generator;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)initWithGenerator:(id)arg1 ;
@end

