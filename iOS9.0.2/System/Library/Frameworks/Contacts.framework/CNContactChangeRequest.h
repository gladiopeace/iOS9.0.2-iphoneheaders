/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface CNContactChangeRequest : NSObject {

	NSArray* _contacts;
	int _kind;

}

@property (nonatomic,copy,readonly) NSArray * contacts;                        //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contactIdentifiers; 
@property (nonatomic,readonly) int kind;                                       //@synthesize kind=_kind - In the implementation block
+(id)contactChangeRequestWithKind:(int)arg1 contacts:(id)arg2 ;
-(id)initWithKind:(int)arg1 contacts:(id)arg2 ;
-(NSArray *)contactIdentifiers;
-(NSArray *)contacts;
-(void)dealloc;
-(int)kind;
@end

