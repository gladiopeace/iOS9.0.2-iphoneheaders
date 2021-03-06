/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMGroupActionChatItem : IMTranscriptChatItem {

	IMHandle* _sender;

}

@property (nonatomic,readonly) long long actionType; 
@property (nonatomic,retain,readonly) IMHandle * sender;              //@synthesize sender=_sender - In the implementation block
-(Class)__ck_chatItemClass;
-(long long)actionType;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IMHandle *)sender;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 ;
@end

