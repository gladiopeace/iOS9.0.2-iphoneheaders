/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISOperation.h>

@class ISDialog, ISDialogButton, NSArray;

@interface ISDialogOperation : ISOperation {

	ISDialog* _dialog;
	char _performDefaultActions;
	ISDialogButton* _selectedButton;
	NSArray* _textFieldValues;
	id _userNotification;

}

@property (assign) id<ISDialogOperationDelegate> delegate; 
@property (retain) ISDialog * dialog;                                   //@synthesize dialog=_dialog - In the implementation block
@property (assign) char performDefaultActions;                          //@synthesize performDefaultActions=_performDefaultActions - In the implementation block
@property (retain) ISDialogButton * selectedButton;                     //@synthesize selectedButton=_selectedButton - In the implementation block
@property (readonly) NSArray * textFieldValues; 
@property (retain) id userNotification;                                 //@synthesize userNotification=_userNotification - In the implementation block
+(id)operationWithDialog:(id)arg1 ;
+(id)operationWithError:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)_run;
-(void)run;
-(id)userNotification;
-(void)setDialog:(ISDialog *)arg1 ;
-(ISDialog *)dialog;
-(NSArray *)textFieldValues;
-(void)setSelectedButton:(ISDialogButton *)arg1 ;
-(void)setUserNotification:(id)arg1 ;
-(char)performDefaultActions;
-(void)handleButtonSelected:(int)arg1 withResponseDictionary:(id)arg2 ;
-(void)_showUserNotification:(id)arg1 ;
-(void)_waitForUserNotificationResponse:(CFUserNotificationRef)arg1 ;
-(void)_handleResponseForNotification:(CFUserNotificationRef)arg1 responseFlags:(unsigned long)arg2 ;
-(void)setPerformDefaultActions:(char)arg1 ;
-(ISDialogButton *)selectedButton;
@end

