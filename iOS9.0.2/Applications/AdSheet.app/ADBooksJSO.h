/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AdSheet/ADJavaScriptObject.h>
#import <AdSheet/ADBooksJSO_Bindings.h>

@class NSMutableDictionary, NSString;

@interface ADBooksJSO : ADJavaScriptObject <ADBooksJSO_Bindings> {

	char _processingRequest;
	NSMutableDictionary* _metadata;
	NSString* _pdfPath;

}

@property (nonatomic,retain) NSMutableDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSString * pdfPath;                            //@synthesize pdfPath=_pdfPath - In the implementation block
@property (assign,nonatomic) char processingRequest;                      //@synthesize processingRequest=_processingRequest - In the implementation block
+(void)initializeInContext:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 impressionController:(id)arg2 ;
-(void)setPdfPath:(NSString *)arg1 ;
-(void)setProcessingRequest:(char)arg1 ;
-(char)processingRequest;
-(void)_previewPDFFile;
-(void)_savePDFData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_requestPDFSave:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)addPDF:(id)arg1 replyTo:(id)arg2 ;
-(NSString *)pdfPath;
-(void)_deliverResult:(int)arg1 ;
-(void)dealloc;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)metadata;
@end

