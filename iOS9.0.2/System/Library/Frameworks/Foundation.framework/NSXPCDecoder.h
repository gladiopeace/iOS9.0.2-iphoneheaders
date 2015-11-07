/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSXPCCoder.h>

@protocol OS_xpc_object;
@class NSObject, NSXPCInterface, NSXPCConnection;

@interface NSXPCDecoder : NSXPCCoder {

	NSObject*<OS_xpc_object> _oolObjects;
	NSXPCInterface* _interface;
	SEL _replyToSelector;
	unsigned long long _genericIndex;
	void* _decoder;
	NSXPCConnection* _connection;
	/*function pointer*/void** _collections[128];
	SCD_Struct_NS84 _rootObject;
	unsigned _collectionPointer;
	id _allowedClassesList[128];
	int _allowedClassesIndex;

}

@property (retain) NSXPCInterface * interface;                 //@synthesize interface=_interface - In the implementation block
@property (assign) SEL replyToSelector;                        //@synthesize replyToSelector=_replyToSelector - In the implementation block
@property (assign) NSXPCConnection * _connection;              //@synthesize connection=_connection - In the implementation block
+(id)_createXPCObjectWithData:(id)arg1 ;
-(id)_decodeArrayOfObjectsForKey:(id)arg1 ;
-(void)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(char)arg3 ;
-(id)allowedClasses;
-(id)decodeXPCObjectOfType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(id)_initWithRootXPCObject:(id)arg1 ;
-(void)setReplyToSelector:(SEL)arg1 ;
-(void)set_connection:(NSXPCConnection *)arg1 ;
-(const char*)_decodeCStringForKey:(id)arg1 ;
-(id)decodeInvocation;
-(SEL)replyToSelector;
-(id)decodeObjectForKey:(id)arg1 ;
-(char)decodeBoolForKey:(id)arg1 ;
-(char)containsValueForKey:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(int)decodeIntForKey:(id)arg1 ;
-(char)allowsKeyedCoding;
-(int)decodeIntegerForKey:(id)arg1 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned*)arg2 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(id)decodeObject;
-(NSXPCConnection *)_connection;
-(NSXPCInterface *)interface;
-(void)setInterface:(NSXPCInterface *)arg1 ;
-(id)decodeXPCObjectForKey:(id)arg1 ;
-(void)finalize;
@end

