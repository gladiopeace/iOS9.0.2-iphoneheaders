/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/scrod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <scrod/scrod-Structs.h>
#import <ScreenReaderOutputServer/SCROIOElement.h>
#import <libobjc.A.dylib/SCROIOBluetoothElementProtocol.h>

@class NSString;

@interface MSCRODIOBluetoothElement : SCROIOElement <SCROIOBluetoothElementProtocol> {

	NSString* _bluetoothAddress;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAddress:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)transport;
-(id)bluetoothAddress;
@end

