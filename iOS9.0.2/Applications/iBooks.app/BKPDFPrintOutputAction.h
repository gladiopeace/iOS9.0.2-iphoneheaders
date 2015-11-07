/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKPrintOutputAction.h>
#import <UIKit/UIPrintInteractionControllerDelegate.h>

@class NSString;

@interface BKPDFPrintOutputAction : BKPrintOutputAction <UIPrintInteractionControllerDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isPrintingAllowedForBook:(id)arg1 ;
-(void)setupPrintInteractionController:(id)arg1 printInfo:(id)arg2 ;
-(char)presentsFromBarButtonItem;
-(void)willPresentPrintInteractionController:(id)arg1 ;
-(void)didCompletePresentingPrintInteractionController:(id)arg1 ;
@end

