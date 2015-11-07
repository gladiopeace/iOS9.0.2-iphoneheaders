/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSSortDescriptor, NSString;

@interface XBApplicationSnapshotSortDescriptor : NSObject <BSDescriptionProviding> {

	unsigned _key;
	char _ascending;
	/*^block*/id _comparator;

}

@property (assign,nonatomic) unsigned key;                                              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) char ascending;                                            //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,copy) id comparator;                                               //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,retain,readonly) NSSortDescriptor * NSSortDescriptor; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sortDescriptorWithKey:(unsigned)arg1 ascending:(char)arg2 comparator:(/*^block*/id)arg3 ;
+(id)_propertyKeyForSnapshotKey:(unsigned)arg1 overriddenForNil:(char*)arg2 ;
-(id)initWithKey:(unsigned)arg1 ascending:(char)arg2 comparator:(/*^block*/id)arg3 ;
-(char)ascending;
-(id)comparator;
-(void)setComparator:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(unsigned)key;
-(void)setKey:(unsigned)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_stringForKey:(unsigned)arg1 ;
-(NSSortDescriptor *)NSSortDescriptor;
-(void)setAscending:(char)arg1 ;
@end
