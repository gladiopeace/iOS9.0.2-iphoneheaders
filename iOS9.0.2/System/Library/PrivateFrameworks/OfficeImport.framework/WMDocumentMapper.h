/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>
#import <libobjc.A.dylib/CMMapperRoot.h>

@class CMArchiveManager, WDDocument, NSString;

@interface WMDocumentMapper : CMMapper <CMMapperRoot> {

	CMArchiveManager* mArchiver;
	WDDocument* wDom;
	NSString* mFileName;

}
-(void)dealloc;
-(float)topMargin;
-(float)rightMargin;
-(id)blipAtIndex:(unsigned)arg1 ;
-(int)defaultTabWidth;
-(CGSize)pageSizeForDevice;
-(CGSize)contentSizeForDevice;
-(float)leftMargin;
-(float)headerMargin;
-(float)bottomMargin;
-(id)documentTitle;
-(void)mapDefaultCssStylesAt:(id)arg1 ;
-(char)hasSessionBreakAtIndex:(unsigned)arg1 ;
-(id)styleMatrix;
-(id)fileName;
-(id)archiver;
-(id)initWithWDom:(id)arg1 archiver:(id)arg2 ;
-(void)setFileName:(id)arg1 ;
-(void)mapWithState:(id)arg1 ;
@end

