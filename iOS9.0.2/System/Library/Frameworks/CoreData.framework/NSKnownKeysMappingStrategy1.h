/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSKnownKeysMappingStrategy.h>

@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {

	int _cd_rc;
	void* _table;
	unsigned long _length;
	id _reserved1;
	id* _keys;

}
+(char)accessInstanceVariablesDirectly;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
+(void)initialize;
-(id)initForKeys:(id*)arg1 count:(unsigned)arg2 ;
-(CFArrayRef)_makeBranchTableForKeys:(const char**)arg1 count:(unsigned long)arg2 ;
-(void)_coreCreationForKeys:(const id*)arg1 count:(unsigned long)arg2 ;
-(void)_coreDealloc:(char)arg1 ;
-(Class)classForArchiver;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned)retainCount;
-(unsigned)hash;
-(id)description;
-(unsigned)length;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(char)_isDeallocating;
-(id*)keys;
-(char)_tryRetain;
-(id)initForKeys:(id)arg1 ;
-(unsigned)indexForKey:(id)arg1 ;
-(unsigned)fastIndexForKnownKey:(id)arg1 ;
@end

