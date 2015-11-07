/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EKParticipant, NSString;

@interface EKParticipantForSorting : NSObject {

	EKParticipant* _participant;
	char _isEmail;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _cachedDisplayName;

}
-(id)participant;
-(id)initWithEKParticipant:(id)arg1 ;
-(id)firstName;
-(id)lastName;
-(id)description;
-(int)compare:(id)arg1 ;
-(id)displayName;
-(char)isEmail;
@end

