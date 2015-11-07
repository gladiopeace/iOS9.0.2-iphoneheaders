/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iBooks/iBooks-Structs.h>
@class IMConfiguration, IMConfigurationPredicate;

@interface IMConfigurationAdder : NSObject {

	char _addProhibited;
	IMConfiguration* _configuration;
	IMConfigurationPredicate* _predicate;

}

@property (assign,nonatomic,__weak) IMConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) IMConfigurationPredicate * predicate;                //@synthesize predicate=_predicate - In the implementation block
@property (assign,nonatomic) char addProhibited;                                  //@synthesize addProhibited=_addProhibited - In the implementation block
-(void)addFloat:(float)arg1 forKey:(id)arg2 ;
-(void)addWithPredicate:(id)arg1 adder:(/*^block*/id)arg2 ;
-(void)addSize:(CGSize)arg1 forKey:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 predicate:(id)arg2 ;
-(void)setAddProhibited:(char)arg1 ;
-(char)addProhibited;
-(void)addBool:(char)arg1 forKey:(id)arg2 ;
-(void)addInteger:(int)arg1 forKey:(id)arg2 ;
-(void)addPoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(void)addRect:(CGRect)arg1 forKey:(id)arg2 ;
-(void)addEdgeInsets:(UIEdgeInsets)arg1 forKey:(id)arg2 ;
-(void)addString:(id)arg1 forKey:(id)arg2 ;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
-(void)setPredicate:(IMConfigurationPredicate *)arg1 ;
-(IMConfigurationPredicate *)predicate;
-(void)setConfiguration:(IMConfiguration *)arg1 ;
-(IMConfiguration *)configuration;
@end

