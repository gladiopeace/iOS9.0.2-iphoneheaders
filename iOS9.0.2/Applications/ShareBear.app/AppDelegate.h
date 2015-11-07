/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/ShareBear.app/ShareBear
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ShareBear/ShareBear-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, NSXPCConnection, NSString;

@interface AppDelegate : UIResponder <UIApplicationDelegate> {

	char _hasValidConnection;
	UIWindow* _window;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) UIWindow * window;                            //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) char hasValidConnection;                      //@synthesize hasValidConnection=_hasValidConnection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)shareHandlerConnection;
-(char)hasValidConnection;
-(void)setHasValidConnection:(char)arg1 ;
-(UIWindow *)window;
-(char)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

