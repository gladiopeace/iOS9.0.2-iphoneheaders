/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNCardGroupItem.h>

@class NSMutableArray, NSArray;

@interface CNCardActionGroupItem : CNCardGroupItem {

	NSMutableArray* _actions;

}

@property (nonatomic,readonly) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
+(id)actionGroupItemWithAction:(id)arg1 ;
+(id)actionGroupItemWithActions:(id)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(id)init;
-(NSArray *)actions;
-(Class)cellClass;
-(void)addAction:(id)arg1 ;
@end

