/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@protocol OS_dispatch_queue;
@class SSXPCConnection, NSObject, NSMutableDictionary, NSArray, NSDictionary, NSString;

@interface SSEntity : NSObject <SSXPCCoding> {

	SSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _localExternalValues;
	NSMutableDictionary* _localValues;
	long long _pid;
	NSArray* _dirtyLocalExternalProperties;
	NSArray* _dirtyLocalProperties;

}

@property (readonly) char exists; 
@property (readonly) long long _persistentIdentifier; 
@property (setter=_setLocalExternalValues:,getter=_localExternalValues,copy) NSDictionary * _localExternalValues; 
@property (setter=_setLocalValues:,getter=_localValues,copy) NSDictionary * _localValues; 
@property (getter=_isManaged,readonly) char _managed; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_existsMessage;
+(long long)_getExternalValuesMessage;
+(long long)_getValueMessage;
+(long long)_setExternalValuesMessage;
+(long long)_setValuesMessage;
-(void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned)arg3 ;
-(id)copyXPCEncoding;
-(char)exists;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)valueForProperty:(id)arg1 ;
-(char)setExternalValuesWithDictionary:(id)arg1 ;
-(id)valueForExternalProperty:(id)arg1 ;
-(char)setValue:(id)arg1 forProperty:(id)arg2 ;
-(char)setValuesWithDictionary:(id)arg1 ;
-(id)_initWithPersistentIdentifier:(long long)arg1 ;
-(void)_becomeManagedOnConnection:(id)arg1 ;
-(char)_isManaged;
-(void)_resetLocalIVars;
-(void)_addCachedExternalValues:(id)arg1 ;
-(void)_addCachedPropertyValues:(id)arg1 ;
-(NSDictionary *)_localExternalValues;
-(void)_setLocalExternalValues:(id)arg1 ;
-(NSDictionary *)_localValues;
-(void)_setLocalValues:(id)arg1 ;
-(void)_setDirtyCachedExternalProperties:(id)arg1 ;
-(void)_setDirtyCachedProperties:(id)arg1 ;
-(void)_getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned)arg3 message:(long long)arg4 ;
-(void)getValues:(id*)arg1 forExternalProperties:(const id*)arg2 count:(unsigned)arg3 ;
-(long long)_persistentIdentifier;
-(void)__addCachedExternalValues:(id)arg1 ;
-(void)__addCachedPropertyValues:(id)arg1 ;
-(void)resetCachedExternalProperties:(const id*)arg1 count:(unsigned)arg2 ;
-(void)resetCachedProperties:(const id*)arg1 count:(unsigned)arg2 ;
@end

