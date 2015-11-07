/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/OKActionExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface OKAction : NSObject <OKActionExports, NSSecureCoding> {

	double _timestamp;
	CGPoint _location;
	unsigned _state;
	unsigned _touchCount;
	char _shouldCancelCouchPotato;
	char _shouldPropagate;
	char _isInstantaneous;
	unsigned _scope;
	unsigned _platform;
	NSMutableDictionary* _context;
	NSString* _keyPath;

}

@property (assign,nonatomic) double timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) CGPoint location;                                    //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) unsigned state;                                      //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned touchCount;                                 //@synthesize touchCount=_touchCount - In the implementation block
@property (nonatomic,readonly) unsigned platform;                                 //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) char isInstantaneous;                                //@synthesize isInstantaneous=_isInstantaneous - In the implementation block
@property (assign,nonatomic) unsigned scope;                                      //@synthesize scope=_scope - In the implementation block
@property (nonatomic,retain) NSString * keyPath;                                  //@synthesize keyPath=_keyPath - In the implementation block
@property (assign,nonatomic) char shouldPropagate;                                //@synthesize shouldPropagate=_shouldPropagate - In the implementation block
@property (assign,nonatomic) char shouldCancelCouchPotato;                        //@synthesize shouldCancelCouchPotato=_shouldCancelCouchPotato - In the implementation block
+(id)action;
+(char)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)createContext;
+(unsigned)directionFromPoint:(CGPoint)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(double)timestamp;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(NSMutableDictionary *)context;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)setScope:(unsigned)arg1 ;
-(unsigned)scope;
-(CGPoint)location;
-(void)setLocation:(CGPoint)arg1 ;
-(unsigned)touchCount;
-(unsigned)platform;
-(id)initWithLocation:(CGPoint)arg1 touchCount:(unsigned)arg2 context:(id)arg3 ;
-(id)initWithState:(unsigned)arg1 location:(CGPoint)arg2 touchCount:(unsigned)arg3 context:(id)arg4 ;
-(void)convertFromResponder:(id)arg1 toResponder:(id)arg2 ;
-(char)shouldPropagate;
-(void)setShouldPropagate:(char)arg1 ;
-(char)shouldCancelCouchPotato;
-(char)isInstantaneous;
-(void)setIsInstantaneous:(char)arg1 ;
-(void)setShouldCancelCouchPotato:(char)arg1 ;
-(void)setContextObject:(id)arg1 forKey:(id)arg2 ;
-(void)setTouchCount:(unsigned)arg1 ;
@end

