/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactFilter.h>

@class NSSet;

@interface CNContactStoreFilter : CNContactFilter {

	char _isServerFilter;
	NSSet* _groupIdentifiers;
	NSSet* _containerIdentifiers;

}

@property (nonatomic,retain) NSSet * groupIdentifiers;                  //@synthesize groupIdentifiers=_groupIdentifiers - In the implementation block
@property (nonatomic,retain) NSSet * containerIdentifiers;              //@synthesize containerIdentifiers=_containerIdentifiers - In the implementation block
@property (nonatomic,readonly) char showsEverything; 
@property (assign,nonatomic) char isServerFilter;                       //@synthesize isServerFilter=_isServerFilter - In the implementation block
-(char)isServerFilter;
-(NSSet *)groupIdentifiers;
-(NSSet *)containerIdentifiers;
-(void)setContainerIdentifiers:(NSSet *)arg1 ;
-(void)setGroupIdentifiers:(NSSet *)arg1 ;
-(void)setIsServerFilter:(char)arg1 ;
-(char)supportsSections;
-(char)showsEverything;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)predicate;
@end

