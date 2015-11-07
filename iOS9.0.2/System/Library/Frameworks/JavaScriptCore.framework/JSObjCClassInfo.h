/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@class JSContext;

@interface JSObjCClassInfo : NSObject {

	JSContext* m_context;
	Class m_class;
	BOOL m_block;
	OpaqueJSClass* m_classRef;
	Weak<JSC::JSObject>* m_prototype;
	Weak<JSC::JSObject>* m_constructor;

}
-(JSObject*)prototype;
-(pair<JSC::JSObject *, JSC::JSObject *>*)allocateConstructorAndPrototype;
-(id)initWithContext:(id)arg1 forClass:(Class)arg2 ;
-(JSObject*)wrapperForObject:(id)arg1 ;
-(JSObject*)constructor;
-(void)dealloc;
@end

