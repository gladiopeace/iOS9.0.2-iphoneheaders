/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/ESDObject.h>

@class NSMutableArray;

@interface ESDRoot : ESDObject {

	NSMutableArray* mChildren;

}
-(void)dealloc;
-(id)init;
-(void)addChild:(id)arg1 ;
-(unsigned)childCount;
-(id)childAt:(unsigned)arg1 ;
-(id)initWithEshObject:(EshObject*)arg1 ;
-(EshRoot*)eshRoot;
-(void)writeToWriter:(OcWriterRef)arg1 ;
-(id)initFromReader:(OcReader*)arg1 ;
-(id)pbReferenceWithID:(unsigned long)arg1 ;
-(id)initWithPbState:(id)arg1 ;
@end

