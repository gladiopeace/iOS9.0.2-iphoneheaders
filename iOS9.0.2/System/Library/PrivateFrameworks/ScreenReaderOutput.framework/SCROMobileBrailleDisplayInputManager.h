/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
#import <libobjc.A.dylib/SCROBrailleDisplayInputManagerProtocol.h>

@class NSMutableDictionary, NSSet, NSBundle, NSArray, NSString;

@interface SCROMobileBrailleDisplayInputManager : NSObject <SCROBrailleDisplayInputManagerProtocol> {

	NSMutableDictionary* _displayInfoDict;
	NSSet* _brailleKeys;
	NSBundle* _bundle;
	NSArray* _sixDotCommands;
	NSArray* _eightDotCommands;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(void)dealloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_bundle;
-(id)_commandsFromBrailleInputMode:(int)arg1 ;
-(id)_sixDotCommands;
-(id)_eightDotCommands;
-(id)inputIdentifierAtIndex:(unsigned)arg1 forDisplayWithToken:(long)arg2 ;
-(id)buttonNamesForInputIdentifier:(id)arg1 forDisplayWithToken:(long)arg2 ;
-(void)configureWithDriverConfiguration:(id)arg1 ;
-(id)commandForBrailleKey:(id)arg1 ;
-(id)driverIdentifierForDisplayWithToken:(long)arg1 ;
-(id)modelIdentifierForDisplayWithToken:(long)arg1 ;
-(unsigned)countForDisplayWithToken:(long)arg1 ;
-(id)commandAtIndex:(unsigned)arg1 forDisplayWithToken:(long)arg2 ;
-(id)buttonNamesAtIndex:(unsigned)arg1 forDisplayWithToken:(long)arg2 ;
@end

