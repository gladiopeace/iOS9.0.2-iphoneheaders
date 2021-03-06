/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@protocol CNPostalAddressEditorDelegate;
@interface CNPostalAddressEditorNavigationController : UINavigationController {

	id<CNPostalAddressEditorDelegate> _addressEditorDelegate;

}

@property (assign,nonatomic,__weak) id<CNPostalAddressEditorDelegate> addressEditorDelegate;              //@synthesize addressEditorDelegate=_addressEditorDelegate - In the implementation block
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 editNames:(char)arg3 ;
-(id<CNPostalAddressEditorDelegate>)addressEditorDelegate;
-(void)doneWithContact:(id)arg1 propertyKey:(id)arg2 ;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 addressDictionary:(id)arg3 label:(id)arg4 ;
-(void)setAddressEditorDelegate:(id<CNPostalAddressEditorDelegate>)arg1 ;
-(id)initWithPropertyKey:(id)arg1 label:(id)arg2 ;
-(void)setTitle:(id)arg1 ;
@end

