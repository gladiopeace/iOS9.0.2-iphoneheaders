/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/AcousticId.siriUIBundle/AcousticId
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SiriUISnippetPlugin <NSObject>
@optional
-(void)setOrientationDelegate:(id)arg1;
-(id)viewControllerForSnippet:(id)arg1;
-(char)listItem:(id)arg1 isEqualToListItem:(id)arg2;
-(char)listItem:(id)arg1 isPreferredOverListItem:(id)arg2;
-(id)viewControllerForSnippet:(id)arg1 error:(id*)arg2;
-(id)viewControllerForAceObject:(id)arg1;
-(id)disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2;
-(id)speakableNamespaceProviderForAceObject:(id)arg1;

@end

