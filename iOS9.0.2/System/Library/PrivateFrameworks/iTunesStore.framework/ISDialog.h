/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSAuthenticationContext, NSArray, NSString, NSLock, NSMutableDictionary;

@interface ISDialog : NSObject <SSXPCCoding> {

	char _allowsBioAuthorization;
	char _allowDuplicates;
	SSAuthenticationContext* _authenticationContext;
	char _authorizationIsForced;
	NSArray* _buttons;
	int _defaultButtonIndex;
	NSString* _displayCountKey;
	char _dismissOnHomeButton;
	char _dismissOnLock;
	char _expectsResponse;
	char _groupsTextFields;
	int _kind;
	NSLock* _lock;
	int _maxDisplayCount;
	NSString* _message;
	char _noDefaultButton;
	char _oneButtonPerLine;
	char _shouldDismissAfterUnlock;
	char _shouldDisplayAsTopMost;
	char _shouldPendInSetupIfNotAllowed;
	NSArray* _textFields;
	NSString* _title;
	int _unlockActionButtonIndex;
	NSMutableDictionary* _userInfo;
	CFDictionaryRef _userNotificationValues;
	char _displaysOnLockscreen;

}

@property (retain) NSArray * buttons;                                          //@synthesize buttons=_buttons - In the implementation block
@property (assign) int defaultButtonIndex;                                     //@synthesize defaultButtonIndex=_defaultButtonIndex - In the implementation block
@property (assign) char oneButtonPerLine;                                      //@synthesize oneButtonPerLine=_oneButtonPerLine - In the implementation block
@property (assign) int unlockActionButtonIndex;                                //@synthesize unlockActionButtonIndex=_unlockActionButtonIndex - In the implementation block
@property (assign) char groupsTextFields;                                      //@synthesize groupsTextFields=_groupsTextFields - In the implementation block
@property (retain) NSArray * textFields;                                       //@synthesize textFields=_textFields - In the implementation block
@property (retain) NSString * message;                                         //@synthesize message=_message - In the implementation block
@property (retain) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (assign) char allowDuplicates;                                       //@synthesize allowDuplicates=_allowDuplicates - In the implementation block
@property (assign) char authorizationIsForced;                                 //@synthesize authorizationIsForced=_authorizationIsForced - In the implementation block
@property (assign) char dismissOnHomeButton;                                   //@synthesize dismissOnHomeButton=_dismissOnHomeButton - In the implementation block
@property (assign) char dismissOnLock;                                         //@synthesize dismissOnLock=_dismissOnLock - In the implementation block
@property (assign) char expectsResponse;                                       //@synthesize expectsResponse=_expectsResponse - In the implementation block
@property (assign) char shouldDismissAfterUnlock;                              //@synthesize shouldDismissAfterUnlock=_shouldDismissAfterUnlock - In the implementation block
@property (assign) char shouldDisplayAsTopMost;                                //@synthesize shouldDisplayAsTopMost=_shouldDisplayAsTopMost - In the implementation block
@property (assign) char shouldPendInSetupIfNotAllowed;                         //@synthesize shouldPendInSetupIfNotAllowed=_shouldPendInSetupIfNotAllowed - In the implementation block
@property (assign) char displaysOnLockscreen;                                  //@synthesize displaysOnLockscreen=_displaysOnLockscreen - In the implementation block
@property (assign) char noDefaultButton;                                       //@synthesize noDefaultButton=_noDefaultButton - In the implementation block
@property (assign) int kind;                                                   //@synthesize kind=_kind - In the implementation block
@property (copy) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (copy) NSString * displayCountKey; 
@property (assign) int maximumDisplayCount; 
@property (getter=isDisplayable,readonly) char displayable; 
@property (readonly) char allowsBioAuthorization; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ITunesStoreNotAvailableDialog;
+(int)displayCountForKey:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)setKind:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)title;
-(NSString *)message;
-(int)defaultButtonIndex;
-(void)setMessage:(NSString *)arg1 ;
-(NSArray *)textFields;
-(void)setDefaultButtonIndex:(int)arg1 ;
-(void)setGroupsTextFields:(char)arg1 ;
-(char)groupsTextFields;
-(int)kind;
-(NSArray *)buttons;
-(char)dismissOnLock;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
-(void)setExpectsResponse:(char)arg1 ;
-(char)expectsResponse;
-(id)initWithDialogDictionary:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(char)allowsBioAuthorization;
-(char)noDefaultButton;
-(id)copyUserNotification;
-(char)allowDuplicates;
-(id)initWithAuthenticationChallege:(id)arg1 ;
-(void)setAllowDuplicates:(char)arg1 ;
-(void)setAuthorizationIsForced:(char)arg1 ;
-(int)_kindForString:(id)arg1 ;
-(int)unlockActionButtonIndex;
-(char)displaysOnLockscreen;
-(char)dismissOnHomeButton;
-(char)oneButtonPerLine;
-(char)shouldDisplayAsTopMost;
-(char)shouldDismissAfterUnlock;
-(char)shouldPendInSetupIfNotAllowed;
-(id)initWithOfferDeviceError:(id)arg1 ;
-(void*)copyValueForCFUserNotificationKey:(CFStringRef)arg1 ;
-(NSString *)displayCountKey;
-(int)maximumDisplayCount;
-(void)setButtonsWithTitles:(id)arg1 ;
-(void)setDisplayCountKey:(NSString *)arg1 ;
-(void)setMaximumDisplayCount:(int)arg1 ;
-(void)setValue:(id)arg1 forUserInfoKey:(id)arg2 ;
-(void)setValue:(void*)arg1 forCFUserNotificationKey:(CFStringRef)arg2 ;
-(id)valueForUserInfoKey:(id)arg1 ;
-(char)authorizationIsForced;
-(void)setDismissOnHomeButton:(char)arg1 ;
-(void)setDismissOnLock:(char)arg1 ;
-(void)setNoDefaultButton:(char)arg1 ;
-(void)setOneButtonPerLine:(char)arg1 ;
-(void)setShouldDismissAfterUnlock:(char)arg1 ;
-(void)setShouldDisplayAsTopMost:(char)arg1 ;
-(void)setShouldPendInSetupIfNotAllowed:(char)arg1 ;
-(void)setUnlockActionButtonIndex:(int)arg1 ;
-(void)setDisplaysOnLockscreen:(char)arg1 ;
-(void)setTextFields:(NSArray *)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(char)isDisplayable;
-(void)incrementDisplayCount;
@end
