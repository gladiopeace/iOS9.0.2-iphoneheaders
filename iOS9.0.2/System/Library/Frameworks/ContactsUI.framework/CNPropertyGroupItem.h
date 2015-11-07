/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNCardGroupItem.h>

@protocol CNPropertyGroupItemDelegate;
@class CNLabeledValue, CNCardPropertyGroup, CNContact, CNContactProperty, NSString, CNContactStore, NSArray, NSURL, CNMutableContact;

@interface CNPropertyGroupItem : CNCardGroupItem {

	char _allowsIMessage;
	char _allowsPhone;
	char _allowsEmail;
	CNLabeledValue* _labeledValue;
	CNCardPropertyGroup* _group;
	CNContact* _contact;
	id<CNPropertyGroupItemDelegate> _delegate;
	CNLabeledValue* _originalLabeledValue;

}

@property (nonatomic,retain) CNLabeledValue * labeledValue;                                //@synthesize labeledValue=_labeledValue - In the implementation block
@property (nonatomic,readonly) CNContactProperty * contactProperty; 
@property (assign,nonatomic,__weak) CNCardPropertyGroup * group;                           //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) NSString * property; 
@property (nonatomic,retain) CNContact * contact;                                          //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (assign,nonatomic,__weak) id<CNPropertyGroupItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char allowsIMessage;                                          //@synthesize allowsIMessage=_allowsIMessage - In the implementation block
@property (assign,nonatomic) char allowsPhone;                                             //@synthesize allowsPhone=_allowsPhone - In the implementation block
@property (assign,nonatomic) char allowsEmail;                                             //@synthesize allowsEmail=_allowsEmail - In the implementation block
@property (nonatomic,readonly) id normalizedValue; 
@property (nonatomic,readonly) NSString * displayValue; 
@property (nonatomic,readonly) NSString * displayLabel; 
@property (nonatomic,readonly) NSString * editingStringValue; 
@property (nonatomic,readonly) NSString * placeholderString; 
@property (nonatomic,readonly) NSArray * supportedLabels; 
@property (nonatomic,readonly) NSURL * defaultActionURL; 
@property (nonatomic,readonly) char modified; 
@property (getter=isSuggested,nonatomic,readonly) char suggested; 
@property (getter=isEmpty,nonatomic,readonly) char empty; 
@property (getter=isReadonly,nonatomic,readonly) char readonly; 
@property (nonatomic,readonly) char canRemove; 
@property (getter=isFavorite,nonatomic,readonly) char favorite; 
@property (nonatomic,retain) CNLabeledValue * originalLabeledValue;                        //@synthesize originalLabeledValue=_originalLabeledValue - In the implementation block
@property (nonatomic,readonly) CNMutableContact * mutableContact; 
+(Class)classForProperty:(id)arg1 ;
+(id)propertyGroupItemWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3 ;
+(id)propertyGroupItemWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3 ;
+(id)emptyValueForLabel:(id)arg1 ;
+(id)newPropertyGroupItemForProperty:(id)arg1 ;
-(id)initWithGroup:(id)arg1 ;
-(char)isReadonly;
-(char)isValidValue:(id)arg1 ;
-(CNLabeledValue *)labeledValue;
-(CNContactProperty *)contactProperty;
-(char)modified;
-(void)updateLabeledValueWithValue:(id)arg1 ;
-(void)mergeItem:(id)arg1 ;
-(char)isEquivalentToItem:(id)arg1 whenEditing:(char)arg2 ;
-(void)saveChangesImmediately:(char)arg1 ;
-(CNContactStore *)contactStore;
-(CNMutableContact *)mutableContact;
-(char)isFavoriteOfType:(int)arg1 ;
-(NSString *)displayValue;
-(void)updateLabeledValueWithLabel:(id)arg1 ;
-(char)canRemove;
-(void)confirmSuggestion;
-(void)setAllowsIMessage:(char)arg1 ;
-(void)setAllowsPhone:(char)arg1 ;
-(void)setAllowsEmail:(char)arg1 ;
-(id)normalizedValue;
-(NSArray *)supportedLabels;
-(NSURL *)defaultActionURL;
-(NSString *)editingStringValue;
-(id)displayStringForValue:(id)arg1 ;
-(char)allowsEmail;
-(char)allowsIMessage;
-(void)setLabeledValue:(CNLabeledValue *)arg1 ;
-(char)isEquivalentToItem:(id)arg1 ;
-(id)bestValue:(id)arg1 ;
-(void)rejectSuggestion;
-(id)valueForDisplayString:(id)arg1 ;
-(id)initWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3 ;
-(id)initWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3 ;
-(id)bestLabel:(id)arg1 ;
-(id)updateWithLabel:(id)arg1 value:(id)arg2 ;
-(CNLabeledValue *)originalLabeledValue;
-(void)_removeSuggestion;
-(char)isValidIdentifier:(id)arg1 ;
-(int)anyContactLegacyIdentifier;
-(int)labeledValueMultiValueIdentifierForChosenSourceContact;
-(char)allowsPhone;
-(void)setOriginalLabeledValue:(CNLabeledValue *)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(CNContact *)contact;
-(char)isFavorite;
-(char)isSuggested;
-(void)setDelegate:(id<CNPropertyGroupItemDelegate>)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id<CNPropertyGroupItemDelegate>)delegate;
-(char)isEmpty;
-(void)setGroup:(CNCardPropertyGroup *)arg1 ;
-(CNCardPropertyGroup *)group;
-(NSString *)placeholderString;
-(NSString *)displayLabel;
-(NSString *)property;
@end

