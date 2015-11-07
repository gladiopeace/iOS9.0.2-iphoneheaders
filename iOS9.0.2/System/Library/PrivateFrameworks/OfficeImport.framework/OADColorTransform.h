/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OADColorTransform : NSObject <NSCopying> {

	int mType;

}
+(id)colorByApplyingTransforms:(id)arg1 toColor:(id)arg2 ;
+(float)alphaByApplyingTransforms:(id)arg1 toAlpha:(float)arg2 ;
+(float)applyAlphaTransform:(id)arg1 toAlpha:(float)arg2 ;
+(id)applyExpTransformWithValue:(float)arg1 toColor:(id)arg2 ;
+(id)applyRGBTransform:(id)arg1 toColor:(id)arg2 skipGamma:(BOOL)arg3 ;
+(id)applyHSLTransform:(id)arg1 toColor:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(int)arg1 ;
@end

