/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface CKDPLocale : PBCodable <NSCopying> {

	NSString* _activeKeyboard;
	NSMutableArray* _enabledKeyboards;
	NSString* _languageCode;
	NSString* _regionCode;

}

@property (nonatomic,readonly) char hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                        //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) char hasRegionCode; 
@property (nonatomic,retain) NSString * regionCode;                          //@synthesize regionCode=_regionCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * enabledKeyboards;              //@synthesize enabledKeyboards=_enabledKeyboards - In the implementation block
@property (nonatomic,readonly) char hasActiveKeyboard; 
@property (nonatomic,retain) NSString * activeKeyboard;                      //@synthesize activeKeyboard=_activeKeyboard - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)activeKeyboard;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)languageCode;
-(NSString *)regionCode;
-(void)setRegionCode:(NSString *)arg1 ;
-(NSMutableArray *)enabledKeyboards;
-(void)addEnabledKeyboards:(id)arg1 ;
-(unsigned)enabledKeyboardsCount;
-(void)clearEnabledKeyboards;
-(id)enabledKeyboardsAtIndex:(unsigned)arg1 ;
-(void)setActiveKeyboard:(NSString *)arg1 ;
-(char)hasRegionCode;
-(char)hasActiveKeyboard;
-(void)setEnabledKeyboards:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(char)hasLanguageCode;
-(char)readFrom:(id)arg1 ;
@end

