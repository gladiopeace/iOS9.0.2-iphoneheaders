/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/_UIDocumentPickerExtensionViewController.h>

@class NSURL, NSArray, NSString;

@interface UIDocumentPickerExtensionViewController : UIViewController <_UIDocumentPickerExtensionViewController> {

	unsigned _documentPickerMode;
	NSURL* _originalURL;
	NSArray* _validTypes;
	NSString* _providerIdentifier;
	NSURL* _documentStorageURL;

}

@property (assign,nonatomic) unsigned documentPickerMode;              //@synthesize documentPickerMode=_documentPickerMode - In the implementation block
@property (nonatomic,copy) NSURL * originalURL;                        //@synthesize originalURL=_originalURL - In the implementation block
@property (nonatomic,copy) NSArray * validTypes;                       //@synthesize validTypes=_validTypes - In the implementation block
@property (nonatomic,copy) NSString * providerIdentifier;              //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * documentStorageURL;                 //@synthesize documentStorageURL=_documentStorageURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)_setTintColor:(id)arg1 ;
-(unsigned)documentPickerMode;
-(void)_setPickableTypes:(id)arg1 ;
-(void)_setPickerMode:(unsigned)arg1 ;
-(void)_setUploadURLWrapper:(id)arg1 ;
-(void)_documentPickerDidDismiss;
-(void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSURL *)documentStorageURL;
-(void)_setUploadURL:(id)arg1 ;
-(void)_setDocumentStorageURL:(id)arg1 ;
-(void)_setProviderIdentifier:(id)arg1 ;
-(void)prepareForPresentationInMode:(unsigned)arg1 ;
-(void)dismissGrantingAccessToURL:(id)arg1 ;
-(void)prepareForDocumentSelectionInMode:(unsigned)arg1 ;
-(NSURL *)originalURL;
-(NSArray *)validTypes;
-(NSString *)providerIdentifier;
@end

