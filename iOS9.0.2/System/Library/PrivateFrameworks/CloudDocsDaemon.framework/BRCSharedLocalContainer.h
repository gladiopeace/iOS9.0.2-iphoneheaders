/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCLocalContainer.h>

@class NSString, BRCSharedServerZone;

@interface BRCSharedLocalContainer : BRCLocalContainer {

	NSString* _ownerName;

}

@property (nonatomic,readonly) char isSharedContainer; 
@property (nonatomic,readonly) char isPrivateContainer; 
@property (nonatomic,readonly) BRCSharedServerZone * sharedZone; 
-(void)_setup;
-(char)isPrivateContainer;
-(char)isSharedContainer;
-(id)initWithPlist:(id)arg1 containerID:(id)arg2 ownerName:(id)arg3 dbRowID:(id)arg4 db:(id)arg5 session:(id)arg6 ;
-(id)asSharedContainer;
-(id)pathRelativeToRoot;
-(void)setServerZone:(id)arg1 ;
-(BRCSharedServerZone *)sharedZone;
-(id)initForCreationWithContainerID:(id)arg1 ownerName:(id)arg2 dbRowID:(id)arg3 db:(id)arg4 session:(id)arg5 ;
-(id)ownerName;
@end

