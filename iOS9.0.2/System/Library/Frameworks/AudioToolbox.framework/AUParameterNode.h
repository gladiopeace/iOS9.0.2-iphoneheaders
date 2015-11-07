/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AudioToolbox/AudioToolbox-Structs.h>
@class NSString, AUParameterGroup;

@interface AUParameterNode : NSObject {

	NSString* _identifier;
	NSString* _displayName;
	unsigned _indexInGroup;
	AUParameterGroup* _parentNode;
	AUObserverList* _observerList;
	/*^block*/id _impl_implementorValueObserver;
	/*^block*/id _impl_implementorValueProvider;
	/*^block*/id _impl_implementorStringFromValueCallback;
	/*^block*/id _impl_implementorValueFromStringCallback;
	/*^block*/id _impl_implementorDisplayNameWithLengthCallback;

}

@property (nonatomic,copy) id implementorValueObserver; 
@property (nonatomic,copy) id implementorValueProvider; 
@property (nonatomic,copy) id implementorStringFromValueCallback; 
@property (nonatomic,copy) id implementorValueFromStringCallback; 
@property (nonatomic,copy) id implementorDisplayNameWithLengthCallback; 
@property (nonatomic,copy,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath; 
@property (nonatomic,copy,readonly) NSString * displayName;                               //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) unsigned indexInGroup;                                       //@synthesize indexInGroup=_indexInGroup - In the implementation block
@property (assign,nonatomic) AUParameterGroup * parentNode;                               //@synthesize parentNode=_parentNode - In the implementation block
@property (assign,nonatomic) AUObserverList* observerList;                                //@synthesize observerList=_observerList - In the implementation block
@property (nonatomic,copy) id impl_implementorValueObserver;                              //@synthesize impl_implementorValueObserver=_impl_implementorValueObserver - In the implementation block
@property (nonatomic,copy) id impl_implementorValueProvider;                              //@synthesize impl_implementorValueProvider=_impl_implementorValueProvider - In the implementation block
@property (nonatomic,copy) id impl_implementorStringFromValueCallback;                    //@synthesize impl_implementorStringFromValueCallback=_impl_implementorStringFromValueCallback - In the implementation block
@property (nonatomic,copy) id impl_implementorValueFromStringCallback;                    //@synthesize impl_implementorValueFromStringCallback=_impl_implementorValueFromStringCallback - In the implementation block
@property (nonatomic,copy) id impl_implementorDisplayNameWithLengthCallback;              //@synthesize impl_implementorDisplayNameWithLengthCallback=_impl_implementorDisplayNameWithLengthCallback - In the implementation block
-(void)setImplementorValueObserver:(id)arg1 ;
-(void)setImplementorValueProvider:(id)arg1 ;
-(void)setImplementorStringFromValueCallback:(id)arg1 ;
-(void)setImplementorValueFromStringCallback:(id)arg1 ;
-(void)setImplementorDisplayNameWithLengthCallback:(id)arg1 ;
-(void)_deserialize:(CADeserializer*)arg1 ;
-(void)_walkTree:(int)arg1 callback:(/*^block*/id)arg2 ;
-(id)_rootParent;
-(void)_observersChanged:(char)arg1 deltaCount:(int)arg2 ;
-(id)initWithID:(id)arg1 name:(id)arg2 ;
-(id)copyNodeWithOffset:(unsigned long long)arg1 ;
-(void*)tokenByAddingParameterObserver:(/*^block*/id)arg1 ;
-(void*)tokenByAddingParameterRecordingObserver:(/*^block*/id)arg1 ;
-(void)removeParameterObserver:(void*)arg1 ;
-(id)displayNameWithLength:(int)arg1 ;
-(unsigned)indexInGroup;
-(void)setIndexInGroup:(unsigned)arg1 ;
-(AUObserverList*)observerList;
-(void)setObserverList:(AUObserverList*)arg1 ;
-(id)impl_implementorValueObserver;
-(void)setImpl_implementorValueObserver:(id)arg1 ;
-(id)impl_implementorValueProvider;
-(void)setImpl_implementorValueProvider:(id)arg1 ;
-(id)impl_implementorStringFromValueCallback;
-(void)setImpl_implementorStringFromValueCallback:(id)arg1 ;
-(id)impl_implementorValueFromStringCallback;
-(void)setImpl_implementorValueFromStringCallback:(id)arg1 ;
-(id)impl_implementorDisplayNameWithLengthCallback;
-(void)setImpl_implementorDisplayNameWithLengthCallback:(id)arg1 ;
-(id)implementorValueObserver;
-(id)implementorValueProvider;
-(id)implementorStringFromValueCallback;
-(id)implementorValueFromStringCallback;
-(id)implementorDisplayNameWithLengthCallback;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(NSString *)keyPath;
-(AUParameterGroup *)parentNode;
-(char)isGroup;
-(NSString *)displayName;
-(void)_serialize:(CASerializer*)arg1 ;
-(void)setParentNode:(AUParameterGroup *)arg1 ;
@end

