/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobileMail/MFMessageViewingContextDelegate.h>

@class MFMessageViewingContext, MFMailMessage, MessageContentAreaLayer, NSString;

@interface TransferMessageViewController : UIViewController <MFMessageViewingContextDelegate> {

	MFMessageViewingContext* _messageViewingContext;
	MFMailMessage* _message;

}

@property (nonatomic,retain) MFMailMessage * message;                                          //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) MessageContentAreaLayer * messageContentAreaLayer; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MessageContentAreaLayer *)messageContentAreaLayer;
-(void)dealloc;
-(void)loadView;
-(MFMailMessage *)message;
-(void)setMessage:(MFMailMessage *)arg1 ;
@end

