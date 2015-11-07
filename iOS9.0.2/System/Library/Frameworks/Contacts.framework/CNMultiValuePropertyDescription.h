/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPropertyDescription.h>

@class NSArray;

@interface CNMultiValuePropertyDescription : CNPropertyDescription

@property (nonatomic,readonly) Class valueClass; 
@property (nonatomic,readonly) char isSingleValue; 
@property (nonatomic,readonly) char isMultiValue; 
@property (nonatomic,readonly) NSArray * standardLabels; 
@property (nonatomic,readonly) Class labeledValueClass; 
@property (nonatomic,readonly) id plistTransform; 
@property (nonatomic,readonly) id fromPlistTransform; 
-(Class)valueClass;
-(char)isValidValue:(id)arg1 error:(id*)arg2 ;
-(char)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2 ;
-(id)fromPlistTransform;
-(NSArray *)standardLabels;
-(id)stringForIndexingForContact:(id)arg1 ;
-(Class)labeledValueClass;
-(id)plistTransform;
-(char)isValidMultiValueValue:(id)arg1 error:(id*)arg2 ;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(id)CNValueFromABValue:(void*)arg1 ;
-(void)assertValueType:(id)arg1 ;
-(void*)ABMutableMultiValueForABPerson:(void*)arg1 ;
-(unsigned)abPropertyType;
-(void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 ;
-(id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1 ;
-(id)CNLabeledValueLabelFromABMultiValueLabel:(CFStringRef)arg1 ;
-(CFStringRef)ABMultiValueLabelFromCNLabeledValueLabel:(id)arg1 ;
-(id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1 destinationClass:(Class)arg2 settersByABKeys:(id)arg3 ;
-(void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 gettersByABKeys:(id)arg2 ;
-(char)isSingleValue;
-(id)valueWithResetIdentifiers:(id)arg1 ;
-(char)isMultiValue;
@end

