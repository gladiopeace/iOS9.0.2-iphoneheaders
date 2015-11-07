/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNLabeledCell.h>

@protocol CNPropertyCellDelegate, CNPresenterDelegate;
@class UIResponder, CNPropertyGroupItem;

@interface CNPropertyCell : CNLabeledCell {

	char _allowsEditing;
	char _ignoreSuggested;
	char _forceSuggested;
	id _property;
	UIResponder* _firstResponderItem;
	float _labelWidth;
	id<CNPropertyCellDelegate> _delegate;
	id<CNPresenterDelegate> _presentingDelegate;

}

@property (assign,nonatomic,__weak) id property;                                             //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) CNPropertyGroupItem * propertyItem; 
@property (nonatomic,readonly) UIResponder * firstResponderItem;                             //@synthesize firstResponderItem=_firstResponderItem - In the implementation block
@property (assign,nonatomic) char allowsEditing;                                             //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) char ignoreSuggested;                                           //@synthesize ignoreSuggested=_ignoreSuggested - In the implementation block
@property (assign,nonatomic) char forceSuggested;                                            //@synthesize forceSuggested=_forceSuggested - In the implementation block
@property (getter=isSuggested,nonatomic,readonly) char suggested; 
@property (assign,nonatomic) float labelWidth;                                               //@synthesize labelWidth=_labelWidth - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNPresenterDelegate> presentingDelegate;              //@synthesize presentingDelegate=_presentingDelegate - In the implementation block
-(void)performDefaultAction;
-(id<CNPresenterDelegate>)presentingDelegate;
-(void)setPresentingDelegate:(id<CNPresenterDelegate>)arg1 ;
-(CNPropertyGroupItem *)propertyItem;
-(void)setCardGroupItem:(id)arg1 ;
-(void)performAccessoryAction;
-(UIResponder *)firstResponderItem;
-(void)setIgnoreSuggested:(char)arg1 ;
-(void)updateWithPropertyItem:(id)arg1 ;
-(void)setForceSuggested:(char)arg1 ;
-(void)setLabelWidth:(float)arg1 ;
-(char)forceSuggested;
-(char)ignoreSuggested;
-(void)updateValueWithPropertyItem:(id)arg1 ;
-(id)valueString;
-(void)setPropertyItem:(CNPropertyGroupItem *)arg1 ;
-(float)labelWidth;
-(void)setProperty:(id)arg1 ;
-(char)isSuggested;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<CNPropertyCellDelegate>)delegate;
-(void)copy:(id)arg1 ;
-(char)allowsEditing;
-(void)setAllowsEditing:(char)arg1 ;
-(id)labelString;
-(id)property;
@end

