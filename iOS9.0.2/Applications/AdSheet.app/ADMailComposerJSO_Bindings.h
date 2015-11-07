/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class JSValue, NSString, NSArray;


@protocol ADMailComposerJSO_Bindings <JSExport>
@property (nonatomic,retain) JSValue * listener; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,retain) NSArray * toRecipients; 
@optional
-(void)setMessageBody:(id)arg1 isHTML:(char)arg2 __JS_EXPORT_AS__setMessageBody:(id)arg3;

@required
-(void)presentComposer;
-(NSArray *)toRecipients;
-(void)setToRecipients:(id)arg1;
-(void)setAttachments:(id)arg1;
-(void)setSubject:(id)arg1;
-(NSString *)subject;
-(JSValue *)listener;
-(void)setListener:(id)arg1;
-(void)setMessageBody:(id)arg1 isHTML:(char)arg2;

@end

