/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <ContactsUI/CNContactNavigationController.h>
#import <libobjc.A.dylib/CNContactNavigationControllerDelegate.h>
#import <FaceTime/PhoneTabViewController.h>

@protocol PHContactsControllerDelegate;
@class NSString, CNContact;

@interface PHContactsViewController : CNContactNavigationController <CNContactNavigationControllerDelegate, PhoneTabViewController> {

	char _disableContactsWithoutHandles;
	char _shouldFetchTelephoneNumber;
	id<PHContactsControllerDelegate> _contactsControllerDelegate;
	int _style;
	NSString* _telephoneNumber;

}

@property (assign,nonatomic) char disableContactsWithoutHandles;                                       //@synthesize disableContactsWithoutHandles=_disableContactsWithoutHandles - In the implementation block
@property (assign,nonatomic) id<PHContactsControllerDelegate> contactsControllerDelegate;              //@synthesize contactsControllerDelegate=_contactsControllerDelegate - In the implementation block
@property (assign) int style;                                                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) char shouldFetchTelephoneNumber;                                          //@synthesize shouldFetchTelephoneNumber=_shouldFetchTelephoneNumber - In the implementation block
@property (nonatomic,copy) NSString * telephoneNumber;                                                 //@synthesize telephoneNumber=_telephoneNumber - In the implementation block
@property (readonly) char shouldSaveAndRestoreState; 
@property (retain) CNContact * savedPerson; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)tabBarSystemItem;
+(id)tabBarIconName;
+(int)tabViewType;
+(id)defaultPNGName;
+(SCD_Struct_Ph0)badge;
-(char)shouldSnapshot;
-(void)prepareForSnapshot;
-(char)tabBarControllerShouldSelectViewController:(id)arg1 ;
-(void)setDisableContactsWithoutHandles:(char)arg1 ;
-(void)_restoreState;
-(char)disableContactsWithoutHandles;
-(char)shouldSaveAndRestoreState;
-(void)setSavedPerson:(CNContact *)arg1 ;
-(CNContact *)savedPerson;
-(void)addNotificationObservers;
-(void)removeNotificationObservers;
-(void)fetchPreferences;
-(void)fetchTelephoneNumber;
-(char)shouldFetchTelephoneNumber;
-(id<PHContactsControllerDelegate>)contactsControllerDelegate;
-(void)setShouldFetchTelephoneNumber:(char)arg1 ;
-(void)setTelephoneNumber:(NSString *)arg1 ;
-(void)phoneApplicationPreferencesChanged:(id)arg1 ;
-(void)setContactsControllerDelegate:(id<PHContactsControllerDelegate>)arg1 ;
-(void)contactNavigationControllerDidCancel:(id)arg1 ;
-(char)contactNavigationController:(id)arg1 canSelectContact:(id)arg2 ;
-(char)contactNavigationController:(id)arg1 shouldShowCardForContact:(id)arg2 ;
-(char)contactNavigationController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(NSString *)telephoneNumber;
-(void)handleURL:(id)arg1 ;
@end

