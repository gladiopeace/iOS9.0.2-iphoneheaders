/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OADClient, OADDrawableContainer;
#import <OfficeImport/OfficeImport-Structs.h>
@class OADDrawableProperties;

@interface OADDrawable : NSObject {

	char mHidden;
	unsigned long mId;
	unsigned long mAltId;
	OADDrawableProperties* mDrawableProperties;
	id<OADClient> mClientData;
	OADDrawable*<OADDrawableContainer> mParent;

}
+(unsigned long)generateOADDrawableId:(id)arg1 ;
-(void)dealloc;
-(void)setHidden:(char)arg1 ;
-(id)description;
-(char)hidden;
-(id)clientData;
-(unsigned long)id;
-(id)parent;
-(id)drawableProperties;
-(void)setParent:(id)arg1 ;
-(void)setClientData:(id)arg1 ;
-(void)setId:(unsigned long)arg1 ;
-(void)setAltId:(unsigned long)arg1 ;
-(void)setDrawableProperties:(id)arg1 ;
-(unsigned long)altId;
-(id)ensureClientDataOfClass:(Class)arg1 ;
-(id)createOrientedBoundsWithBounds:(CGRect)arg1 ;
-(id)initWithPropertiesClass:(Class)arg1 ;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
-(id)createWordClientDataWithTextType:(int)arg1 ;
@end

