/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CALayerHost : CALayer

@property (assign) unsigned contextId; 
@property (assign) char inheritsSecurity; 
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(char)_hasRenderLayerSubclass;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(unsigned)contextId;
-(void)setContextId:(unsigned)arg1 ;
-(void)setInheritsSecurity:(char)arg1 ;
-(char)inheritsSecurity;
@end

