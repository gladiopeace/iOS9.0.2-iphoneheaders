/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TCXmlStreamWriter.h>

@class NSMutableArray;

@interface TCXmlPrefixStreamWriter : TCXmlStreamWriter {

	NSMutableArray* mStateStack;

}
+(xmlTextWriterRef)createXmlTextWriterAtEntry:(id)arg1 inOutputStream:(id)arg2 isCompressed:(char)arg3 ;
+(xmlTextWriterRef)createNonXmlTextWriterAtEntry:(id)arg1 inOutputStream:(id)arg2 isCompressed:(char)arg3 ;
-(void)dealloc;
-(id)currentState;
-(char)addElement:(id)arg1 ;
-(id)initWithTextWriter:(xmlTextWriterRef)arg1 ;
-(id)pushStateWithElementPrefix:(id)arg1 attributePrefix:(id)arg2 ;
-(void)popState;
-(id)pushState;
-(id)currentElementPrefix;
-(char)startElement:(id)arg1 ;
-(id)currentAttributePrefix;
-(char)writeAttribute:(id)arg1 content:(id)arg2 ;
-(char)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 content:(id)arg3 ;
-(char)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 boolContent:(char)arg3 ;
-(char)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 intContent:(long)arg3 ;
-(char)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 enumContent:(int)arg3 map:(id)arg4 ;
-(char)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 doubleContent:(double)arg3 ;
-(void)pushElementPrefix:(id)arg1 attributePrefix:(id)arg2 ;
-(id)pushStateWithSharedPrefix:(id)arg1 ;
-(char)writeAttribute:(id)arg1 boolContent:(char)arg2 ;
-(char)writeAttribute:(id)arg1 intContent:(long)arg2 ;
-(char)writeAttribute:(id)arg1 unsignedLongContent:(unsigned long)arg2 ;
-(char)writeAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 ;
-(char)writeAttribute:(id)arg1 doubleContent:(double)arg2 ;
-(char)writeValAttributeOnlyElementWithName:(id)arg1 content:(id)arg2 ;
-(char)writeValAttributeOnlyElementWithName:(id)arg1 boolContent:(char)arg2 ;
-(char)writeValAttributeOnlyElementWithName:(id)arg1 intContent:(long)arg2 ;
-(char)writeValAttributeOnlyElementWithName:(id)arg1 enumContent:(int)arg2 map:(id)arg3 ;
-(char)writeValAttributeOnlyElementWithName:(id)arg1 doubleContent:(double)arg2 ;
-(char)startOAElement:(id)arg1 ;
-(char)writeOAAttribute:(id)arg1 content:(id)arg2 ;
-(void)pushOAState;
-(char)writeOAAttribute:(id)arg1 boolContent:(char)arg2 ;
-(char)writeOAAttribute:(id)arg1 intContent:(long)arg2 ;
-(char)writeOAAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 ;
-(char)writeOAAttribute:(id)arg1 doubleContent:(double)arg2 ;
-(char)writeIndexAttribute:(id)arg1 intContent:(unsigned long)arg2 ;
-(void)writeTextString:(id)arg1 forElement:(id)arg2 ;
@end

