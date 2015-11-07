/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CPCopying.h>

@class NSMutableArray, CPDocument, CPPage;

@interface CPObject : NSObject <NSCopying, CPCopying> {

	CPObject* parent;
	NSMutableArray* children;
	CPDocument* document;
	CPPage* page;
	long zOrder;

}
-(unsigned)indexOf:(id)arg1 ;
-(void)remove:(id)arg1 ;
-(void)add:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(void)performSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(id)lastChild;
-(id)firstChild;
-(id)previousSibling;
-(id)document;
-(id)page;
-(void)setPage:(id)arg1 ;
-(void)remove;
-(id)nextSibling;
-(void)setDocument:(id)arg1 ;
-(void)removeAll;
-(long)zOrder;
-(id)copyAndSplitChildrenAtIndex:(unsigned)arg1 ;
-(void)recomputeZOrder;
-(void)updateZOrder:(long)arg1 ;
-(void)add:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)addChildrenOf:(id)arg1 ;
-(id)newTakeChildren;
-(id)newTakeChildrenAmong:(id)arg1 ;
-(void)accept:(id)arg1 ;
-(void)disposeDescendants;
-(id)copyWithoutChildren;
-(id)ancestorOfClass:(Class)arg1 ;
-(id)descendantsOfClass:(Class)arg1 deep:(char)arg2 ;
-(void)descendantsOfClass:(Class)arg1 to:(id)arg2 ;
-(id)descendantsOfClass:(Class)arg1 omitTraversing:(Class)arg2 ;
-(id)firstDescendantOfClass:(Class)arg1 ;
-(id)lastDescendantOfClass:(Class)arg1 ;
-(unsigned)countOfFirstDescendantsOfClass:(Class)arg1 ;
-(void)setZOrder:(long)arg1 ;
-(void)clearCachedInfo;
-(id)firstDescendantsOfClass:(Class)arg1 ;
-(id)initSuper;
-(unsigned)countOfClass:(Class)arg1 ;
-(id)lastSibling;
-(id)firstSibling;
-(void)removeFirstChild;
-(void)removeLastChild;
-(void)promoteChildren;
-(void)childrenOfClass:(Class)arg1 into:(id)arg2 ;
-(id)childrenOfClass:(Class)arg1 ;
-(id)childrenNotOfClass:(Class)arg1 ;
-(void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 last:(char)arg4 ;
-(void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 ;
-(void)mapSafely:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 ;
-(void)map:(SEL)arg1 target:(id)arg2 ;
-(void)map:(SEL)arg1 target:(id)arg2 last:(char)arg3 ;
-(id)descendantsOfClass:(Class)arg1 ;
-(id)shallowDescendantsOfClass:(Class)arg1 ;
-(id)childAtIndex:(unsigned)arg1 ;
-(id)parent;
-(id)children;
-(void)setParent:(id)arg1 ;
-(void)addChildren:(id)arg1 ;
-(int)depth;
@end

