/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADEffect.h>

@class OADFill;

@interface OADFillOverlayEffect : OADEffect {

	int mBlendMode;
	OADFill* mFill;

}
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)fill;
-(void)setFill:(id)arg1 ;
-(void)setBlendMode:(int)arg1 ;
-(int)blendMode;
@end

