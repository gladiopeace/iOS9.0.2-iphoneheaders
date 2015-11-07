/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/Plugins/ChatKitAssistant.assistantBundle/ChatKitAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASmsSearch.h>
#import <Accessibility/AFServiceCommand.h>

@class NSString;

@interface CKAssistantSearch : SASmsSearch <AFServiceCommand>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_perform;
-(id)abValuesFromPersonInURL:(id)arg1 forProperty:(int)arg2 ;
-(id)personFromRawAddress:(id)arg1 ;
-(id)_validate;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

