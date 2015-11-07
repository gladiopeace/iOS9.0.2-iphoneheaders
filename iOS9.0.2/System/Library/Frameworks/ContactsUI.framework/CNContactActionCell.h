/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNLabeledCell.h>

@class UILabel, CNTransportButton, CNCardActionGroupItem, CNContactAction;

@interface CNContactActionCell : CNLabeledCell {

	UILabel* _label;
	CNTransportButton* _transportIcon;

}

@property (nonatomic,readonly) CNCardActionGroupItem * actionGroupItem; 
@property (nonatomic,readonly) CNContactAction * action; 
@property (nonatomic,retain) UILabel * label;                                        //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) CNTransportButton * transportIcon;                      //@synthesize transportIcon=_transportIcon - In the implementation block
-(void)setLabelTextAttributes:(id)arg1 ;
-(void)setCardGroupItem:(id)arg1 ;
-(CNTransportButton *)transportIcon;
-(void)setTransportIcon:(CNTransportButton *)arg1 ;
-(CNCardActionGroupItem *)actionGroupItem;
-(id)variableConstraints;
-(float)minCellHeight;
-(CNContactAction *)action;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(id)labelView;
-(char)shouldPerformDefaultAction;
@end
