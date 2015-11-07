/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@interface _CUIPDFRendition : CUIThemeRendition {

	CGPDFDocumentRef _pdfDocument;

}
-(void)dealloc;
-(CGPDFDocumentRef)pdfDocument;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(int)arg3 ;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(CGImageRef)createImageFromPDFRenditionWithScale:(float)arg1 ;
@end

