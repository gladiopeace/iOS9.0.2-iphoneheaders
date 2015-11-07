/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDAction.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class NSString;

@interface DDSendMailAction : DDAction <MFMailComposeViewControllerDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)localizedName;
-(id)viewController;
-(int)interactionType;
-(void)perform;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(id)initWithURL:(id)arg1 result:(DDResultRef)arg2 context:(id)arg3 ;
@end

