/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@protocol EKEventAttachmentCellControllerDelegate;
@class EKEventAttachmentCell, EKAttachment, NSString;

@interface EKEventAttachmentCellController : NSObject <UIDocumentInteractionControllerDelegate> {

	id _downloadID;
	EKEventAttachmentCell* _cell;
	char _sourceIsManaged;
	EKAttachment* _attachment;
	id<EKEventAttachmentCellControllerDelegate> _delegate;

}

@property (readonly) EKEventAttachmentCell * cell;                                                     //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) EKAttachment * attachment;                                                //@synthesize attachment=_attachment - In the implementation block
@property (assign,nonatomic,__weak) id<EKEventAttachmentCellControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char sourceIsManaged;                                                     //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellControllersForAttachments:(id)arg1 givenExistingControllers:(id)arg2 ;
+(char)_attachmentIsViewable:(id)arg1 ;
-(void)cellSelected;
-(void)_clearDownloadID;
-(void)_presentPreviewWithURL:(id)arg1 filename:(id)arg2 ;
-(id)_downloadProgressStringWithDownloadedBytes:(id)arg1 outOfTotalBytes:(id)arg2 ;
-(void)_presentPreviewOnMainThreadWithInfo:(id)arg1 ;
-(void)tearDown;
-(void)setDelegate:(id<EKEventAttachmentCellControllerDelegate>)arg1 ;
-(id<EKEventAttachmentCellControllerDelegate>)delegate;
-(EKEventAttachmentCell *)cell;
-(id)initWithAttachment:(id)arg1 ;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1 ;
-(id)documentInteractionControllerViewForPreview:(id)arg1 ;
-(char)sourceIsManaged;
-(void)documentInteractionControllerWillEndPreview:(id)arg1 ;
-(void)setSourceIsManaged:(char)arg1 ;
-(void)setAttachment:(EKAttachment *)arg1 ;
-(EKAttachment *)attachment;
@end

