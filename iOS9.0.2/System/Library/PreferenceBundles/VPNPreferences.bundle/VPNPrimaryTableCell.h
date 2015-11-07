/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSString, UILabel, NSMutableString;

@interface VPNPrimaryTableCell : PSTableCell {

	char _disabled;
	NSString* _alert;
	NSString* _subtitle;
	NSString* _status;
	UILabel* _specialStatusLabel;
	NSMutableString* _detailText;

}

@property (retain) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (retain) NSString * status;                                   //@synthesize status=_status - In the implementation block
@property (retain) NSString * alert;                                    //@synthesize alert=_alert - In the implementation block
@property (assign) char disabled;                                       //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,retain) UILabel * specialStatusLabel;              //@synthesize specialStatusLabel=_specialStatusLabel - In the implementation block
@property (retain) NSMutableString * detailText;                        //@synthesize detailText=_detailText - In the implementation block
-(void)setDetailText:(NSMutableString *)arg1 ;
-(NSMutableString *)detailText;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)layoutSubviews;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(char)disabled;
-(void)setDisabled:(char)arg1 ;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(UILabel *)specialStatusLabel;
-(void)setSpecialStatusLabel:(UILabel *)arg1 ;
-(NSString *)alert;
-(void)setAlert:(NSString *)arg1 ;
@end

