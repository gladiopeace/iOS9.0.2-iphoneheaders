/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAStartRequest.h>

@class SAUIDomainObjectPicker, SADomainObject;

@interface SAUIDomainObjectPickerSelection : SAStartRequest

@property (nonatomic,retain) SAUIDomainObjectPicker * domainObjectPicker; 
@property (nonatomic,retain) SADomainObject * selectedItem; 
+(id)domainObjectPickerSelection;
+(id)domainObjectPickerSelectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSelectedItem:(SADomainObject *)arg1 ;
-(SADomainObject *)selectedItem;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIDomainObjectPicker *)domainObjectPicker;
-(void)setDomainObjectPicker:(SAUIDomainObjectPicker *)arg1 ;
@end

