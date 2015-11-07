/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSEditableTableCell.h>

@class NSString;

@interface PHSettingsNumberCell : PSEditableTableCell {

	NSString* _previouslySavedValue;

}

@property (retain) NSString * previouslySavedValue;              //@synthesize previouslySavedValue=_previouslySavedValue - In the implementation block
-(void)dealloc;
-(NSString *)previouslySavedValue;
-(char)_valueDifferentFromPreviouslySavedValue;
-(void)setPreviouslySavedValue:(NSString *)arg1 ;
-(void)saveNumberValue;
-(void)endEditingAndSave;
@end

