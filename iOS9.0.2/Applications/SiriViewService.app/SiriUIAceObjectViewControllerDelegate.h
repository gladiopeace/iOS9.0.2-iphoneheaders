/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SiriUIAceObjectViewControllerDelegate <NSObject>
@required
-(void)siriViewController:(id)arg1 openURL:(id)arg2 completion:(/*^block*/id)arg3;
-(void)siriViewControllerHeightDidChange:(id)arg1 pinTopOfSnippet:(char)arg2;
-(char)siriViewController:(id)arg1 openURL:(id)arg2;
-(id)siriViewController:(id)arg1 domainObjectForIdentifier:(id)arg2;
-(void)siriViewController:(id)arg1 setDomainObject:(id)arg2 forIdentifier:(id)arg3;
-(id)siriViewControllerEffectiveBundleForCoreLocation:(id)arg1;
-(CGSize*)siriViewControllerVisibleContentArea:(id)arg1;
-(void)siriViewControllerHeightDidChange:(id)arg1;
-(void)siriViewController:(id)arg1 setContentOffset:(float)arg2;
-(id)siriViewController:(id)arg1 disambiguationItemForListItem:(id)arg2 disambiguationKey:(id)arg3;
-(id)siriViewController:(id)arg1 listItemToPickInAutodisambiguationForListItems:(id)arg2;
-(void)siriViewController:(id)arg1 addSelectionResponse:(id)arg2;
-(id)persistentStoreForSiriViewController:(id)arg1;
-(void)siriViewController:(id)arg1 didHideVibrantView:(id)arg2;
-(UIEdgeInsets*)siriViewControllerDisplayInsetsForVisibleSpace:(id)arg1;
-(float)siriSnippetViewControllerExpectedWidth:(id)arg1;
-(void)siriViewController:(id)arg1 sendGenericAceCommands:(id)arg2;
-(char)siriViewController:(id)arg1 openPunchOut:(id)arg2;
-(void)cancelRequestForSiriSnippetViewController:(id)arg1;
-(void)siriViewController:(id)arg1 performAceCommands:(id)arg2;
-(UIEdgeInsets*)siriViewControllerBackgroundInsets:(id)arg1;
-(float)siriViewControllerExpectedWidth:(id)arg1;

@end

