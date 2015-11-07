/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/SetupChoiceController.h>

@class BuddyCloudConfigController, NSError, UILabel, BFFLinkLabelFooterView, SetupChoice, UINavigationController, BuddyCloudConfigAboutConfigurationContainerController;

@interface BuddyCloudConfigDisclosureViewController : SetupChoiceController {

	char _isMandatory;
	BuddyCloudConfigController* _configController;
	NSError* _lastRetrievalError;
	UILabel* _disclosureLabel;
	BFFLinkLabelFooterView* _footer;
	SetupChoice* _acceptChoice;
	SetupChoice* _skipChoice;
	UINavigationController* _aboutController;
	BuddyCloudConfigAboutConfigurationContainerController* _aboutConfigurationContainerController;

}

@property (assign,nonatomic,__weak) BuddyCloudConfigController * configController;                                                       //@synthesize configController=_configController - In the implementation block
@property (nonatomic,retain) NSError * lastRetrievalError;                                                                               //@synthesize lastRetrievalError=_lastRetrievalError - In the implementation block
@property (nonatomic,retain) UILabel * disclosureLabel;                                                                                  //@synthesize disclosureLabel=_disclosureLabel - In the implementation block
@property (nonatomic,retain) BFFLinkLabelFooterView * footer;                                                                            //@synthesize footer=_footer - In the implementation block
@property (nonatomic,retain) SetupChoice * acceptChoice;                                                                                 //@synthesize acceptChoice=_acceptChoice - In the implementation block
@property (nonatomic,retain) SetupChoice * skipChoice;                                                                                   //@synthesize skipChoice=_skipChoice - In the implementation block
@property (assign,nonatomic) char isMandatory;                                                                                           //@synthesize isMandatory=_isMandatory - In the implementation block
@property (nonatomic,retain) UINavigationController * aboutController;                                                                   //@synthesize aboutController=_aboutController - In the implementation block
@property (nonatomic,retain) BuddyCloudConfigAboutConfigurationContainerController * aboutConfigurationContainerController;              //@synthesize aboutConfigurationContainerController=_aboutConfigurationContainerController - In the implementation block
-(void)setConfigController:(BuddyCloudConfigController *)arg1 ;
-(void)setLastRetrievalError:(NSError *)arg1 ;
-(BuddyCloudConfigController *)configController;
-(UILabel *)disclosureLabel;
-(void)_setupForCloudConfigurationState;
-(NSError *)lastRetrievalError;
-(SetupChoice *)acceptChoice;
-(SetupChoice *)skipChoice;
-(BuddyCloudConfigAboutConfigurationContainerController *)aboutConfigurationContainerController;
-(void)showAboutConfiguration;
-(void)_retrieveEnterpriseConfiguration;
-(UINavigationController *)aboutController;
-(void)setDisclosureLabel:(UILabel *)arg1 ;
-(void)setAcceptChoice:(SetupChoice *)arg1 ;
-(void)setSkipChoice:(SetupChoice *)arg1 ;
-(char)isMandatory;
-(void)setIsMandatory:(char)arg1 ;
-(void)setAboutController:(UINavigationController *)arg1 ;
-(void)setAboutConfigurationContainerController:(BuddyCloudConfigAboutConfigurationContainerController *)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(BFFLinkLabelFooterView *)footer;
-(void)setFooter:(BFFLinkLabelFooterView *)arg1 ;
-(void)controllerDone;
@end

