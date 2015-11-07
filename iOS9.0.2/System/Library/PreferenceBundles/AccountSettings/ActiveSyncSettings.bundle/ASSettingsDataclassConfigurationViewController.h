/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccessUI/DASettingsDataclassConfigurationViewController.h>
#import <libobjc.A.dylib/DAOofResponseDelegate.h>

@class UIView, PSSpecifier, DAOofSettingsInfo, DAOofParams;

@interface ASSettingsDataclassConfigurationViewController : DASettingsDataclassConfigurationViewController <DAOofResponseDelegate> {

	char _outOfOfficeEnabled;
	UIView* _originalAccessoryView;
	PSSpecifier* _outOfOfficeSpecifier;
	DAOofSettingsInfo* _DASettingsInfo;
	DAOofParams* _serverOutOfOfficeInformation;
	unsigned _numberOfRetriedFetchingOutOfOfficeCounter;

}

@property (nonatomic,retain) UIView * originalAccessoryView;                                  //@synthesize originalAccessoryView=_originalAccessoryView - In the implementation block
@property (nonatomic,retain) PSSpecifier * outOfOfficeSpecifier;                              //@synthesize outOfOfficeSpecifier=_outOfOfficeSpecifier - In the implementation block
@property (nonatomic,retain) DAOofSettingsInfo * DASettingsInfo;                              //@synthesize DASettingsInfo=_DASettingsInfo - In the implementation block
@property (nonatomic,retain) DAOofParams * serverOutOfOfficeInformation;                      //@synthesize serverOutOfOfficeInformation=_serverOutOfOfficeInformation - In the implementation block
@property (assign,nonatomic) char outOfOfficeEnabled;                                         //@synthesize outOfOfficeEnabled=_outOfOfficeEnabled - In the implementation block
@property (assign,nonatomic) unsigned numberOfRetriedFetchingOutOfOfficeCounter;              //@synthesize numberOfRetriedFetchingOutOfOfficeCounter=_numberOfRetriedFetchingOutOfOfficeCounter - In the implementation block
+(char)isHotmailAccount;
-(id)specifiers;
-(void)viewWillAppear:(char)arg1 ;
-(void)setAccountIntegerProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountIntegerPropertyWithSpecifier:(id)arg1 ;
-(void)fetchingOutOfOfficeState;
-(void)saveOutOfOfficeData:(id)arg1 ;
-(id)outOfOfficeEnabled:(id)arg1 ;
-(void)setOutOfOfficeSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)outOfOfficeSpecifier;
-(void)_purgeDownloadedMailForAccount;
-(DAOofParams *)serverOutOfOfficeInformation;
-(void)setOutOfOfficeEnabled:(char)arg1 ;
-(unsigned)numberOfRetriedFetchingOutOfOfficeCounter;
-(void)setNumberOfRetriedFetchingOutOfOfficeCounter:(unsigned)arg1 ;
-(void)setServerOutOfOfficeInformation:(DAOofParams *)arg1 ;
-(void)updateOutOfOfficeSpecifier;
-(void)setDASettingsInfo:(DAOofSettingsInfo *)arg1 ;
-(DAOofSettingsInfo *)DASettingsInfo;
-(char)outOfOfficeEnabled;
-(void)oofRequestInfo:(id)arg1 finishedWithResult:(id)arg2 error:(id)arg3 ;
-(id)accountDescriptionForFirstTimeSetup;
-(id)numFoldersToPushString:(id)arg1 ;
-(Class)accountInfoControllerClass;
-(id)otherSpecifiers;
-(void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(UIView *)originalAccessoryView;
-(void)setOriginalAccessoryView:(UIView *)arg1 ;
@end

