/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CNAvatarViewDelegate <NSObject>
@optional
-(char)shouldShowActionsForAvatarView:(id)arg1;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
-(void)avatarView:(id)arg1 willShowActions:(id)arg2;
-(char)avatarView:(id)arg1 shouldShowContact:(id)arg2;
-(void)willDismissActionsForAvatarView:(id)arg1;
-(void)didDismissActionsForAvatarView:(id)arg1;

@required
-(id)presentingViewControllerForAvatarView:(id)arg1;

@end

