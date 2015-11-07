/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFMessageWebLayerDelegate <NSObject>
@optional
-(float)canvasWidthForWebLayer:(id)arg1;
-(UIEdgeInsets*)basePaddingForWebLayer:(id)arg1;
-(void)messageWebLayer:(id)arg1 didFindBottomReplyRange:(id)arg2 lastQuoteLevel:(unsigned)arg3;

@required
-(char)messageWebLayerShouldUsePadDisplayStyle:(id)arg1;
-(char)messageWebLayerShouldHaveCozyMargins:(id)arg1;
-(void)messageWebLayer:(id)arg1 openURL:(id)arg2;
-(id)messageWebLayer:(id)arg1 attachmentsWithURLs:(id)arg2;
-(void)messageWebLayer:(id)arg1 sizeDidChange:(CGSize)arg2;
-(CGRect*)messageWebLayer:(id)arg1 newFrameForRect:(CGRect)arg2;
-(void)messageWebLayerDidFinishLoading:(id)arg1;
-(void)messageWebLayerDidFinishTweaking:(id)arg1;
-(void)messageWebLayer:(id)arg1 convertNode:(id)arg2 forDocument:(id)arg3;
-(void)messageWebLayerDidConvertNodes:(id)arg1;
-(void)messageWebLayer:(id)arg1 didDrawTileAtBounds:(CGRect)arg2;
-(void)messageWebLayerDidFirstVisuallyNonEmptyLayout:(id)arg1;
-(void)messageWebLayer:(id)arg1 didFailToPaintAttachmentURL:(id)arg2;

@end

