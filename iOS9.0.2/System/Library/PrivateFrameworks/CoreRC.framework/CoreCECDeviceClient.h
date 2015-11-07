/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreCECDevice.h>

@interface CoreCECDeviceClient : CoreCECDevice
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(char)refreshProperties:(id)arg1 ofDevice:(id)arg2 error:(id*)arg3 ;
-(char)deckControlSetDeckStatus:(unsigned)arg1 error:(id*)arg2 ;
-(char)deckControlCommandWithMode:(unsigned)arg1 target:(id)arg2 error:(id*)arg3 ;
-(char)deckControlPlayWithMode:(unsigned)arg1 target:(id)arg2 error:(id*)arg3 ;
-(char)deckControlRefreshStatus:(id)arg1 requestType:(unsigned)arg2 error:(id*)arg3 ;
-(char)makeActiveSourceWithTVMenus:(char)arg1 error:(id*)arg2 ;
-(char)performStandbyWithTargetDevice:(id)arg1 error:(id*)arg2 ;
-(char)refreshDevices:(id*)arg1 ;
-(char)requestActiveSource:(id*)arg1 ;
-(char)resignActiveSource:(id*)arg1 ;
-(char)setSystemAudioControlEnabled:(char)arg1 error:(id*)arg2 ;
-(char)systemAudioModeRequest:(unsigned)arg1 error:(id*)arg2 ;
-(char)setPowerStatus:(unsigned)arg1 error:(id*)arg2 ;
@end

