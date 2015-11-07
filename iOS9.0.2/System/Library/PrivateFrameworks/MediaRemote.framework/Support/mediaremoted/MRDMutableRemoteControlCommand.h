/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <mediaremoted/mediaremoted-Structs.h>
#import <mediaremoted/MRDRemoteControlCommand.h>

@class NSData, NSString;

@interface MRDMutableRemoteControlCommand : MRDRemoteControlCommand

@property (assign,nonatomic) unsigned commandType; 
@property (nonatomic,copy) NSData * optionsData; 
@property (assign,nonatomic) MROriginRef origin; 
@property (nonatomic,copy) NSString * senderAppDisplayID; 
@property (nonatomic,copy) NSString * destinationAppDisplayID; 
@property (assign,nonatomic) unsigned appOptions; 
-(void)setAppOptions:(unsigned)arg1 ;
-(void)setOptionsData:(NSData *)arg1 ;
-(void)setSenderAppDisplayID:(NSString *)arg1 ;
-(void)setOrigin:(MROriginRef)arg1 ;
-(void)setDestinationAppDisplayID:(NSString *)arg1 ;
-(void)setCommandType:(unsigned)arg1 ;
@end

