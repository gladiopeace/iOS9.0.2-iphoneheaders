/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <SpringBoard/SBBulletinAlertHandlerRegistry.h>

@protocol SBBulletinAlertHandlerRegistry
@required
-(void)addAlertHandler:(id)arg1 forSection:(id)arg2;

@end


@class NSMutableDictionary, SBAlertItemsSettings, NSString;

@interface SBBulletinAlertHandlerRegistry : NSObject <_UISettingsKeyObserver, SBBulletinAlertHandlerRegistry> {

	NSMutableDictionary* _handlersBySectionID;
	SBAlertItemsSettings* _settings;
	char _disabled;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)alertHandlersForSection:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)addAlertHandler:(id)arg1 forSection:(id)arg2 ;
@end

