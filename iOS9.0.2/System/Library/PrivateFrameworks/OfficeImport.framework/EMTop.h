/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMTop.h>
#import <libobjc.A.dylib/OIProgressiveReaderDelegate.h>

@class CMArchiveManager, EMState, EMWorkbookMapper, NSString;

@interface EMTop : CMTop <OIProgressiveReaderDelegate> {

	CMArchiveManager* _archiver;
	EMState* _state;
	EMWorkbookMapper* _mapper;
	NSString* _inFileName;
	char _xml;

}
+(void)fillHTMLArchiveForExcelFile:(id)arg1 xmlFlag:(char)arg2 archiver:(id)arg3 ;
+(void)fillHTMLArchiveForExcelData:(id)arg1 fileName:(id)arg2 xmlFlag:(char)arg3 archiver:(id)arg4 ;
-(void)dealloc;
-(void)readFile:(id)arg1 xmlFlag:(char)arg2 archiver:(id)arg3 ;
-(void)readData:(id)arg1 fileName:(id)arg2 xmlFlag:(char)arg3 archiver:(id)arg4 ;
-(void)_streamWorkbook:(id)arg1 ;
-(void)readFile:(id)arg1 orData:(id)arg2 withDataFileName:(id)arg3 xmlFlag:(char)arg4 archiver:(id)arg5 ;
-(void)readerDidStartDocument:(id)arg1 withElementCount:(int)arg2 ;
-(void)readerDidReadElement:(id)arg1 atIndex:(unsigned)arg2 inDocument:(id)arg3 isLastElement:(char)arg4 ;
-(void)readerDidEndDocument:(id)arg1 ;
@end

