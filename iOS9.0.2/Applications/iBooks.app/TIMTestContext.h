/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface TIMTestContext : NSObject {

	NSMutableArray* _contextObjects;
	NSMutableArray* _subContexts;
	Class _currentClass;
	NSArray* _methodNames;
	TIMTestContext* _currentSubContext;
	SEL _currentSelector;

}

@property (nonatomic,retain) NSMutableArray * contextObjects;                 //@synthesize contextObjects=_contextObjects - In the implementation block
@property (nonatomic,retain) NSMutableArray * subContexts;                    //@synthesize subContexts=_subContexts - In the implementation block
@property (assign,nonatomic) Class currentClass;                              //@synthesize currentClass=_currentClass - In the implementation block
@property (nonatomic,retain) NSArray * methodNames;                           //@synthesize methodNames=_methodNames - In the implementation block
@property (nonatomic,retain) TIMTestContext * currentSubContext;              //@synthesize currentSubContext=_currentSubContext - In the implementation block
@property (assign,nonatomic) SEL currentSelector;                             //@synthesize currentSelector=_currentSelector - In the implementation block
+(id)currentMethodName;
+(void)setCurrentContext:(id)arg1 methodName:(id)arg2 ;
+(void)clearCurrentContextAndMethodName;
+(id)testContextWithName:(id)arg1 startBlock:(/*^block*/id)arg2 description:(id)arg3 endBlock:(/*^block*/id)arg4 description:(id)arg5 shouldCleanDescription:(char)arg6 ;
+(id)currentContext;
-(void)appendContextWithName:(id)arg1 startBlock:(/*^block*/id)arg2 description:(id)arg3 endBlock:(/*^block*/id)arg4 description:(id)arg5 shouldCleanDescription:(char)arg6 ;
-(NSMutableArray *)contextObjects;
-(NSMutableArray *)subContexts;
-(NSArray *)methodNames;
-(void)setCurrentSubContext:(TIMTestContext *)arg1 ;
-(id)_addTestMethodsToObject:(Class)arg1 fromMethodNames:(id)arg2 ;
-(void)setCurrentSelector:(SEL)arg1 ;
-(/*^block*/id)testBlock;
-(SEL)currentSelector;
-(id)testNameSuffix;
-(/*^block*/id)endBlock;
-(TIMTestContext *)currentSubContext;
-(void)addContext:(id)arg1 ;
-(void)addSubContexts:(id)arg1 ;
-(id)addTestMethodsToObject:(Class)arg1 fromMethodNames:(id)arg2 ;
-(void)setContextObjects:(NSMutableArray *)arg1 ;
-(void)setSubContexts:(NSMutableArray *)arg1 ;
-(Class)currentClass;
-(void)setCurrentClass:(Class)arg1 ;
-(void)setMethodNames:(NSArray *)arg1 ;
-(id)testName;
-(id)init;
-(id)description;
-(/*^block*/id)startBlock;
@end

