/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AKController;

@interface AKActionController : NSObject {

	AKController* _controller;

}

@property (__weak) AKController * controller;              //@synthesize controller=_controller - In the implementation block
-(id)initWithController:(id)arg1 ;
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
-(void)performActionForSender:(id)arg1 ;
-(char)validateSender:(id)arg1 ;
@end

