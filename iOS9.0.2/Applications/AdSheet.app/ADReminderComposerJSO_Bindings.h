/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class JSValue;


@protocol ADReminderComposerJSO_Bindings <JSExport>
@property (nonatomic,retain) JSValue * listener; 
@optional
-(void)presentComposerForReminder:(id)arg1 fromRect:(id)arg2 __JS_EXPORT_AS__presentComposerForReminder:(id)arg3;

@required
-(void)presentComposerForReminder:(id)arg1 fromRect:(id)arg2;
-(JSValue *)listener;
-(void)setListener:(id)arg1;

@end

