/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MFComposeRecipientGroup.h>

@class CRRecentContact;

@interface MFRecentComposeRecipientGroup : MFComposeRecipientGroup {

	CRRecentContact* _recentContact;

}

@property (nonatomic,retain,readonly) CRRecentContact * recentContact;              //@synthesize recentContact=_recentContact - In the implementation block
-(id)placeholderName;
-(id)initWithChildren:(id)arg1 displayString:(id)arg2 recentContact:(id)arg3 ;
-(CRRecentContact *)recentContact;
-(void)dealloc;
-(id)label;
-(id)unlocalizedLabel;
@end
